#include "pokedex.h"

static const u16 Objective_Dummy(void)
{
    return 0;
}

static const u16 Objective_DummyComplete(void)
{
    return 10000;
}

static const u16 Objective_PokedexMaster(void)
{
    return GetNationalPokedexCount(FLAG_GET_SEEN);
}

static const u16 Objective_CatchEmAll(void)
{
    return GetNationalPokedexCount(FLAG_GET_CAUGHT);
}
