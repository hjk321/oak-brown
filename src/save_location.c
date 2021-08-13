#include "global.h"
#include "save_location.h"
#include "constants/maps.h"

static bool32 IsCurMapInLocationList(const u16 *list)
{
    s32 i;
    u16 locSum = (gSaveBlock1Ptr->location.mapGroup << 8) + (gSaveBlock1Ptr->location.mapNum);

    for (i = 0; list[i] != 0xFFFF; i++)
    {
        if (list[i] == locSum)
            return TRUE;
    }
    return FALSE;
}

static const u16 sSaveLocationPokeCenterList[] = 
{
    MAP_DEBUG_PLACEHOLDER,
    0xFFFF,
};

bool32 IsCurMapPokeCenter(void)
{
    return IsCurMapInLocationList(sSaveLocationPokeCenterList);
}

static const u16 sSaveLocationReloadLocList[] = { 0xFFFF };

static bool32 IsCurMapReloadLocation(void)
{
    return IsCurMapInLocationList(sSaveLocationReloadLocList);
}

static const u16 sUnknown_8453094[] = { 0xFFFF };

static bool32 sub_810B75C(void)
{
    return IsCurMapInLocationList(sUnknown_8453094);
}

static void TrySetPokeCenterWarpStatus(void)
{
    if (IsCurMapPokeCenter() == FALSE)
        gSaveBlock2Ptr->specialSaveWarpFlags &= ~(POKECENTER_SAVEWARP);
    else
        gSaveBlock2Ptr->specialSaveWarpFlags |= POKECENTER_SAVEWARP;
}

static void TrySetReloadWarpStatus(void)
{
    if (!IsCurMapReloadLocation())
        gSaveBlock2Ptr->specialSaveWarpFlags &= ~(LOBBY_SAVEWARP);
    else
        gSaveBlock2Ptr->specialSaveWarpFlags |= LOBBY_SAVEWARP;
}

static void sub_810B7CC(void)
{
    if (!sub_810B75C())
        gSaveBlock2Ptr->specialSaveWarpFlags &= ~(UNK_SPECIAL_SAVE_WARP_FLAG_3);
    else
        gSaveBlock2Ptr->specialSaveWarpFlags |= UNK_SPECIAL_SAVE_WARP_FLAG_3;
}

void TrySetMapSaveWarpStatus(void)
{
    TrySetPokeCenterWarpStatus();
    TrySetReloadWarpStatus();
    sub_810B7CC();
}

void SetUnlockedPokedexFlags(void)
{
    gSaveBlock2Ptr->gcnLinkFlags |= 0x1;
    gSaveBlock2Ptr->gcnLinkFlags |= 0x10;
    gSaveBlock2Ptr->gcnLinkFlags |= 0x20;
}

void SetPostgameFlags(void)
{
    gSaveBlock2Ptr->specialSaveWarpFlags |= CHAMPION_SAVEWARP;
    gSaveBlock2Ptr->gcnLinkFlags |= 0x2;
    gSaveBlock2Ptr->gcnLinkFlags |= 0x4;
    gSaveBlock2Ptr->gcnLinkFlags |= 0x8;
    gSaveBlock2Ptr->gcnLinkFlags |= 0x8000;
}
