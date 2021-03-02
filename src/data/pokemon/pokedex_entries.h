const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("UNKNOWN"),
        .height = 0,
        .weight = 0,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
        .categoryName = _("SEED"),
        .height = 7,
        .weight = 69,
        .pokemonScale = 356,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
        .categoryName = _("SEED"),
        .height = 10,
        .weight = 130,
        .pokemonScale = 332,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
        .categoryName = _("SEED"),
        .height = 20,
        .weight = 1000,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 375,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
        .categoryName = _("LIZARD"),
        .height = 6,
        .weight = 85,
        .pokemonScale = 410,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
        .categoryName = _("FLAME"),
        .height = 11,
        .weight = 190,
        .pokemonScale = 294,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
        .categoryName = _("FLAME"),
        .height = 17,
        .weight = 905,
        .pokemonScale = 271,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
        .categoryName = _("TINY TURTLE"),
        .height = 5,
        .weight = 90,
        .pokemonScale = 412,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
        .categoryName = _("TURTLE"),
        .height = 10,
        .weight = 225,
        .pokemonScale = 334,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
        .categoryName = _("SHELLFISH"),
        .height = 16,
        .weight = 855,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 329,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CATERPIE] =
    {
        .categoryName = _("WORM"),
        .height = 3,
        .weight = 29,
        .pokemonScale = 549,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_METAPOD] =
    {
        .categoryName = _("COCOON"),
        .height = 7,
        .weight = 99,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BUTTERFREE] =
    {
        .categoryName = _("BUTTERFLY"),
        .height = 11,
        .weight = 320,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WEEDLE] =
    {
        .categoryName = _("HAIRY BUG"),
        .height = 3,
        .weight = 32,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KAKUNA] =
    {
        .categoryName = _("COCOON"),
        .height = 6,
        .weight = 100,
        .pokemonScale = 424,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BEEDRILL] =
    {
        .categoryName = _("POISON BEE"),
        .height = 10,
        .weight = 295,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PIDGEY] =
    {
        .categoryName = _("TINY BIRD"),
        .height = 3,
        .weight = 18,
        .pokemonScale = 492,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PIDGEOTTO] =
    {
        .categoryName = _("BIRD"),
        .height = 11,
        .weight = 300,
        .pokemonScale = 334,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PIDGEOT] =
    {
        .categoryName = _("BIRD"),
        .height = 15,
        .weight = 395,
        .pokemonScale = 269,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_RATTATA] =
    {
        .categoryName = _("MOUSE"),
        .height = 3,
        .weight = 35,
        .pokemonScale = 481,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_RATICATE] =
    {
        .categoryName = _("MOUSE"),
        .height = 7,
        .weight = 185,
        .pokemonScale = 401,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SPEAROW] =
    {
        .categoryName = _("TINY BIRD"),
        .height = 3,
        .weight = 20,
        .pokemonScale = 571,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FEAROW] =
    {
        .categoryName = _("BEAK"),
        .height = 12,
        .weight = 380,
        .pokemonScale = 282,
        .pokemonOffset = -1,
        .trainerScale = 272,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_EKANS] =
    {
        .categoryName = _("SNAKE"),
        .height = 20,
        .weight = 69,
        .pokemonScale = 298,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ARBOK] =
    {
        .categoryName = _("COBRA"),
        .height = 35,
        .weight = 650,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
        .categoryName = _("MOUSE"),
        .height = 4,
        .weight = 60,
        .pokemonScale = 479,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_RAICHU] =
    {
        .categoryName = _("MOUSE"),
        .height = 8,
        .weight = 300,
        .pokemonScale = 426,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SANDSHREW] =
    {
        .categoryName = _("MOUSE"),
        .height = 6,
        .weight = 120,
        .pokemonScale = 370,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SANDSLASH] =
    {
        .categoryName = _("MOUSE"),
        .height = 10,
        .weight = 295,
        .pokemonScale = 341,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NIDORAN_F] =
    {
        .categoryName = _("POISON PIN"),
        .height = 4,
        .weight = 70,
        .pokemonScale = 488,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NIDORINA] =
    {
        .categoryName = _("POISON PIN"),
        .height = 8,
        .weight = 200,
        .pokemonScale = 381,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NIDOQUEEN] =
    {
        .categoryName = _("DRILL"),
        .height = 13,
        .weight = 600,
        .pokemonScale = 283,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NIDORAN_M] =
    {
        .categoryName = _("POISON PIN"),
        .height = 5,
        .weight = 90,
        .pokemonScale = 480,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NIDORINO] =
    {
        .categoryName = _("POISON PIN"),
        .height = 9,
        .weight = 195,
        .pokemonScale = 408,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NIDOKING] =
    {
        .categoryName = _("DRILL"),
        .height = 14,
        .weight = 620,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 323,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CLEFAIRY] =
    {
        .categoryName = _("FAIRY"),
        .height = 6,
        .weight = 75,
        .pokemonScale = 425,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CLEFABLE] =
    {
        .categoryName = _("FAIRY"),
        .height = 13,
        .weight = 400,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 272,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_VULPIX] =
    {
        .categoryName = _("FOX"),
        .height = 6,
        .weight = 99,
        .pokemonScale = 497,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NINETALES] =
    {
        .categoryName = _("FOX"),
        .height = 11,
        .weight = 199,
        .pokemonScale = 339,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_JIGGLYPUFF] =
    {
        .categoryName = _("BALLOON"),
        .height = 5,
        .weight = 55,
        .pokemonScale = 419,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WIGGLYTUFF] =
    {
        .categoryName = _("BALLOON"),
        .height = 10,
        .weight = 120,
        .pokemonScale = 328,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ZUBAT] =
    {
        .categoryName = _("BAT"),
        .height = 8,
        .weight = 75,
        .pokemonScale = 355,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GOLBAT] =
    {
        .categoryName = _("BAT"),
        .height = 16,
        .weight = 550,
        .pokemonScale = 291,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ODDISH] =
    {
        .categoryName = _("WEED"),
        .height = 5,
        .weight = 54,
        .pokemonScale = 423,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GLOOM] =
    {
        .categoryName = _("WEED"),
        .height = 8,
        .weight = 86,
        .pokemonScale = 329,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VILEPLUME] =
    {
        .categoryName = _("FLOWER"),
        .height = 12,
        .weight = 186,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 272,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PARAS] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 3,
        .weight = 54,
        .pokemonScale = 546,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PARASECT] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 10,
        .weight = 295,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VENONAT] =
    {
        .categoryName = _("INSECT"),
        .height = 10,
        .weight = 300,
        .pokemonScale = 360,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VENOMOTH] =
    {
        .categoryName = _("POISON MOTH"),
        .height = 15,
        .weight = 125,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 293,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
        .categoryName = _("MOLE"),
        .height = 2,
        .weight = 8,
        .pokemonScale = 706,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DUGTRIO] =
    {
        .categoryName = _("MOLE"),
        .height = 7,
        .weight = 333,
        .pokemonScale = 384,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MEOWTH] =
    {
        .categoryName = _("SCRATCH CAT"),
        .height = 4,
        .weight = 42,
        .pokemonScale = 480,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PERSIAN] =
    {
        .categoryName = _("CLASSY CAT"),
        .height = 10,
        .weight = 320,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PSYDUCK] =
    {
        .categoryName = _("DUCK"),
        .height = 8,
        .weight = 196,
        .pokemonScale = 347,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GOLDUCK] =
    {
        .categoryName = _("DUCK"),
        .height = 17,
        .weight = 766,
        .pokemonScale = 272,
        .pokemonOffset = 4,
        .trainerScale = 287,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MANKEY] =
    {
        .categoryName = _("PIG MONKEY"),
        .height = 5,
        .weight = 280,
        .pokemonScale = 388,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PRIMEAPE] =
    {
        .categoryName = _("PIG MONKEY"),
        .height = 10,
        .weight = 320,
        .pokemonScale = 326,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GROWLITHE] =
    {
        .categoryName = _("PUPPY"),
        .height = 7,
        .weight = 190,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ARCANINE] =
    {
        .categoryName = _("LEGENDARY"),
        .height = 19,
        .weight = 1550,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 312,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_POLIWAG] =
    {
        .categoryName = _("TADPOLE"),
        .height = 6,
        .weight = 124,
        .pokemonScale = 353,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_POLIWHIRL] =
    {
        .categoryName = _("TADPOLE"),
        .height = 10,
        .weight = 200,
        .pokemonScale = 288,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_POLIWRATH] =
    {
        .categoryName = _("TADPOLE"),
        .height = 13,
        .weight = 540,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ABRA] =
    {
        .categoryName = _("PSI"),
        .height = 9,
        .weight = 195,
        .pokemonScale = 374,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KADABRA] =
    {
        .categoryName = _("PSI"),
        .height = 13,
        .weight = 565,
        .pokemonScale = 272,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ALAKAZAM] =
    {
        .categoryName = _("PSI"),
        .height = 15,
        .weight = 480,
        .pokemonScale = 272,
        .pokemonOffset = -1,
        .trainerScale = 271,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_MACHOP] =
    {
        .categoryName = _("SUPERPOWER"),
        .height = 8,
        .weight = 195,
        .pokemonScale = 320,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MACHOKE] =
    {
        .categoryName = _("SUPERPOWER"),
        .height = 15,
        .weight = 705,
        .pokemonScale = 304,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MACHAMP] =
    {
        .categoryName = _("SUPERPOWER"),
        .height = 16,
        .weight = 1300,
        .pokemonScale = 278,
        .pokemonOffset = 2,
        .trainerScale = 283,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELLSPROUT] =
    {
        .categoryName = _("FLOWER"),
        .height = 7,
        .weight = 40,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WEEPINBELL] =
    {
        .categoryName = _("FLYCATCHER"),
        .height = 10,
        .weight = 64,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VICTREEBEL] =
    {
        .categoryName = _("FLYCATCHER"),
        .height = 17,
        .weight = 155,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 9,
        .weight = 455,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 16,
        .weight = 550,
        .pokemonScale = 272,
        .pokemonOffset = -1,
        .trainerScale = 312,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GEODUDE] =
    {
        .categoryName = _("ROCK"),
        .height = 4,
        .weight = 200,
        .pokemonScale = 330,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GRAVELER] =
    {
        .categoryName = _("ROCK"),
        .height = 10,
        .weight = 1050,
        .pokemonScale = 272,
        .pokemonOffset = 8,
        .trainerScale = 305,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GOLEM] =
    {
        .categoryName = _("MEGATON"),
        .height = 14,
        .weight = 3000,
        .pokemonScale = 266,
        .pokemonOffset = 3,
        .trainerScale = 298,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_PONYTA] =
    {
        .categoryName = _("FIRE HORSE"),
        .height = 10,
        .weight = 300,
        .pokemonScale = 288,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_RAPIDASH] =
    {
        .categoryName = _("FIRE HORSE"),
        .height = 17,
        .weight = 950,
        .pokemonScale = 282,
        .pokemonOffset = -1,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWPOKE] =
    {
        .categoryName = _("DOPEY"),
        .height = 12,
        .weight = 360,
        .pokemonScale = 271,
        .pokemonOffset = 10,
        .trainerScale = 272,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SLOWBRO] =
    {
        .categoryName = _("HERMIT CRAB"),
        .height = 16,
        .weight = 785,
        .pokemonScale = 257,
        .pokemonOffset = -2,
        .trainerScale = 312,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNEMITE] =
    {
        .categoryName = _("MAGNET"),
        .height = 3,
        .weight = 60,
        .pokemonScale = 294,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MAGNETON] =
    {
        .categoryName = _("MAGNET"),
        .height = 10,
        .weight = 600,
        .pokemonScale = 293,
        .pokemonOffset = -4,
        .trainerScale = 273,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FARFETCHD] =
    {
        .categoryName = _("WILD DUCK"),
        .height = 8,
        .weight = 150,
        .pokemonScale = 317,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = -3,
    },

    [NATIONAL_DEX_DODUO] =
    {
        .categoryName = _("TWIN BIRD"),
        .height = 14,
        .weight = 392,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DODRIO] =
    {
        .categoryName = _("TRIPLE BIRD"),
        .height = 18,
        .weight = 852,
        .pokemonScale = 272,
        .pokemonOffset = -2,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SEEL] =
    {
        .categoryName = _("SEA LION"),
        .height = 11,
        .weight = 900,
        .pokemonScale = 298,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DEWGONG] =
    {
        .categoryName = _("SEA LION"),
        .height = 17,
        .weight = 1200,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 306,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_GRIMER] =
    {
        .categoryName = _("SLUDGE"),
        .height = 9,
        .weight = 300,
        .pokemonScale = 258,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = _("SLUDGE"),
        .height = 12,
        .weight = 300,
        .pokemonScale = 288,
        .pokemonOffset = 7,
        .trainerScale = 288,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SHELLDER] =
    {
        .categoryName = _("BIVALVE"),
        .height = 3,
        .weight = 40,
        .pokemonScale = 643,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CLOYSTER] =
    {
        .categoryName = _("BIVALVE"),
        .height = 15,
        .weight = 1325,
        .pokemonScale = 264,
        .pokemonOffset = 0,
        .trainerScale = 288,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_GASTLY] =
    {
        .categoryName = _("GAS"),
        .height = 13,
        .weight = 1,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HAUNTER] =
    {
        .categoryName = _("GAS"),
        .height = 16,
        .weight = 1,
        .pokemonScale = 269,
        .pokemonOffset = 2,
        .trainerScale = 308,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GENGAR] =
    {
        .categoryName = _("SHADOW"),
        .height = 15,
        .weight = 405,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 317,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ONIX] =
    {
        .categoryName = _("ROCK SNAKE"),
        .height = 88,
        .weight = 2100,
        .pokemonScale = 257,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_DROWZEE] =
    {
        .categoryName = _("HYPNOSIS"),
        .height = 10,
        .weight = 324,
        .pokemonScale = 274,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HYPNO] =
    {
        .categoryName = _("HYPNOSIS"),
        .height = 16,
        .weight = 756,
        .pokemonScale = 298,
        .pokemonOffset = 3,
        .trainerScale = 310,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KRABBY] =
    {
        .categoryName = _("RIVER CRAB"),
        .height = 4,
        .weight = 65,
        .pokemonScale = 469,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KINGLER] =
    {
        .categoryName = _("PINCER"),
        .height = 13,
        .weight = 600,
        .pokemonScale = 287,
        .pokemonOffset = 3,
        .trainerScale = 308,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_VOLTORB] =
    {
        .categoryName = _("BALL"),
        .height = 5,
        .weight = 104,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ELECTRODE] =
    {
        .categoryName = _("BALL"),
        .height = 12,
        .weight = 666,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_EXEGGCUTE] =
    {
        .categoryName = _("EGG"),
        .height = 4,
        .weight = 25,
        .pokemonScale = 495,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_EXEGGUTOR] =
    {
        .categoryName = _("COCONUT"),
        .height = 20,
        .weight = 1200,
        .pokemonScale = 283,
        .pokemonOffset = 0,
        .trainerScale = 376,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CUBONE] =
    {
        .categoryName = _("LONELY"),
        .height = 4,
        .weight = 65,
        .pokemonScale = 545,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MAROWAK] =
    {
        .categoryName = _("BONE KEEPER"),
        .height = 10,
        .weight = 450,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HITMONLEE] =
    {
        .categoryName = _("KICKING"),
        .height = 15,
        .weight = 498,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 273,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HITMONCHAN] =
    {
        .categoryName = _("PUNCHING"),
        .height = 14,
        .weight = 502,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 264,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LICKITUNG] =
    {
        .categoryName = _("LICKING"),
        .height = 12,
        .weight = 655,
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 272,
        .trainerOffset = -3,
    },

    [NATIONAL_DEX_KOFFING] =
    {
        .categoryName = _("POISON GAS"),
        .height = 6,
        .weight = 10,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WEEZING] =
    {
        .categoryName = _("POISON GAS"),
        .height = 12,
        .weight = 95,
        .pokemonScale = 321,
        .pokemonOffset = -1,
        .trainerScale = 276,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_RHYHORN] =
    {
        .categoryName = _("SPIKES"),
        .height = 10,
        .weight = 1150,
        .pokemonScale = 291,
        .pokemonOffset = 7,
        .trainerScale = 276,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_RHYDON] =
    {
        .categoryName = _("DRILL"),
        .height = 19,
        .weight = 1200,
        .pokemonScale = 272,
        .pokemonOffset = -1,
        .trainerScale = 344,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CHANSEY] =
    {
        .categoryName = _("EGG"),
        .height = 11,
        .weight = 346,
        .pokemonScale = 257,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TANGELA] =
    {
        .categoryName = _("VINE"),
        .height = 10,
        .weight = 350,
        .pokemonScale = 320,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KANGASKHAN] =
    {
        .categoryName = _("PARENT"),
        .height = 22,
        .weight = 800,
        .pokemonScale = 257,
        .pokemonOffset = -3,
        .trainerScale = 349,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_HORSEA] =
    {
        .categoryName = _("DRAGON"),
        .height = 4,
        .weight = 80,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SEADRA] =
    {
        .categoryName = _("DRAGON"),
        .height = 12,
        .weight = 250,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GOLDEEN] =
    {
        .categoryName = _("GOLDFISH"),
        .height = 6,
        .weight = 150,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SEAKING] =
    {
        .categoryName = _("GOLDFISH"),
        .height = 13,
        .weight = 390,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 288,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_STARYU] =
    {
        .categoryName = _("STAR SHAPE"),
        .height = 8,
        .weight = 345,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_STARMIE] =
    {
        .categoryName = _("MYSTERIOUS"),
        .height = 11,
        .weight = 800,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MR_MIME] =
    {
        .categoryName = _("BARRIER"),
        .height = 13,
        .weight = 545,
        .pokemonScale = 258,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = _("MANTIS"),
        .height = 15,
        .weight = 560,
        .pokemonScale = 272,
        .pokemonOffset = 0,
        .trainerScale = 293,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_JYNX] =
    {
        .categoryName = _("HUMAN SHAPE"),
        .height = 14,
        .weight = 406,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ELECTABUZZ] =
    {
        .categoryName = _("ELECTRIC"),
        .height = 11,
        .weight = 300,
        .pokemonScale = 330,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MAGMAR] =
    {
        .categoryName = _("SPITFIRE"),
        .height = 13,
        .weight = 445,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 272,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PINSIR] =
    {
        .categoryName = _("STAG BEETLE"),
        .height = 15,
        .weight = 550,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 257,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TAUROS] =
    {
        .categoryName = _("WILD BULL"),
        .height = 14,
        .weight = 884,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MAGIKARP] =
    {
        .categoryName = _("FISH"),
        .height = 9,
        .weight = 100,
        .pokemonScale = 317,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GYARADOS] =
    {
        .categoryName = _("ATROCIOUS"),
        .height = 65,
        .weight = 2350,
        .pokemonScale = 288,
        .pokemonOffset = -1,
        .trainerScale = 512,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_LAPRAS] =
    {
        .categoryName = _("TRANSPORT"),
        .height = 25,
        .weight = 2200,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 425,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("TRANSFORM"),
        .height = 3,
        .weight = 40,
        .pokemonScale = 602,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_EEVEE] =
    {
        .categoryName = _("EVOLUTION"),
        .height = 3,
        .weight = 65,
        .pokemonScale = 476,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
        .categoryName = _("BUBBLE JET"),
        .height = 10,
        .weight = 290,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
        .categoryName = _("LIGHTNING"),
        .height = 8,
        .weight = 245,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FLAREON] =
    {
        .categoryName = _("FLAME"),
        .height = 9,
        .weight = 250,
        .pokemonScale = 302,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PORYGON] =
    {
        .categoryName = _("VIRTUAL"),
        .height = 8,
        .weight = 365,
        .pokemonScale = 328,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_OMANYTE] =
    {
        .categoryName = _("SPIRAL"),
        .height = 4,
        .weight = 75,
        .pokemonScale = 521,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_OMASTAR] =
    {
        .categoryName = _("SPIRAL"),
        .height = 10,
        .weight = 350,
        .pokemonScale = 307,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KABUTO] =
    {
        .categoryName = _("SHELLFISH"),
        .height = 5,
        .weight = 115,
        .pokemonScale = 438,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KABUTOPS] =
    {
        .categoryName = _("SHELLFISH"),
        .height = 13,
        .weight = 405,
        .pokemonScale = 271,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_AERODACTYL] =
    {
        .categoryName = _("FOSSIL"),
        .height = 18,
        .weight = 590,
        .pokemonScale = 275,
        .pokemonOffset = -1,
        .trainerScale = 317,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SNORLAX] =
    {
        .categoryName = _("SLEEPING"),
        .height = 21,
        .weight = 4600,
        .pokemonScale = 275,
        .pokemonOffset = 1,
        .trainerScale = 408,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ARTICUNO] =
    {
        .categoryName = _("FREEZE"),
        .height = 17,
        .weight = 554,
        .pokemonScale = 278,
        .pokemonOffset = 0,
        .trainerScale = 308,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ZAPDOS] =
    {
        .categoryName = _("ELECTRIC"),
        .height = 16,
        .weight = 526,
        .pokemonScale = 275,
        .pokemonOffset = 1,
        .trainerScale = 330,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MOLTRES] =
    {
        .categoryName = _("FLAME"),
        .height = 20,
        .weight = 600,
        .pokemonScale = 270,
        .pokemonOffset = 1,
        .trainerScale = 379,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_DRATINI] =
    {
        .categoryName = _("DRAGON"),
        .height = 18,
        .weight = 33,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_DRAGONAIR] =
    {
        .categoryName = _("DRAGON"),
        .height = 40,
        .weight = 165,
        .pokemonScale = 274,
        .pokemonOffset = 0,
        .trainerScale = 423,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_DRAGONITE] =
    {
        .categoryName = _("DRAGON"),
        .height = 22,
        .weight = 2100,
        .pokemonScale = 283,
        .pokemonOffset = -1,
        .trainerScale = 342,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEWTWO] =
    {
        .categoryName = _("GENETIC"),
        .height = 20,
        .weight = 1220,
        .pokemonScale = 276,
        .pokemonOffset = -1,
        .trainerScale = 342,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_MEW] =
    {
        .categoryName = _("NEW SPECIES"),
        .height = 4,
        .weight = 40,
        .pokemonScale = 460,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CHIKORITA] =
    {
        .categoryName = _("LEAF"),
        .height = 9,
        .weight = 64,
        .pokemonScale = 512,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BAYLEEF] =
    {
        .categoryName = _("LEAF"),
        .height = 12,
        .weight = 158,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MEGANIUM] =
    {
        .categoryName = _("HERB"),
        .height = 18,
        .weight = 1005,
        .pokemonScale = 286,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CYNDAQUIL] =
    {
        .categoryName = _("FIRE MOUSE"),
        .height = 5,
        .weight = 79,
        .pokemonScale = 539,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_QUILAVA] =
    {
        .categoryName = _("VOLCANO"),
        .height = 9,
        .weight = 190,
        .pokemonScale = 329,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TYPHLOSION] =
    {
        .categoryName = _("VOLCANO"),
        .height = 17,
        .weight = 795,
        .pokemonScale = 284,
        .pokemonOffset = -1,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOTODILE] =
    {
        .categoryName = _("BIG JAW"),
        .height = 6,
        .weight = 95,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CROCONAW] =
    {
        .categoryName = _("BIG JAW"),
        .height = 11,
        .weight = 250,
        .pokemonScale = 378,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FERALIGATR] =
    {
        .categoryName = _("BIG JAW"),
        .height = 23,
        .weight = 888,
        .pokemonScale = 282,
        .pokemonOffset = -1,
        .trainerScale = 375,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_SENTRET] =
    {
        .categoryName = _("SCOUT"),
        .height = 8,
        .weight = 60,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FURRET] =
    {
        .categoryName = _("LONG BODY"),
        .height = 18,
        .weight = 325,
        .pokemonScale = 346,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HOOTHOOT] =
    {
        .categoryName = _("OWL"),
        .height = 7,
        .weight = 212,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NOCTOWL] =
    {
        .categoryName = _("OWL"),
        .height = 16,
        .weight = 408,
        .pokemonScale = 278,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LEDYBA] =
    {
        .categoryName = _("FIVE STAR"),
        .height = 10,
        .weight = 108,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LEDIAN] =
    {
        .categoryName = _("FIVE STAR"),
        .height = 14,
        .weight = 356,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SPINARAK] =
    {
        .categoryName = _("STRING SPIT"),
        .height = 5,
        .weight = 85,
        .pokemonScale = 414,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ARIADOS] =
    {
        .categoryName = _("LONG LEG"),
        .height = 11,
        .weight = 335,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CROBAT] =
    {
        .categoryName = _("BAT"),
        .height = 18,
        .weight = 750,
        .pokemonScale = 279,
        .pokemonOffset = -1,
        .trainerScale = 313,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHINCHOU] =
    {
        .categoryName = _("ANGLER"),
        .height = 5,
        .weight = 120,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LANTURN] =
    {
        .categoryName = _("LIGHT"),
        .height = 12,
        .weight = 225,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = _("TINY MOUSE"),
        .height = 3,
        .weight = 20,
        .pokemonScale = 508,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CLEFFA] =
    {
        .categoryName = _("STAR SHAPE"),
        .height = 3,
        .weight = 30,
        .pokemonScale = 462,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_IGGLYBUFF] =
    {
        .categoryName = _("BALLOON"),
        .height = 3,
        .weight = 10,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TOGEPI] =
    {
        .categoryName = _("SPIKE BALL"),
        .height = 3,
        .weight = 15,
        .pokemonScale = 507,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TOGETIC] =
    {
        .categoryName = _("HAPPINESS"),
        .height = 6,
        .weight = 32,
        .pokemonScale = 424,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NATU] =
    {
        .categoryName = _("TINY BIRD"),
        .height = 2,
        .weight = 20,
        .pokemonScale = 610,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_XATU] =
    {
        .categoryName = _("MYSTIC"),
        .height = 15,
        .weight = 150,
        .pokemonScale = 258,
        .pokemonOffset = 4,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MAREEP] =
    {
        .categoryName = _("WOOL"),
        .height = 6,
        .weight = 78,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FLAAFFY] =
    {
        .categoryName = _("WOOL"),
        .height = 8,
        .weight = 133,
        .pokemonScale = 372,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_AMPHAROS] =
    {
        .categoryName = _("LIGHT"),
        .height = 14,
        .weight = 615,
        .pokemonScale = 275,
        .pokemonOffset = 2,
        .trainerScale = 283,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BELLOSSOM] =
    {
        .categoryName = _("FLOWER"),
        .height = 4,
        .weight = 58,
        .pokemonScale = 472,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MARILL] =
    {
        .categoryName = _("AQUA MOUSE"),
        .height = 4,
        .weight = 85,
        .pokemonScale = 476,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_AZUMARILL] =
    {
        .categoryName = _("AQUA RABBIT"),
        .height = 8,
        .weight = 285,
        .pokemonScale = 448,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SUDOWOODO] =
    {
        .categoryName = _("IMITATION"),
        .height = 12,
        .weight = 380,
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_POLITOED] =
    {
        .categoryName = _("FROG"),
        .height = 11,
        .weight = 339,
        .pokemonScale = 289,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HOPPIP] =
    {
        .categoryName = _("COTTONWEED"),
        .height = 4,
        .weight = 5,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SKIPLOOM] =
    {
        .categoryName = _("COTTONWEED"),
        .height = 6,
        .weight = 10,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_JUMPLUFF] =
    {
        .categoryName = _("COTTONWEED"),
        .height = 8,
        .weight = 30,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_AIPOM] =
    {
        .categoryName = _("LONG TAIL"),
        .height = 8,
        .weight = 115,
        .pokemonScale = 363,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
        .categoryName = _("SEED"),
        .height = 3,
        .weight = 18,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
        .categoryName = _("SUN"),
        .height = 8,
        .weight = 85,
        .pokemonScale = 374,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_YANMA] =
    {
        .categoryName = _("CLEAR WING"),
        .height = 12,
        .weight = 380,
        .pokemonScale = 274,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WOOPER] =
    {
        .categoryName = _("WATER FISH"),
        .height = 4,
        .weight = 85,
        .pokemonScale = 479,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
        .categoryName = _("WATER FISH"),
        .height = 14,
        .weight = 750,
        .pokemonScale = 273,
        .pokemonOffset = 4,
        .trainerScale = 273,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = _("SUN"),
        .height = 9,
        .weight = 265,
        .pokemonScale = 363,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = _("MOONLIGHT"),
        .height = 10,
        .weight = 270,
        .pokemonScale = 317,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MURKROW] =
    {
        .categoryName = _("DARKNESS"),
        .height = 5,
        .weight = 21,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SLOWKING] =
    {
        .categoryName = _("ROYAL"),
        .height = 20,
        .weight = 795,
        .pokemonScale = 265,
        .pokemonOffset = -1,
        .trainerScale = 330,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MISDREAVUS] =
    {
        .categoryName = _("SCREECH"),
        .height = 7,
        .weight = 10,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = _("SYMBOL"),
        .height = 5,
        .weight = 50,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WOBBUFFET] =
    {
        .categoryName = _("PATIENT"),
        .height = 13,
        .weight = 285,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GIRAFARIG] =
    {
        .categoryName = _("LONG NECK"),
        .height = 15,
        .weight = 415,
        .pokemonScale = 281,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PINECO] =
    {
        .categoryName = _("BAGWORM"),
        .height = 6,
        .weight = 72,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FORRETRESS] =
    {
        .categoryName = _("BAGWORM"),
        .height = 12,
        .weight = 1258,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DUNSPARCE] =
    {
        .categoryName = _("LAND SNAKE"),
        .height = 15,
        .weight = 140,
        .pokemonScale = 284,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GLIGAR] =
    {
        .categoryName = _("FLYSCORPION"),
        .height = 11,
        .weight = 648,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_STEELIX] =
    {
        .categoryName = _("IRON SNAKE"),
        .height = 92,
        .weight = 4000,
        .pokemonScale = 278,
        .pokemonOffset = -1,
        .trainerScale = 557,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_SNUBBULL] =
    {
        .categoryName = _("FAIRY"),
        .height = 6,
        .weight = 78,
        .pokemonScale = 465,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GRANBULL] =
    {
        .categoryName = _("FAIRY"),
        .height = 14,
        .weight = 487,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_QWILFISH] =
    {
        .categoryName = _("BALLOON"),
        .height = 5,
        .weight = 39,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = _("PINCER"),
        .height = 18,
        .weight = 1180,
        .pokemonScale = 282,
        .pokemonOffset = 0,
        .trainerScale = 282,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUCKLE] =
    {
        .categoryName = _("MOLD"),
        .height = 6,
        .weight = 205,
        .pokemonScale = 485,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
        .categoryName = _("SINGLE HORN"),
        .height = 15,
        .weight = 540,
        .pokemonScale = 285,
        .pokemonOffset = 0,
        .trainerScale = 283,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
        .categoryName = _("SHARP CLAW"),
        .height = 9,
        .weight = 280,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
        .categoryName = _("LITTLE BEAR"),
        .height = 6,
        .weight = 88,
        .pokemonScale = 455,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_URSARING] =
    {
        .categoryName = _("HIBERNATOR"),
        .height = 18,
        .weight = 1258,
        .pokemonScale = 275,
        .pokemonOffset = 0,
        .trainerScale = 280,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = _("LAVA"),
        .height = 7,
        .weight = 350,
        .pokemonScale = 329,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MAGCARGO] =
    {
        .categoryName = _("LAVA"),
        .height = 8,
        .weight = 550,
        .pokemonScale = 332,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SWINUB] =
    {
        .categoryName = _("PIG"),
        .height = 4,
        .weight = 65,
        .pokemonScale = 324,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
        .categoryName = _("SWINE"),
        .height = 11,
        .weight = 558,
        .pokemonScale = 306,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CORSOLA] =
    {
        .categoryName = _("CORAL"),
        .height = 6,
        .weight = 50,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_REMORAID] =
    {
        .categoryName = _("JET"),
        .height = 6,
        .weight = 120,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_OCTILLERY] =
    {
        .categoryName = _("JET"),
        .height = 9,
        .weight = 285,
        .pokemonScale = 296,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DELIBIRD] =
    {
        .categoryName = _("DELIVERY"),
        .height = 9,
        .weight = 160,
        .pokemonScale = 293,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MANTINE] =
    {
        .categoryName = _("KITE"),
        .height = 21,
        .weight = 2200,
        .pokemonScale = 275,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = _("ARMOR BIRD"),
        .height = 17,
        .weight = 505,
        .pokemonScale = 285,
        .pokemonOffset = 0,
        .trainerScale = 276,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
        .categoryName = _("DARK"),
        .height = 6,
        .weight = 108,
        .pokemonScale = 393,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
        .categoryName = _("DARK"),
        .height = 14,
        .weight = 350,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KINGDRA] =
    {
        .categoryName = _("DRAGON"),
        .height = 18,
        .weight = 1520,
        .pokemonScale = 257,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_PHANPY] =
    {
        .categoryName = _("LONG NOSE"),
        .height = 5,
        .weight = 335,
        .pokemonScale = 465,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DONPHAN] =
    {
        .categoryName = _("ARMOR"),
        .height = 11,
        .weight = 1200,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
        .categoryName = _("VIRTUAL"),
        .height = 6,
        .weight = 325,
        .pokemonScale = 320,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_STANTLER] =
    {
        .categoryName = _("BIG HORN"),
        .height = 14,
        .weight = 712,
        .pokemonScale = 277,
        .pokemonOffset = -1,
        .trainerScale = 277,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
        .categoryName = _("PAINTER"),
        .height = 12,
        .weight = 580,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
        .categoryName = _("SCUFFLE"),
        .height = 7,
        .weight = 210,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HITMONTOP] =
    {
        .categoryName = _("HANDSTAND"),
        .height = 14,
        .weight = 480,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SMOOCHUM] =
    {
        .categoryName = _("KISS"),
        .height = 4,
        .weight = 60,
        .pokemonScale = 440,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ELEKID] =
    {
        .categoryName = _("ELECTRIC"),
        .height = 6,
        .weight = 235,
        .pokemonScale = 363,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MAGBY] =
    {
        .categoryName = _("LIVE COAL"),
        .height = 7,
        .weight = 214,
        .pokemonScale = 284,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MILTANK] =
    {
        .categoryName = _("MILK COW"),
        .height = 12,
        .weight = 755,
        .pokemonScale = 280,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
        .categoryName = _("HAPPINESS"),
        .height = 15,
        .weight = 468,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_RAIKOU] =
    {
        .categoryName = _("THUNDER"),
        .height = 19,
        .weight = 1780,
        .pokemonScale = 283,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_ENTEI] =
    {
        .categoryName = _("VOLCANO"),
        .height = 21,
        .weight = 1980,
        .pokemonScale = 283,
        .pokemonOffset = 0,
        .trainerScale = 370,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SUICUNE] =
    {
        .categoryName = _("AURORA"),
        .height = 20,
        .weight = 1870,
        .pokemonScale = 286,
        .pokemonOffset = 0,
        .trainerScale = 371,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
        .categoryName = _("ROCK SKIN"),
        .height = 6,
        .weight = 720,
        .pokemonScale = 472,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
        .categoryName = _("HARD SHELL"),
        .height = 12,
        .weight = 1520,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
        .categoryName = _("ARMOR"),
        .height = 20,
        .weight = 2020,
        .pokemonScale = 285,
        .pokemonOffset = 0,
        .trainerScale = 383,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LUGIA] =
    {
        .categoryName = _("DIVING"),
        .height = 52,
        .weight = 2160,
        .pokemonScale = 283,
        .pokemonOffset = 0,
        .trainerScale = 742,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_HO_OH] =
    {
        .categoryName = _("RAINBOW"),
        .height = 38,
        .weight = 1990,
        .pokemonScale = 283,
        .pokemonOffset = 0,
        .trainerScale = 620,
        .trainerOffset = 16,
    },

    [NATIONAL_DEX_CELEBI] =
    {
        .categoryName = _("TIME TRAVEL"),
        .height = 6,
        .weight = 50,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TREECKO] =
    {
        .categoryName = _("WOOD GECKO"),
        .height = 5,
        .weight = 50,
        .pokemonScale = 541,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
        .categoryName = _("WOOD GECKO"),
        .height = 9,
        .weight = 216,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
        .categoryName = _("FOREST"),
        .height = 17,
        .weight = 522,
        .pokemonScale = 282,
        .pokemonOffset = -1,
        .trainerScale = 313,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
        .categoryName = _("CHICK"),
        .height = 4,
        .weight = 25,
        .pokemonScale = 566,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
        .categoryName = _("YOUNG FOWL"),
        .height = 9,
        .weight = 195,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
        .categoryName = _("BLAZE"),
        .height = 19,
        .weight = 520,
        .pokemonScale = 275,
        .pokemonOffset = -1,
        .trainerScale = 314,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
        .categoryName = _("MUD FISH"),
        .height = 4,
        .weight = 76,
        .pokemonScale = 535,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
        .categoryName = _("MUD FISH"),
        .height = 7,
        .weight = 280,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
        .categoryName = _("MUD FISH"),
        .height = 15,
        .weight = 819,
        .pokemonScale = 276,
        .pokemonOffset = -1,
        .trainerScale = 282,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
        .categoryName = _("BITE"),
        .height = 5,
        .weight = 136,
        .pokemonScale = 481,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
        .categoryName = _("BITE"),
        .height = 10,
        .weight = 370,
        .pokemonScale = 359,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
        .categoryName = _("TINYRACCOON"),
        .height = 4,
        .weight = 175,
        .pokemonScale = 560,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LINOONE] =
    {
        .categoryName = _("RUSHING"),
        .height = 5,
        .weight = 325,
        .pokemonScale = 321,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WURMPLE] =
    {
        .categoryName = _("WORM"),
        .height = 3,
        .weight = 36,
        .pokemonScale = 711,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SILCOON] =
    {
        .categoryName = _("COCOON"),
        .height = 6,
        .weight = 100,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BEAUTIFLY] =
    {
        .categoryName = _("BUTTERFLY"),
        .height = 10,
        .weight = 284,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CASCOON] =
    {
        .categoryName = _("COCOON"),
        .height = 7,
        .weight = 115,
        .pokemonScale = 391,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DUSTOX] =
    {
        .categoryName = _("POISON MOTH"),
        .height = 12,
        .weight = 316,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LOTAD] =
    {
        .categoryName = _("WATER WEED"),
        .height = 5,
        .weight = 26,
        .pokemonScale = 406,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LOMBRE] =
    {
        .categoryName = _("JOLLY"),
        .height = 12,
        .weight = 325,
        .pokemonScale = 277,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LUDICOLO] =
    {
        .categoryName = _("CAREFREE"),
        .height = 15,
        .weight = 550,
        .pokemonScale = 283,
        .pokemonOffset = 0,
        .trainerScale = 282,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEEDOT] =
    {
        .categoryName = _("ACORN"),
        .height = 5,
        .weight = 40,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NUZLEAF] =
    {
        .categoryName = _("WILY"),
        .height = 10,
        .weight = 280,
        .pokemonScale = 299,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SHIFTRY] =
    {
        .categoryName = _("WICKED"),
        .height = 13,
        .weight = 596,
        .pokemonScale = 290,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = _("TINYSWALLOW"),
        .height = 3,
        .weight = 23,
        .pokemonScale = 465,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SWELLOW] =
    {
        .categoryName = _("SWALLOW"),
        .height = 7,
        .weight = 198,
        .pokemonScale = 428,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WINGULL] =
    {
        .categoryName = _("SEAGULL"),
        .height = 6,
        .weight = 95,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
        .categoryName = _("WATER BIRD"),
        .height = 12,
        .weight = 280,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = _("FEELING"),
        .height = 4,
        .weight = 66,
        .pokemonScale = 457,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = _("EMOTION"),
        .height = 8,
        .weight = 202,
        .pokemonScale = 354,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = _("EMBRACE"),
        .height = 16,
        .weight = 484,
        .pokemonScale = 277,
        .pokemonOffset = 0,
        .trainerScale = 276,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SURSKIT] =
    {
        .categoryName = _("POND SKATER"),
        .height = 5,
        .weight = 17,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MASQUERAIN] =
    {
        .categoryName = _("EYEBALL"),
        .height = 8,
        .weight = 36,
        .pokemonScale = 378,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 4,
        .weight = 45,
        .pokemonScale = 513,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 12,
        .weight = 392,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SLAKOTH] =
    {
        .categoryName = _("SLACKER"),
        .height = 8,
        .weight = 240,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VIGOROTH] =
    {
        .categoryName = _("WILD MONKEY"),
        .height = 14,
        .weight = 465,
        .pokemonScale = 301,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SLAKING] =
    {
        .categoryName = _("LAZY"),
        .height = 20,
        .weight = 1305,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 326,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = _("TRAINEE"),
        .height = 5,
        .weight = 55,
        .pokemonScale = 405,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = _("NINJA"),
        .height = 8,
        .weight = 120,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = _("SHED"),
        .height = 8,
        .weight = 12,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WHISMUR] =
    {
        .categoryName = _("WHISPER"),
        .height = 6,
        .weight = 163,
        .pokemonScale = 373,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LOUDRED] =
    {
        .categoryName = _("BIG VOICE"),
        .height = 10,
        .weight = 405,
        .pokemonScale = 356,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_EXPLOUD] =
    {
        .categoryName = _("LOUD NOISE"),
        .height = 15,
        .weight = 840,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MAKUHITA] =
    {
        .categoryName = _("GUTS"),
        .height = 10,
        .weight = 864,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HARIYAMA] =
    {
        .categoryName = _("ARM THRUST"),
        .height = 23,
        .weight = 2538,
        .pokemonScale = 268,
        .pokemonOffset = -1,
        .trainerScale = 375,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = _("POLKA DOT"),
        .height = 2,
        .weight = 20,
        .pokemonScale = 603,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_NOSEPASS] =
    {
        .categoryName = _("COMPASS"),
        .height = 10,
        .weight = 970,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SKITTY] =
    {
        .categoryName = _("KITTEN"),
        .height = 6,
        .weight = 110,
        .pokemonScale = 492,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
        .categoryName = _("PRIM"),
        .height = 11,
        .weight = 326,
        .pokemonScale = 322,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
        .categoryName = _("DARKNESS"),
        .height = 5,
        .weight = 110,
        .pokemonScale = 451,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MAWILE] =
    {
        .categoryName = _("DECEIVER"),
        .height = 6,
        .weight = 115,
        .pokemonScale = 466,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -3,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("IRON ARMOR"),
        .height = 4,
        .weight = 600,
        .pokemonScale = 419,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LAIRON] =
    {
        .categoryName = _("IRON ARMOR"),
        .height = 9,
        .weight = 1200,
        .pokemonScale = 275,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_AGGRON] =
    {
        .categoryName = _("IRON ARMOR"),
        .height = 21,
        .weight = 3600,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 374,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
        .categoryName = _("MEDITATE"),
        .height = 6,
        .weight = 112,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
        .categoryName = _("MEDITATE"),
        .height = 13,
        .weight = 315,
        .pokemonScale = 298,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
        .categoryName = _("LIGHTNING"),
        .height = 6,
        .weight = 152,
        .pokemonScale = 290,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
        .categoryName = _("DISCHARGE"),
        .height = 15,
        .weight = 402,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 257,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_PLUSLE] =
    {
        .categoryName = _("CHEERING"),
        .height = 4,
        .weight = 42,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MINUN] =
    {
        .categoryName = _("CHEERING"),
        .height = 4,
        .weight = 42,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VOLBEAT] =
    {
        .categoryName = _("FIREFLY"),
        .height = 7,
        .weight = 177,
        .pokemonScale = 442,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ILLUMISE] =
    {
        .categoryName = _("FIREFLY"),
        .height = 6,
        .weight = 177,
        .pokemonScale = 572,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ROSELIA] =
    {
        .categoryName = _("THORN"),
        .height = 3,
        .weight = 20,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GULPIN] =
    {
        .categoryName = _("STOMACH"),
        .height = 4,
        .weight = 103,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SWALOT] =
    {
        .categoryName = _("POISON BAG"),
        .height = 17,
        .weight = 800,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 345,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
        .categoryName = _("SAVAGE"),
        .height = 8,
        .weight = 208,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
        .categoryName = _("BRUTAL"),
        .height = 18,
        .weight = 888,
        .pokemonScale = 265,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_WAILMER] =
    {
        .categoryName = _("BALL WHALE"),
        .height = 20,
        .weight = 1300,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 493,
        .trainerOffset = 10,
    },

    [NATIONAL_DEX_WAILORD] =
    {
        .categoryName = _("FLOAT WHALE"),
        .height = 145,
        .weight = 3980,
        .pokemonScale = 276,
        .pokemonOffset = -1,
        .trainerScale = 1428,
        .trainerOffset = 20,
    },

    [NATIONAL_DEX_NUMEL] =
    {
        .categoryName = _("NUMB"),
        .height = 7,
        .weight = 240,
        .pokemonScale = 310,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
        .categoryName = _("ERUPTION"),
        .height = 19,
        .weight = 2200,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
        .categoryName = _("COAL"),
        .height = 5,
        .weight = 804,
        .pokemonScale = 392,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SPOINK] =
    {
        .categoryName = _("BOUNCE"),
        .height = 7,
        .weight = 306,
        .pokemonScale = 423,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
        .categoryName = _("MANIPULATE"),
        .height = 9,
        .weight = 715,
        .pokemonScale = 358,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SPINDA] =
    {
        .categoryName = _("SPOT PANDA"),
        .height = 11,
        .weight = 50,
        .pokemonScale = 321,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
        .categoryName = _("ANT PIT"),
        .height = 7,
        .weight = 150,
        .pokemonScale = 298,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
        .categoryName = _("VIBRATION"),
        .height = 11,
        .weight = 153,
        .pokemonScale = 370,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_FLYGON] =
    {
        .categoryName = _("MYSTIC"),
        .height = 20,
        .weight = 820,
        .pokemonScale = 280,
        .pokemonOffset = 0,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CACNEA] =
    {
        .categoryName = _("CACTUS"),
        .height = 4,
        .weight = 513,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
        .categoryName = _("SCARECROW"),
        .height = 13,
        .weight = 774,
        .pokemonScale = 327,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SWABLU] =
    {
        .categoryName = _("COTTON BIRD"),
        .height = 4,
        .weight = 12,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
        .categoryName = _("HUMMING"),
        .height = 11,
        .weight = 206,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ZANGOOSE] =
    {
        .categoryName = _("CAT FERRET"),
        .height = 13,
        .weight = 403,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SEVIPER] =
    {
        .categoryName = _("FANG SNAKE"),
        .height = 27,
        .weight = 525,
        .pokemonScale = 275,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LUNATONE] =
    {
        .categoryName = _("METEORITE"),
        .height = 10,
        .weight = 1680,
        .pokemonScale = 300,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SOLROCK] =
    {
        .categoryName = _("METEORITE"),
        .height = 12,
        .weight = 1540,
        .pokemonScale = 328,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BARBOACH] =
    {
        .categoryName = _("WHISKERS"),
        .height = 4,
        .weight = 19,
        .pokemonScale = 581,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WHISCASH] =
    {
        .categoryName = _("WHISKERS"),
        .height = 9,
        .weight = 236,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
        .categoryName = _("RUFFIAN"),
        .height = 6,
        .weight = 115,
        .pokemonScale = 484,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
        .categoryName = _("ROGUE"),
        .height = 11,
        .weight = 328,
        .pokemonScale = 365,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BALTOY] =
    {
        .categoryName = _("CLAY DOLL"),
        .height = 5,
        .weight = 215,
        .pokemonScale = 384,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = -3,
    },

    [NATIONAL_DEX_CLAYDOL] =
    {
        .categoryName = _("CLAY DOLL"),
        .height = 15,
        .weight = 1080,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILEEP] =
    {
        .categoryName = _("SEA LILY"),
        .height = 10,
        .weight = 238,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_CRADILY] =
    {
        .categoryName = _("BARNACLE"),
        .height = 15,
        .weight = 604,
        .pokemonScale = 275,
        .pokemonOffset = -1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_ANORITH] =
    {
        .categoryName = _("OLD SHRIMP"),
        .height = 7,
        .weight = 125,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
        .categoryName = _("PLATE"),
        .height = 15,
        .weight = 682,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
        .categoryName = _("FISH"),
        .height = 6,
        .weight = 74,
        .pokemonScale = 423,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
        .categoryName = _("TENDER"),
        .height = 62,
        .weight = 1620,
        .pokemonScale = 282,
        .pokemonOffset = -1,
        .trainerScale = 382,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = _("WEATHER"),
        .height = 3,
        .weight = 8,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = _("COLOR SWAP"),
        .height = 10,
        .weight = 220,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
        .categoryName = _("PUPPET"),
        .height = 6,
        .weight = 23,
        .pokemonScale = 440,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BANETTE] =
    {
        .categoryName = _("MARIONETTE"),
        .height = 11,
        .weight = 125,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DUSKULL] =
    {
        .categoryName = _("REQUIEM"),
        .height = 8,
        .weight = 150,
        .pokemonScale = 376,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DUSCLOPS] =
    {
        .categoryName = _("BECKON"),
        .height = 16,
        .weight = 306,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = _("FRUIT"),
        .height = 20,
        .weight = 1000,
        .pokemonScale = 283,
        .pokemonOffset = -1,
        .trainerScale = 371,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHIMECHO] =
    {
        .categoryName = _("WIND CHIME"),
        .height = 6,
        .weight = 10,
        .pokemonScale = 505,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_ABSOL] =
    {
        .categoryName = _("DISASTER"),
        .height = 12,
        .weight = 470,
        .pokemonScale = 301,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WYNAUT] =
    {
        .categoryName = _("BRIGHT"),
        .height = 6,
        .weight = 140,
        .pokemonScale = 453,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = _("SNOW HAT"),
        .height = 7,
        .weight = 168,
        .pokemonScale = 380,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = _("FACE"),
        .height = 15,
        .weight = 2565,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SPHEAL] =
    {
        .categoryName = _("CLAP"),
        .height = 8,
        .weight = 395,
        .pokemonScale = 315,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SEALEO] =
    {
        .categoryName = _("BALL ROLL"),
        .height = 11,
        .weight = 876,
        .pokemonScale = 338,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_WALREIN] =
    {
        .categoryName = _("ICE BREAK"),
        .height = 14,
        .weight = 1506,
        .pokemonScale = 305,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAMPERL] =
    {
        .categoryName = _("BIVALVE"),
        .height = 4,
        .weight = 525,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_HUNTAIL] =
    {
        .categoryName = _("DEEP SEA"),
        .height = 17,
        .weight = 270,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_GOREBYSS] =
    {
        .categoryName = _("SOUTH SEA"),
        .height = 18,
        .weight = 226,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
        .categoryName = _("LONGEVITY"),
        .height = 10,
        .weight = 234,
        .pokemonScale = 316,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LUVDISC] =
    {
        .categoryName = _("RENDEZVOUS"),
        .height = 6,
        .weight = 87,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_BAGON] =
    {
        .categoryName = _("ROCK HEAD"),
        .height = 6,
        .weight = 421,
        .pokemonScale = 448,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SHELGON] =
    {
        .categoryName = _("ENDURANCE"),
        .height = 11,
        .weight = 1105,
        .pokemonScale = 311,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
        .categoryName = _("DRAGON"),
        .height = 15,
        .weight = 1026,
        .pokemonScale = 272,
        .pokemonOffset = 2,
        .trainerScale = 307,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELDUM] =
    {
        .categoryName = _("IRON BALL"),
        .height = 6,
        .weight = 952,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_METANG] =
    {
        .categoryName = _("IRON CLAW"),
        .height = 12,
        .weight = 2025,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 272,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
        .categoryName = _("IRON LEG"),
        .height = 16,
        .weight = 5500,
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 461,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("ROCK PEAK"),
        .height = 17,
        .weight = 2300,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("ICEBERG"),
        .height = 18,
        .weight = 1750,
        .pokemonScale = 265,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
        .categoryName = _("IRON"),
        .height = 19,
        .weight = 2050,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("EON"),
        .height = 14,
        .weight = 400,
        .pokemonScale = 291,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("EON"),
        .height = 20,
        .weight = 600,
        .pokemonScale = 273,
        .pokemonOffset = 0,
        .trainerScale = 313,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = _("SEA BASIN"),
        .height = 45,
        .weight = 3520,
        .pokemonScale = 272,
        .pokemonOffset = 1,
        .trainerScale = 639,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = _("CONTINENT"),
        .height = 35,
        .weight = 9500,
        .pokemonScale = 276,
        .pokemonOffset = 0,
        .trainerScale = 530,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("SKY HIGH"),
        .height = 70,
        .weight = 2065,
        .pokemonScale = 286,
        .pokemonOffset = -1,
        .trainerScale = 483,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
        .categoryName = _("WISH"),
        .height = 3,
        .weight = 11,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = -2,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .pokemonScale = 293,
        .pokemonOffset = 0,
        .trainerScale = 337,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TURTWIG] =
    {
        .categoryName = _("TinyLeaf"),
        .height = 4,
        .weight = 102,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROTLE] =
    {
        .categoryName = _("Grove"),
        .height = 11,
        .weight = 970,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORTERRA] =
    {
        .categoryName = _("Continent"),
        .height = 22,
        .weight = 3100,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIMCHAR] =
    {
        .categoryName = _("Chimp"),
        .height = 5,
        .weight = 62,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MONFERNO] =
    {
        .categoryName = _("Playful"),
        .height = 9,
        .weight = 220,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_INFERNAPE] =
    {
        .categoryName = _("Flame"),
        .height = 12,
        .weight = 550,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIPLUP] =
    {
        .categoryName = _("Penguin"),
        .height = 4,
        .weight = 52,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRINPLUP] =
    {
        .categoryName = _("Penguin"),
        .height = 8,
        .weight = 230,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMPOLEON] =
    {
        .categoryName = _("Emperor"),
        .height = 17,
        .weight = 845,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARLY] =
    {
        .categoryName = _("Starling"),
        .height = 3,
        .weight = 20,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARAVIA] =
    {
        .categoryName = _("Starling"),
        .height = 6,
        .weight = 155,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARAPTOR] =
    {
        .categoryName = _("Predator"),
        .height = 12,
        .weight = 249,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIDOOF] =
    {
        .categoryName = _("PlumpMouse"),
        .height = 5,
        .weight = 200,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIBAREL] =
    {
        .categoryName = _("Beaver"),
        .height = 10,
        .weight = 315,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRICKETOT] =
    {
        .categoryName = _("Cricket"),
        .height = 3,
        .weight = 22,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRICKETUNE] =
    {
        .categoryName = _("Cricket"),
        .height = 10,
        .weight = 255,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHINX] =
    {
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXIO] =
    {
        .categoryName = _("Spark"),
        .height = 9,
        .weight = 305,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXRAY] =
    {
        .categoryName = _("Gleam Eyes"),
        .height = 14,
        .weight = 420,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUDEW] =
    {
        .categoryName = _("Bud"),
        .height = 2,
        .weight = 12,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSERADE] =
    {
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 145,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRANIDOS] =
    {
        .categoryName = _("Headbutt"),
        .height = 9,
        .weight = 315,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAMPARDOS] =
    {
        .categoryName = _("Headbutt"),
        .height = 16,
        .weight = 1025,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIELDON] =
    {
        .categoryName = _("Shield"),
        .height = 5,
        .weight = 570,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BASTIODON] =
    {
        .categoryName = _("Shield"),
        .height = 13,
        .weight = 1495,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BURMY] =
    {
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WORMADAM] =
    {
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MOTHIM] =
    {
        .categoryName = _("Moth"),
        .height = 9,
        .weight = 233,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBEE] =
    {
        .categoryName = _("Tiny Bee"),
        .height = 3,
        .weight = 55,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VESPIQUEN] =
    {
        .categoryName = _("Beehive"),
        .height = 12,
        .weight = 385,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PACHIRISU] =
    {
        .categoryName = _("EleSquirrel"),
        .height = 4,
        .weight = 39,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUIZEL] =
    {
        .categoryName = _("Sea Weasel"),
        .height = 7,
        .weight = 295,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOATZEL] =
    {
        .categoryName = _("Sea Weasel"),
        .height = 11,
        .weight = 335,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHERUBI] =
    {
        .categoryName = _("Cherry"),
        .height = 4,
        .weight = 33,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHERRIM] =
    {
        .categoryName = _("Blossom"),
        .height = 5,
        .weight = 93,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELLOS] =
    {
        .categoryName = _("SeaSlug"),
        .height = 3,
        .weight = 63,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GASTRODON] =
    {
        .categoryName = _("SeaSlug"),
        .height = 9,
        .weight = 299,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMBIPOM] =
    {
        .categoryName = _("Long Tail"),
        .height = 12,
        .weight = 203,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIFLOON] =
    {
        .categoryName = _("Balloon"),
        .height = 4,
        .weight = 12,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRIFBLIM] =
    {
        .categoryName = _("Blimp"),
        .height = 12,
        .weight = 150,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUNEARY] =
    {
        .categoryName = _("Rabbit"),
        .height = 4,
        .weight = 55,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOPUNNY] =
    {
        .categoryName = _("Rabbit"),
        .height = 12,
        .weight = 333,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MISMAGIUS] =
    {
        .categoryName = _("Magical"),
        .height = 9,
        .weight = 44,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HONCHKROW] =
    {
        .categoryName = _("Big Boss"),
        .height = 9,
        .weight = 273,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLAMEOW] =
    {
        .categoryName = _("Catty"),
        .height = 5,
        .weight = 39,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURUGLY] =
    {
        .categoryName = _("Tiger Cat"),
        .height = 10,
        .weight = 438,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHINGLING] =
    {
        .categoryName = _("Bell"),
        .height = 2,
        .weight = 6,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUNKY] =
    {
        .categoryName = _("Skunk"),
        .height = 4,
        .weight = 192,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKUNTANK] =
    {
        .categoryName = _("Skunk"),
        .height = 10,
        .weight = 380,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZOR] =
    {
        .categoryName = _("Bronze"),
        .height = 5,
        .weight = 605,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZONG] =
    {
        .categoryName = _("Bronze Bell"),
        .height = 13,
        .weight = 1870,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONSLY] =
    {
        .categoryName = _("Bonsai"),
        .height = 5,
        .weight = 150,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIMEJR] =
    {
        .categoryName = _("Mime"),
        .height = 6,
        .weight = 130,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAPPINY] =
    {
        .categoryName = _("Playhouse"),
        .height = 6,
        .weight = 244,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHATOT] =
    {
        .categoryName = _("Music Note"),
        .height = 5,
        .weight = 19,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPIRITOMB] =
    {
        .categoryName = _("Forbidden"),
        .height = 10,
        .weight = 1080,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIBLE] =
    {
        .categoryName = _("Land Shark"),
        .height = 7,
        .weight = 205,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GABITE] =
    {
        .categoryName = _("Cave"),
        .height = 14,
        .weight = 560,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARCHOMP] =
    {
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 950,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUNCHLAX] =
    {
        .categoryName = _("Big Eater"),
        .height = 6,
        .weight = 1050,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIOLU] =
    {
        .categoryName = _("Emanation"),
        .height = 7,
        .weight = 202,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUCARIO] =
    {
        .categoryName = _("Aura"),
        .height = 12,
        .weight = 540,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HIPPOPOTAS] =
    {
        .categoryName = _("Hippo"),
        .height = 8,
        .weight = 495,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HIPPOWDON] =
    {
        .categoryName = _("Heavyweight"),
        .height = 20,
        .weight = 3000,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKORUPI] =
    {
        .categoryName = _("Scorpion"),
        .height = 8,
        .weight = 120,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAPION] =
    {
        .categoryName = _("Scorpion"),
        .height = 13,
        .weight = 615,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROAGUNK] =
    {
        .categoryName = _("Toxic Mouth"),
        .height = 7,
        .weight = 230,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOXICROAK] =
    {
        .categoryName = _("Toxic Mouth"),
        .height = 13,
        .weight = 444,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARNIVINE] =
    {
        .categoryName = _("Bug Catcher"),
        .height = 14,
        .weight = 270,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FINNEON] =
    {
        .categoryName = _("Wing Fish"),
        .height = 4,
        .weight = 70,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUMINEON] =
    {
        .categoryName = _("Neon"),
        .height = 12,
        .weight = 240,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTYKE] =
    {
        .categoryName = _("Kite"),
        .height = 10,
        .weight = 650,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNOVER] =
    {
        .categoryName = _("Frost Tree"),
        .height = 10,
        .weight = 505,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABOMASNOW] =
    {
        .categoryName = _("Frost Tree"),
        .height = 22,
        .weight = 1355,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEAVILE] =
    {
        .categoryName = _("Sharp Claw"),
        .height = 11,
        .weight = 340,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNEZONE] =
    {
        .categoryName = _("Magnet Area"),
        .height = 12,
        .weight = 1800,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LICKILICKY] =
    {
        .categoryName = _("Licking"),
        .height = 17,
        .weight = 1400,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYPERIOR] =
    {
        .categoryName = _("Drill"),
        .height = 24,
        .weight = 2828,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGROWTH] =
    {
        .categoryName = _("Vine"),
        .height = 20,
        .weight = 1286,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTIVIRE] =
    {
        .categoryName = _("Thunderbolt"),
        .height = 18,
        .weight = 1386,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGMORTAR] =
    {
        .categoryName = _("Blast"),
        .height = 16,
        .weight = 680,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEKISS] =
    {
        .categoryName = _("Jubilee"),
        .height = 15,
        .weight = 380,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMEGA] =
    {
        .categoryName = _("Ogre Darner"),
        .height = 19,
        .weight = 515,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAFEON] =
    {
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLACEON] =
    {
        .categoryName = _("Fresh Snow"),
        .height = 8,
        .weight = 259,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLISCOR] =
    {
        .categoryName = _("Scorpion"),
        .height = 20,
        .weight = 425,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAMOSWINE] =
    {
        .categoryName = _("Twin Tusk"),
        .height = 25,
        .weight = 2910,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON_Z] =
    {
        .categoryName = _("Virtual"),
        .height = 9,
        .weight = 340,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALLADE] =
    {
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 520,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PROBOPASS] =
    {
        .categoryName = _("Compass"),
        .height = 14,
        .weight = 3400,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSKNOIR] =
    {
        .categoryName = _("Gripper"),
        .height = 22,
        .weight = 1066,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSLASS] =
    {
        .categoryName = _("Snow Land"),
        .height = 13,
        .weight = 266,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROTOM] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UXIE] =
    {
        .categoryName = _("Knowledge"),
        .height = 3,
        .weight = 3,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MESPRIT] =
    {
        .categoryName = _("Emotion"),
        .height = 3,
        .weight = 3,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZELF] =
    {
        .categoryName = _("Willpower"),
        .height = 3,
        .weight = 3,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIALGA] =
    {
        .categoryName = _("Temporal"),
        .height = 54,
        .weight = 6830,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALKIA] =
    {
        .categoryName = _("Spatial"),
        .height = 42,
        .weight = 3360,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEATRAN] =
    {
        .categoryName = _("Lava Dome"),
        .height = 17,
        .weight = 4300,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REGIGIGAS] =
    {
        .categoryName = _("Colossal"),
        .height = 37,
        .weight = 4200,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRATINA] =
    {
        .categoryName = _("Renegade"),
        .height = 45,
        .weight = 7500,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRESSELIA] =
    {
        .categoryName = _("Lunar"),
        .height = 15,
        .weight = 856,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHIONE] =
    {
        .categoryName = _("Sea Drifter"),
        .height = 4,
        .weight = 31,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANAPHY] =
    {
        .categoryName = _("Seafaring"),
        .height = 3,
        .weight = 14,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARKRAI] =
    {
        .categoryName = _("Pitch-Black"),
        .height = 15,
        .weight = 505,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHAYMIN] =
    {
        .categoryName = _("Gratitude"),
        .height = 2,
        .weight = 21,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCEUS] =
    {
        .categoryName = _("Alpha"),
        .height = 32,
        .weight = 3200,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VICTINI] =
    {
        .categoryName = _("Victory"),
        .height = 4,
        .weight = 40,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNIVY] =
    {
        .categoryName = _("Grass Snake"),
        .height = 6,
        .weight = 81,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERVINE] =
    {
        .categoryName = _("Grass Snake"),
        .height = 8,
        .weight = 160,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERPERIOR] =
    {
        .categoryName = _("Regal"),
        .height = 33,
        .weight = 630,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEPIG] =
    {
        .categoryName = _("Fire Pig"),
        .height = 5,
        .weight = 99,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIGNITE] =
    {
        .categoryName = _("Fire Pig"),
        .height = 10,
        .weight = 555,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMBOAR] =
    {
        .categoryName = _("Fire Pig"),
        .height = 16,
        .weight = 1500,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OSHAWOTT] =
    {
        .categoryName = _("Sea Otter"),
        .height = 5,
        .weight = 59,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWOTT] =
    {
        .categoryName = _("Discipline"),
        .height = 8,
        .weight = 245,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAMUROTT] =
    {
        .categoryName = _("Formidable"),
        .height = 15,
        .weight = 946,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PATRAT] =
    {
        .categoryName = _("Scout"),
        .height = 5,
        .weight = 116,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WATCHOG] =
    {
        .categoryName = _("Lookout"),
        .height = 11,
        .weight = 270,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIPUP] =
    {
        .categoryName = _("Puppy"),
        .height = 4,
        .weight = 41,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERDIER] =
    {
        .categoryName = _("Loyal Dog"),
        .height = 9,
        .weight = 147,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STOUTLAND] =
    {
        .categoryName = _("Big-Hearted"),
        .height = 12,
        .weight = 610,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRLOIN] =
    {
        .categoryName = _("Devious"),
        .height = 4,
        .weight = 101,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LIEPARD] =
    {
        .categoryName = _("Cruel"),
        .height = 11,
        .weight = 375,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANSAGE] =
    {
        .categoryName = _("Grass Monkey"),
        .height = 6,
        .weight = 105,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMISAGE] =
    {
        .categoryName = _("Thorn Monkey"),
        .height = 11,
        .weight = 305,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANSEAR] =
    {
        .categoryName = _("High Temp"),
        .height = 6,
        .weight = 110,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMISEAR] =
    {
        .categoryName = _("Ember"),
        .height = 10,
        .weight = 280,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANPOUR] =
    {
        .categoryName = _("Spray"),
        .height = 6,
        .weight = 135,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIMIPOUR] =
    {
        .categoryName = _("Geyser"),
        .height = 10,
        .weight = 290,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUNNA] =
    {
        .categoryName = _("Dream Eater"),
        .height = 6,
        .weight = 233,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUSHARNA] =
    {
        .categoryName = _("Drowsing"),
        .height = 11,
        .weight = 605,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDOVE] =
    {
        .categoryName = _("Tiny Pigeon"),
        .height = 3,
        .weight = 21,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRANQUILL] =
    {
        .categoryName = _("Wild Pigeon"),
        .height = 6,
        .weight = 150,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNFEZANT] =
    {
        .categoryName = _("Proud"),
        .height = 12,
        .weight = 290,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLITZLE] =
    {
        .categoryName = _("Electrified"),
        .height = 8,
        .weight = 298,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEBSTRIKA] =
    {
        .categoryName = _("Thunderbolt"),
        .height = 16,
        .weight = 795,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROGGENROLA] =
    {
        .categoryName = _("Mantle"),
        .height = 4,
        .weight = 180,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOLDORE] =
    {
        .categoryName = _("Ore"),
        .height = 9,
        .weight = 1020,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIGALITH] =
    {
        .categoryName = _("Compressed"),
        .height = 17,
        .weight = 2600,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOBAT] =
    {
        .categoryName = _("Bat"),
        .height = 4,
        .weight = 21,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWOOBAT] =
    {
        .categoryName = _("Courting"),
        .height = 9,
        .weight = 105,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRILBUR] =
    {
        .categoryName = _("Mole"),
        .height = 3,
        .weight = 85,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXCADRILL] =
    {
        .categoryName = _("Subterrene"),
        .height = 7,
        .weight = 404,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AUDINO] =
    {
        .categoryName = _("Hearing"),
        .height = 11,
        .weight = 310,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIMBURR] =
    {
        .categoryName = _("Muscular"),
        .height = 6,
        .weight = 125,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GURDURR] =
    {
        .categoryName = _("Muscular"),
        .height = 12,
        .weight = 400,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CONKELDURR] =
    {
        .categoryName = _("Muscular"),
        .height = 14,
        .weight = 870,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYMPOLE] =
    {
        .categoryName = _("Tadpole"),
        .height = 5,
        .weight = 45,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALPITOAD] =
    {
        .categoryName = _("Vibration"),
        .height = 8,
        .weight = 170,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEISMITOAD] =
    {
        .categoryName = _("Vibration"),
        .height = 15,
        .weight = 620,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THROH] =
    {
        .categoryName = _("Judo"),
        .height = 13,
        .weight = 555,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWK] =
    {
        .categoryName = _("Karate"),
        .height = 14,
        .weight = 510,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEWADDLE] =
    {
        .categoryName = _("Sewing"),
        .height = 3,
        .weight = 25,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWADLOON] =
    {
        .categoryName = _("Leaf Wrapped"),
        .height = 5,
        .weight = 73,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAVANNY] =
    {
        .categoryName = _("Nurturing"),
        .height = 12,
        .weight = 205,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENIPEDE] =
    {
        .categoryName = _("Centipede"),
        .height = 4,
        .weight = 53,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIRLIPEDE] =
    {
        .categoryName = _("Curlipede"),
        .height = 12,
        .weight = 585,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCOLIPEDE] =
    {
        .categoryName = _("Megapede"),
        .height = 25,
        .weight = 2005,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COTTONEE] =
    {
        .categoryName = _("CottonPuff"),
        .height = 3,
        .weight = 6,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIMSICOTT] =
    {
        .categoryName = _("Windveiled"),
        .height = 7,
        .weight = 66,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PETILIL] =
    {
        .categoryName = _("Bulb"),
        .height = 5,
        .weight = 66,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIGANT] =
    {
        .categoryName = _("Flowering"),
        .height = 11,
        .weight = 163,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BASCULIN] =
    {
        .categoryName = _("Hostile"),
        .height = 10,
        .weight = 180,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDILE] =
    {
        .categoryName = _("Desert Croc"),
        .height = 7,
        .weight = 152,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROKOROK] =
    {
        .categoryName = _("Desert Croc"),
        .height = 10,
        .weight = 334,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KROOKODILE] =
    {
        .categoryName = _("Intimidate"),
        .height = 15,
        .weight = 963,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARUMAKA] =
    {
        .categoryName = _("Zen Charm"),
        .height = 6,
        .weight = 375,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARMANITAN] =
    {
        .categoryName = _("Blazing"),
        .height = 13,
        .weight = 929,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARACTUS] =
    {
        .categoryName = _("Cactus"),
        .height = 10,
        .weight = 280,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DWEBBLE] =
    {
        .categoryName = _("Rock Inn"),
        .height = 3,
        .weight = 145,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRUSTLE] =
    {
        .categoryName = _("Stone Home"),
        .height = 14,
        .weight = 2000,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAGGY] =
    {
        .categoryName = _("Shedding"),
        .height = 6,
        .weight = 118,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAFTY] =
    {
        .categoryName = _("Hoodlum"),
        .height = 11,
        .weight = 300,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SIGILYPH] =
    {
        .categoryName = _("Avianoid"),
        .height = 14,
        .weight = 140,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YAMASK] =
    {
        .categoryName = _("Spirit"),
        .height = 5,
        .weight = 15,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COFAGRIGUS] =
    {
        .categoryName = _("Coffin"),
        .height = 17,
        .weight = 765,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIRTOUGA] =
    {
        .categoryName = _("Prototurtle"),
        .height = 7,
        .weight = 165,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARRACOSTA] =
    {
        .categoryName = _("Prototurtle"),
        .height = 12,
        .weight = 810,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCHEN] =
    {
        .categoryName = _("First Bird"),
        .height = 5,
        .weight = 95,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCHEOPS] =
    {
        .categoryName = _("First Bird"),
        .height = 14,
        .weight = 320,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRUBBISH] =
    {
        .categoryName = _("Trash Bag"),
        .height = 6,
        .weight = 310,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARBODOR] =
    {
        .categoryName = _("Trash Heap"),
        .height = 19,
        .weight = 1073,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZORUA] =
    {
        .categoryName = _("Tricky Fox"),
        .height = 7,
        .weight = 125,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZOROARK] =
    {
        .categoryName = _("Illusion Fox"),
        .height = 16,
        .weight = 811,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINCCINO] =
    {
        .categoryName = _("Chinchilla"),
        .height = 4,
        .weight = 58,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CINCCINO] =
    {
        .categoryName = _("Scarf"),
        .height = 5,
        .weight = 75,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITA] =
    {
        .categoryName = _("Fixation"),
        .height = 4,
        .weight = 58,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHORITA] =
    {
        .categoryName = _("Manipulate"),
        .height = 7,
        .weight = 180,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITELLE] =
    {
        .categoryName = _("Astral Body"),
        .height = 15,
        .weight = 440,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLOSIS] =
    {
        .categoryName = _("Cell"),
        .height = 3,
        .weight = 10,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUOSION] =
    {
        .categoryName = _("Mitosis"),
        .height = 6,
        .weight = 80,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REUNICLUS] =
    {
        .categoryName = _("Multiplying"),
        .height = 10,
        .weight = 201,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUCKLETT] =
    {
        .categoryName = _("Water Bird"),
        .height = 5,
        .weight = 55,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWANNA] =
    {
        .categoryName = _("White Bird"),
        .height = 13,
        .weight = 242,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLITE] =
    {
        .categoryName = _("Fresh Snow"),
        .height = 4,
        .weight = 57,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLISH] =
    {
        .categoryName = _("Icy Snow"),
        .height = 11,
        .weight = 410,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VANILLUXE] =
    {
        .categoryName = _("Snowstorm"),
        .height = 13,
        .weight = 575,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEERLING] =
    {
        .categoryName = _("Season"),
        .height = 6,
        .weight = 195,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SAWSBUCK] =
    {
        .categoryName = _("Season"),
        .height = 19,
        .weight = 925,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EMOLGA] =
    {
        .categoryName = _("Sky Squirrel"),
        .height = 4,
        .weight = 50,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KARRABLAST] =
    {
        .categoryName = _("Clamping"),
        .height = 5,
        .weight = 59,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESCAVALIER] =
    {
        .categoryName = _("Cavalry"),
        .height = 10,
        .weight = 330,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FOONGUS] =
    {
        .categoryName = _("Mushroom"),
        .height = 2,
        .weight = 10,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMOONGUSS] =
    {
        .categoryName = _("Mushroom"),
        .height = 6,
        .weight = 105,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRILLISH] =
    {
        .categoryName = _("Floating"),
        .height = 12,
        .weight = 330,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JELLICENT] =
    {
        .categoryName = _("Floating"),
        .height = 22,
        .weight = 1350,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALOMOMOLA] =
    {
        .categoryName = _("Caring"),
        .height = 12,
        .weight = 316,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTIK] =
    {
        .categoryName = _("Attaching"),
        .height = 1,
        .weight = 6,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALVANTULA] =
    {
        .categoryName = _("EleSpider"),
        .height = 8,
        .weight = 143,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROSEED] =
    {
        .categoryName = _("Thorn Seed"),
        .height = 6,
        .weight = 188,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROTHORN] =
    {
        .categoryName = _("Thorn Pod"),
        .height = 10,
        .weight = 1100,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLINK] =
    {
        .categoryName = _("Gear"),
        .height = 3,
        .weight = 210,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLANG] =
    {
        .categoryName = _("Gear"),
        .height = 6,
        .weight = 510,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KLINKLANG] =
    {
        .categoryName = _("Gear"),
        .height = 6,
        .weight = 810,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYNAMO] =
    {
        .categoryName = _("EleFish"),
        .height = 2,
        .weight = 3,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTRIK] =
    {
        .categoryName = _("EleFish"),
        .height = 12,
        .weight = 220,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTROSS] =
    {
        .categoryName = _("EleFish"),
        .height = 21,
        .weight = 805,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELGYEM] =
    {
        .categoryName = _("Cerebral"),
        .height = 5,
        .weight = 90,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEHEEYEM] =
    {
        .categoryName = _("Cerebral"),
        .height = 10,
        .weight = 345,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITWICK] =
    {
        .categoryName = _("Candle"),
        .height = 3,
        .weight = 31,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAMPENT] =
    {
        .categoryName = _("Lamp"),
        .height = 6,
        .weight = 130,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHANDELURE] =
    {
        .categoryName = _("Luring"),
        .height = 10,
        .weight = 343,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AXEW] =
    {
        .categoryName = _("Tusk"),
        .height = 6,
        .weight = 180,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FRAXURE] =
    {
        .categoryName = _("Axe Jaw"),
        .height = 10,
        .weight = 360,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAXORUS] =
    {
        .categoryName = _("Axe Jaw"),
        .height = 18,
        .weight = 1055,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUBCHOO] =
    {
        .categoryName = _("Chill"),
        .height = 5,
        .weight = 85,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEARTIC] =
    {
        .categoryName = _("Freezing"),
        .height = 26,
        .weight = 2600,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRYOGONAL] =
    {
        .categoryName = _("Crystallize"),
        .height = 11,
        .weight = 1480,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELMET] =
    {
        .categoryName = _("Snail"),
        .height = 4,
        .weight = 77,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ACCELGOR] =
    {
        .categoryName = _("ShellOut"),
        .height = 8,
        .weight = 253,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STUNFISK] =
    {
        .categoryName = _("Trap"),
        .height = 7,
        .weight = 110,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIENFOO] =
    {
        .categoryName = _("Martial Arts"),
        .height = 9,
        .weight = 200,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIENSHAO] =
    {
        .categoryName = _("Martial Arts"),
        .height = 14,
        .weight = 355,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRUDDIGON] =
    {
        .categoryName = _("Cave"),
        .height = 16,
        .weight = 1390,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLETT] =
    {
        .categoryName = _("Automaton"),
        .height = 10,
        .weight = 920,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLURK] =
    {
        .categoryName = _("Automaton"),
        .height = 28,
        .weight = 3300,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PAWNIARD] =
    {
        .categoryName = _("Sharp Blade"),
        .height = 5,
        .weight = 102,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BISHARP] =
    {
        .categoryName = _("Sword Blade"),
        .height = 16,
        .weight = 700,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOUFFALANT] =
    {
        .categoryName = _("Bash Buffalo"),
        .height = 16,
        .weight = 946,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RUFFLET] =
    {
        .categoryName = _("Eaglet"),
        .height = 5,
        .weight = 105,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAVIARY] =
    {
        .categoryName = _("Valiant"),
        .height = 15,
        .weight = 410,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULLABY] =
    {
        .categoryName = _("Diapered"),
        .height = 5,
        .weight = 90,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANDIBUZZ] =
    {
        .categoryName = _("Bone Vulture"),
        .height = 12,
        .weight = 395,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HEATMOR] =
    {
        .categoryName = _("Anteater"),
        .height = 14,
        .weight = 580,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DURANT] =
    {
        .categoryName = _("Iron Ant"),
        .height = 3,
        .weight = 330,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEINO] =
    {
        .categoryName = _("Irate"),
        .height = 8,
        .weight = 173,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZWEILOUS] =
    {
        .categoryName = _("Hostile"),
        .height = 14,
        .weight = 500,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYDREIGON] =
    {
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 1600,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LARVESTA] =
    {
        .categoryName = _("Torch"),
        .height = 11,
        .weight = 288,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLCARONA] =
    {
        .categoryName = _("Sun"),
        .height = 16,
        .weight = 460,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COBALION] =
    {
        .categoryName = _("Iron Will"),
        .height = 21,
        .weight = 2500,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TERRAKION] =
    {
        .categoryName = _("Cavern"),
        .height = 19,
        .weight = 2600,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIRIZION] =
    {
        .categoryName = _("Grassland"),
        .height = 20,
        .weight = 2000,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TORNADUS] =
    {
        .categoryName = _("Cyclone"),
        .height = 15,
        .weight = 630,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_THUNDURUS] =
    {
        .categoryName = _("Bolt Strike"),
        .height = 15,
        .weight = 610,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RESHIRAM] =
    {
        .categoryName = _("Vast White"),
        .height = 32,
        .weight = 3300,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZEKROM] =
    {
        .categoryName = _("Deep Black"),
        .height = 29,
        .weight = 3450,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANDORUS] =
    {
        .categoryName = _("Abundance"),
        .height = 15,
        .weight = 680,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KYUREM] =
    {
        .categoryName = _("Boundary"),
        .height = 30,
        .weight = 3250,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KELDEO] =
    {
        .categoryName = _("Colt"),
        .height = 14,
        .weight = 485,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MELOETTA] =
    {
        .categoryName = _("Melody"),
        .height = 6,
        .weight = 65,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GENESECT] =
    {
        .categoryName = _("Paleozoic"),
        .height = 15,
        .weight = 825,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    [NATIONAL_DEX_SYLVEON] =
    {
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    [NATIONAL_DEX_MISSINGNO] =
    {
        .categoryName = _("???"),
        .height = 33,
        .weight = 15908,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

};
