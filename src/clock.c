#include "global.h"
#include "clock.h"
#include "event_data.h"
#include "rtc.h"
#include "field_specials.h"
#include "field_weather.h"
#include "berry.h"
#include "main.h"
#include "overworld.h"

static void UpdatePerDay(struct Time *localTime);
//static void UpdatePerMinute(struct Time *localTime);

void InitTimeBasedEvents(void)
{
    FlagSet(FLAG_SYS_CLOCK_SET);
    RtcCalcLocalTime();
    VarSet(VAR_DAYS, gLocalTime.days);
}

void DoTimeBasedEvents(void)
{
    if (FlagGet(FLAG_SYS_CLOCK_SET))
    {
        RtcCalcLocalTime();
        UpdatePerDay(&gLocalTime);
        //UpdatePerMinute(&gLocalTime);
    }
}

static void UpdatePerDay(struct Time *localTime)
{
    u16 *varPtr = GetVarPointer(VAR_DAYS);
    int days = *varPtr;
    u16 daysSince;

    if (days != localTime->days && days <= localTime->days)
    {
        daysSince = localTime->days - days;
        //ClearDailyFlags();
        // UpdateDewfordTrendPerDay(daysSince);
        // UpdateTVShowsPerDay(daysSince);
        //UpdateWeatherPerDay(daysSince);
        //UpdatePartyPokerusTime(daysSince);
        // UpdateMirageRnd(daysSince);
        // UpdateBirchState(daysSince);
        // SetShoalItemFlag(daysSince);
        //SetRandomLotteryNumber(daysSince);
        *varPtr = localTime->days;
    }
}

// static void UpdatePerMinute(struct Time *localTime)
// {
//     struct Time difference;
//     int minutes;

//     CalcTimeDifference(&difference, &gSaveBlock2.lastBerryTreeUpdate, localTime);
//     minutes = 24 * 60 * difference.days + 60 * difference.hours + difference.minutes;
//     if (minutes != 0)
//     {
//         if (minutes >= 0)
//         {
//             BerryTreeTimeUpdate(minutes);
//             gSaveBlock2.lastBerryTreeUpdate = *localTime;
//         }
//     }
// }
