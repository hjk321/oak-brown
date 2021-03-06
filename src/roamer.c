#include "global.h"
#include "random.h"
#include "overworld.h"
#include "field_specials.h"
#include "constants/maps.h"
#include "constants/region_map_sections.h"

EWRAM_DATA u8 sLocationHistory[3][2] = {};
EWRAM_DATA u8 sRoamerLocation[2] = {};

#define saveRoamer (*(&gSaveBlock2Ptr->roamer))

enum
{
    MAP_GRP = 0, // map group
    MAP_NUM = 1, // map number
};

const u8 sRoamerLocations[][7] = {
    {MAP_NUM(DEBUG_PLACEHOLDER), MAP_NUM(DEBUG_PLACEHOLDER), MAP_NUM(DEBUG_PLACEHOLDER), MAP_NUM(DEBUG_PLACEHOLDER), 0xff, 0xff, 0xff},
    {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}
};

void ClearRoamerData(void)
{
    u32 i;
    gSaveBlock2Ptr->roamer = (struct Roamer){};
    sRoamerLocation[MAP_GRP] = 0;
    sRoamerLocation[MAP_NUM] = 0;
    for (i = 0; i < 3; i++)
    {
        sLocationHistory[i][MAP_GRP] = 0;
        sLocationHistory[i][MAP_NUM] = 0;
    }
}

#define GetRoamerSpecies() ({\
    u16 a;\
    switch (GetStarterSpecies())\
    {\
    default:\
        a = SPECIES_RAIKOU;\
        break;\
    case SPECIES_BULBASAUR:\
        a = SPECIES_ENTEI;\
        break;\
    case SPECIES_CHARMANDER:\
        a = SPECIES_SUICUNE;\
        break;\
    }\
    a;\
})

void CreateInitialRoamerMon(void)
{
    struct Pokemon * tmpMon = &gEnemyParty[0];
    u16 roamerMon;

    CreateMon(tmpMon, (roamerMon = GetRoamerSpecies()), 50, 0x20, 0, 0, 0, 0);
    saveRoamer.species = roamerMon;
    saveRoamer.level = 50;
    saveRoamer.status = 0;
    saveRoamer.active = TRUE;
    saveRoamer.ivs = GetMonData(tmpMon, MON_DATA_IVS);
    saveRoamer.personality = GetMonData(tmpMon, MON_DATA_PERSONALITY);
    saveRoamer.hp = GetMonData(tmpMon, MON_DATA_MAX_HP);
    saveRoamer.cool = GetMonData(tmpMon, MON_DATA_COOL);
    saveRoamer.beauty = GetMonData(tmpMon, MON_DATA_BEAUTY);
    saveRoamer.cute = GetMonData(tmpMon, MON_DATA_CUTE);
    saveRoamer.smart = GetMonData(tmpMon, MON_DATA_SMART);
    saveRoamer.tough = GetMonData(tmpMon, MON_DATA_TOUGH);
    sRoamerLocation[MAP_GRP] = 3;
    sRoamerLocation[MAP_NUM] = sRoamerLocations[Random() % (NELEMS(sRoamerLocations) - 1)][0];
}

void InitRoamer(void)
{
    ClearRoamerData();
    CreateInitialRoamerMon();
}

void UpdateLocationHistoryForRoamer(void)
{
    sLocationHistory[2][MAP_GRP] = sLocationHistory[1][MAP_GRP];
    sLocationHistory[2][MAP_NUM] = sLocationHistory[1][MAP_NUM];
    sLocationHistory[1][MAP_GRP] = sLocationHistory[0][MAP_GRP];
    sLocationHistory[1][MAP_NUM] = sLocationHistory[0][MAP_NUM];
    sLocationHistory[0][MAP_GRP] = gSaveBlock1Ptr->location.mapGroup;
    sLocationHistory[0][MAP_NUM] = gSaveBlock1Ptr->location.mapNum;
}

void RoamerMoveToOtherLocationSet(void)
{
    u8 mapNum = 0;
    struct Roamer *roamer = &saveRoamer;

    if (!roamer->active)
        return;

    sRoamerLocation[MAP_GRP] = 3;

    while (1)
    {
        mapNum = sRoamerLocations[Random() % (NELEMS(sRoamerLocations) - 1)][0];
        if (sRoamerLocation[MAP_NUM] != mapNum)
        {
            sRoamerLocation[MAP_NUM] = mapNum;
            return;
        }
    }
}


void RoamerMove(void)
{
    u8 locSet = 0;

    if ((Random() % 16) == 0)
    {
        RoamerMoveToOtherLocationSet();
    }
    else
    {
        struct Roamer *roamer = &saveRoamer;

        if (!roamer->active)
            return;

        while (locSet < (NELEMS(sRoamerLocations) - 1))
        {
            if (sRoamerLocation[MAP_NUM] == sRoamerLocations[locSet][0])
            {
                u8 mapNum;
                while (1)
                {
                    mapNum = sRoamerLocations[locSet][(Random() % 6) + 1];
                    if (!(sLocationHistory[2][MAP_GRP] == 3 && sLocationHistory[2][MAP_NUM] == mapNum) && mapNum != 0xFF)
                        break;
                }
                sRoamerLocation[MAP_NUM] = mapNum;
                return;
            }
            locSet++;
        }
    }
}

bool8 IsRoamerAt(u8 mapGroup, u8 mapNum)
{
    struct Roamer *roamer = &saveRoamer;

    if (roamer->active && mapGroup == sRoamerLocation[MAP_GRP] && mapNum == sRoamerLocation[MAP_NUM])
        return TRUE;
    else
        return FALSE;
}

void CreateRoamerMonInstance(void)
{
    struct Pokemon *mon;
    struct Roamer *roamer;

    mon = &gEnemyParty[0];
    ZeroEnemyPartyMons();
    roamer = &saveRoamer;
    CreateMonWithIVsPersonality(mon, roamer->species, roamer->level, roamer->ivs, roamer->personality);
    SetMonData(mon, MON_DATA_STATUS, &gSaveBlock2Ptr->roamer.status);
    SetMonData(mon, MON_DATA_HP, &gSaveBlock2Ptr->roamer.hp);
    SetMonData(mon, MON_DATA_COOL, &gSaveBlock2Ptr->roamer.cool);
    SetMonData(mon, MON_DATA_BEAUTY, &gSaveBlock2Ptr->roamer.beauty);
    SetMonData(mon, MON_DATA_CUTE, &gSaveBlock2Ptr->roamer.cute);
    SetMonData(mon, MON_DATA_SMART, &gSaveBlock2Ptr->roamer.smart);
    SetMonData(mon, MON_DATA_TOUGH, &gSaveBlock2Ptr->roamer.tough);
}

bool8 TryStartRoamerEncounter(void)
{
    if (IsRoamerAt(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum) == TRUE && (Random() % 4) == 0)
    {
        CreateRoamerMonInstance();
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void UpdateRoamerHPStatus(struct Pokemon *mon)
{
    saveRoamer.hp = GetMonData(mon, MON_DATA_HP);
    saveRoamer.status = GetMonData(mon, MON_DATA_STATUS);

    RoamerMoveToOtherLocationSet();
}

void SetRoamerInactive(void)
{
    struct Roamer *roamer = &saveRoamer;
    roamer->active = FALSE;
}

void GetRoamerLocation(u8 *mapGroup, u8 *mapNum)
{
    *mapGroup = sRoamerLocation[MAP_GRP];
    *mapNum = sRoamerLocation[MAP_NUM];
}

u16 GetRoamerLocationMapSectionId(void)
{
    struct Roamer *roamer = &saveRoamer;
    if (!saveRoamer.active)
        return MAPSEC_NONE;
    return Overworld_GetMapHeaderByGroupAndId(sRoamerLocation[MAP_GRP], sRoamerLocation[MAP_NUM])->regionMapSectionId;
}
