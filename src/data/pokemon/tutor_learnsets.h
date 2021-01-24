static const u16 sTutorMoves[TUTOR_MOVE_COUNT] =
{
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
};

#define TUTOR(move) (1 << (TUTOR_##move))

static const u16 sTutorLearnsets[] =
{
    [SPECIES_NONE] = 0,

    [SPECIES_BULBASAUR] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IVYSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENUSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARMANDER] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARMELEON] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARIZARD] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SQUIRTLE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WARTORTLE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLASTOISE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CATERPIE] = 0,

    [SPECIES_METAPOD] = 0,

    [SPECIES_BUTTERFREE] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEDLE] = 0,

    [SPECIES_KAKUNA] = 0,

    [SPECIES_BEEDRILL] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOTTO] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATTATA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATICATE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EKANS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARBOK] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIKACHU] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAICHU] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDSHREW] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDSLASH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORAN_F] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOQUEEN] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORAN_M] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOKING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFAIRY] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFABLE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VULPIX] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINETALES] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIGGLYPUFF] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WIGGLYTUFF] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZUBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ODDISH] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VILEPLUME] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARAS] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARASECT] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENONAT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENOMOTH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DIGLETT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUGTRIO] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEOWTH] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PERSIAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PSYDUCK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLDUCK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANKEY] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PRIMEAPE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROWLITHE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARCANINE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWAG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWHIRL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWRATH] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ABRA] = TUTOR(MOVE_MEGA_PUNCH)
                   | TUTOR(MOVE_MEGA_KICK)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KADABRA] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALAKAZAM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHOP] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHOKE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHAMP] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELLSPROUT] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEPINBELL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VICTREEBEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACOOL] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACRUEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GEODUDE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRAVELER] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLEM] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_EXPLOSION)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PONYTA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAPIDASH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWPOKE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWBRO] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGNEMITE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGNETON] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FARFETCHD] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODUO] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODRIO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEEL] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEWGONG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRIMER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MUK] = TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHELLDER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLOYSTER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GASTLY] = TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HAUNTER] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GENGAR] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ONIX] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_EXPLOSION)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DROWZEE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HYPNO] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KRABBY] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGLER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VOLTORB] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTRODE] = TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGCUTE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGUTOR] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CUBONE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAROWAK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONLEE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONCHAN] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_METRONOME)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LICKITUNG] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KOFFING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEZING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYHORN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYDON] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHANSEY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TANGELA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KANGASKHAN] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HORSEA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEADRA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLDEEN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEAKING] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARYU] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARMIE] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MR_MIME] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCYTHER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JYNX] = TUTOR(MOVE_MEGA_PUNCH)
                   | TUTOR(MOVE_MEGA_KICK)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTABUZZ] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGMAR] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PINSIR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAUROS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGIKARP] = 0,

    [SPECIES_GYARADOS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAPRAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DITTO] = 0,

    [SPECIES_EEVEE] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VAPOREON] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JOLTEON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMANYTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMASTAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTOPS] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AERODACTYL] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNORLAX] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARTICUNO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZAPDOS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MOLTRES] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRATINI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONAIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONITE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEWTWO] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEW] = TUTOR(MOVE_MEGA_PUNCH)
                  | TUTOR(MOVE_SWORDS_DANCE)
                  | TUTOR(MOVE_MEGA_KICK)
                  | TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_DOUBLE_EDGE)
                  | TUTOR(MOVE_COUNTER)
                  | TUTOR(MOVE_SEISMIC_TOSS)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_METRONOME)
                  | TUTOR(MOVE_SOFT_BOILED)
                  | TUTOR(MOVE_DREAM_EATER)
                  | TUTOR(MOVE_THUNDER_WAVE)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_ROCK_SLIDE)
                  | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHIKORITA] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BAYLEEF] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEGANIUM] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CYNDAQUIL] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUILAVA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TYPHLOSION] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOTODILE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CROCONAW] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FERALIGATR] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SENTRET] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FURRET] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOOTHOOT] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOCTOWL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LEDYBA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LEDIAN] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPINARAK] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARIADOS] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CROBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHINCHOU] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LANTURN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PICHU] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFFA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IGGLYBUFF] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGEPI] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGETIC] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NATU] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_XATU] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAREEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAAFFY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AMPHAROS] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELLOSSOM] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MARILL] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AZUMARILL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUDOWOODO] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLITOED] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOPPIP] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKIPLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JUMPLUFF] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AIPOM] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNKERN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNFLORA] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_YANMA] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WOOPER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUAGSIRE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ESPEON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UMBREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MURKROW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWKING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MISDREAVUS] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UNOWN] = 0,

    [SPECIES_WOBBUFFET] = 0,

    [SPECIES_GIRAFARIG] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PINECO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FORRETRESS] = TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_EXPLOSION)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUNSPARCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLIGAR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STEELIX] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNUBBULL] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRANBULL] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QWILFISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCIZOR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUCKLE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HERACROSS] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNEASEL] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TEDDIURSA] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_URSARING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLUGMA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGCARGO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWINUB] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PILOSWINE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORSOLA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REMORAID] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OCTILLERY] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELIBIRD] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANTINE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKARMORY] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOUR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOOM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGDRA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PHANPY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DONPHAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON2] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STANTLER] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SMEARGLE] = 0,

    [SPECIES_TYROGUE] = TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONTOP] = TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SMOOCHUM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELEKID] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGBY] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MILTANK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLISSEY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAIKOU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ENTEI] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUICUNE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LARVITAR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PUPITAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TYRANITAR] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUGIA] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HO_OH] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CELEBI] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TREECKO] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROVYLE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCEPTILE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TORCHIC] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_COMBUSKEN] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLAZIKEN] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MUDKIP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MARSHTOMP] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWAMPERT] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POOCHYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MIGHTYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZIGZAGOON] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LINOONE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WURMPLE] = 0,

    [SPECIES_SILCOON] = 0,

    [SPECIES_BEAUTIFLY] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CASCOON] = 0,

    [SPECIES_DUSTOX] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOTAD] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOMBRE] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUDICOLO] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEEDOT] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUZLEAF] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHIFTRY] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINCADA] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINJASK] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHEDINJA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAILLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWELLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHROOMISH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BRELOOM] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPINDA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WINGULL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PELIPPER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SURSKIT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MASQUERAIN] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILMER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILORD] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKITTY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELCATTY] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KECLEON] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BALTOY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAYDOL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOSEPASS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TORKOAL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SABLEYE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BARBOACH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISCASH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUVDISC] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORPHISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRAWDAUNT] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEEBAS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MILOTIC] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CARVANHA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHARPEDO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TRAPINCH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VIBRAVA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLYGON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAKUHITA] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HARIYAMA] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTRIKE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANECTRIC] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUMEL] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CAMERUPT] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPHEAL] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEALEO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WALREIN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CACNEA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CACTURNE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNORUNT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLALIE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUNATONE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SOLROCK] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AZURILL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPOINK] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRUMPIG] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PLUSLE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MINUN] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAWILE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEDITITE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEDICHAM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWABLU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALTARIA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WYNAUT] = 0,

    [SPECIES_DUSKULL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUSCLOPS] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ROSELIA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLAKOTH] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VIGOROTH] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLAKING] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GULPIN] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWALOT] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TROPIUS] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISMUR] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOUDRED] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXPLOUD] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAMPERL] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HUNTAIL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOREBYSS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ABSOL] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUPPET] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BANETTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEVIPER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZANGOOSE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RELICANTH] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARON] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAIRON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AGGRON] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CASTFORM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VOLBEAT] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ILLUMISE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LILEEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRADILY] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ANORITH] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARMALDO] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RALTS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KIRLIA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GARDEVOIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BAGON] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHELGON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SALAMENCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELDUM] = 0,

    [SPECIES_METANG] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_METAGROSS] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGIROCK] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGICE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGISTEEL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KYOGRE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROUDON] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAYQUAZA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIOS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIRACHI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEOXYS] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHIMECHO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TURTWIG] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GROTLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TORTERRA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CHIMCHAR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MONFERNO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_INFERNAPE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PIPLUP] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PRINPLUP] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_EMPOLEON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_STARLY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_STARAVIA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_STARAPTOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BIDOOF] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BIBAREL] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KRICKETOT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KRICKETUNE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SHINX] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LUXIO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LUXRAY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BUDEW] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ROSERADE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CRANIDOS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_RAMPARDOS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SHIELDON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BASTIODON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BURMY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_WORMADAM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MOTHIM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_COMBEE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VESPIQUEN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PACHIRISU] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BUIZEL] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FLOATZEL] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CHERUBI] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CHERRIM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SHELLOS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GASTRODON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_AMBIPOM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DRIFLOON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DRIFBLIM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BUNEARY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LOPUNNY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MISMAGIUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HONCHKROW] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GLAMEOW] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PURUGLY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CHINGLING] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_STUNKY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SKUNTANK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BRONZOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BRONZONG] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BONSLY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MIMEJR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HAPPINY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CHATOT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SPIRITOMB] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GIBLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GABITE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GARCHOMP] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MUNCHLAX] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_RIOLU] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LUCARIO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HIPPOPOTAS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HIPPOWDON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SKORUPI] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DRAPION] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CROAGUNK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TOXICROAK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CARNIVINE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FINNEON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LUMINEON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MANTYKE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SNOVER] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ABOMASNOW] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_WEAVILE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MAGNEZONE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LICKILICKY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_RHYPERIOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TANGROWTH] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ELECTIVIRE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MAGMORTAR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TOGEKISS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_YANMEGA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LEAFEON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GLACEON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GLISCOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MAMOSWINE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PORYGON_Z] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GALLADE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PROBOPASS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DUSKNOIR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FROSLASS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ROTOM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_UXIE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MESPRIT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_AZELF] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DIALGA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PALKIA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HEATRAN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_REGIGIGAS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GIRATINA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CRESSELIA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PHIONE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MANAPHY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DARKRAI] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SHAYMIN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ARCEUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VICTINI] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SNIVY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SERVINE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SERPERIOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TEPIG] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PIGNITE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_EMBOAR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_OSHAWOTT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DEWOTT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SAMUROTT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PATRAT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_WATCHOG] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LILLIPUP] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HERDIER] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_STOUTLAND] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PURRLOIN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LIEPARD] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PANSAGE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SIMISAGE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PANSEAR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SIMISEAR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PANPOUR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SIMIPOUR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MUNNA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MUSHARNA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PIDOVE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TRANQUILL] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_UNFEZANT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BLITZLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ZEBSTRIKA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ROGGENROLA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BOLDORE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GIGALITH] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_WOOBAT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SWOOBAT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DRILBUR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_EXCADRILL] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_AUDINO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TIMBURR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GURDURR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CONKELDURR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TYMPOLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PALPITOAD] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SEISMITOAD] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_THROH] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SAWK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SEWADDLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SWADLOON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LEAVANNY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VENIPEDE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_WHIRLIPEDE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SCOLIPEDE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_COTTONEE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_WHIMSICOTT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PETILIL] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LILLIGANT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BASCULIN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SANDILE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KROKOROK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KROOKODILE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DARUMAKA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DARMANITAN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MARACTUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DWEBBLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CRUSTLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SCRAGGY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SCRAFTY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SIGILYPH] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_YAMASK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_COFAGRIGUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TIRTOUGA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CARRACOSTA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ARCHEN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ARCHEOPS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TRUBBISH] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GARBODOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ZORUA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ZOROARK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MINCCINO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CINCCINO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GOTHITA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GOTHORITA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GOTHITELLE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SOLOSIS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DUOSION] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_REUNICLUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DUCKLETT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SWANNA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VANILLITE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VANILLISH] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VANILLUXE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DEERLING] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SAWSBUCK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_EMOLGA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KARRABLAST] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ESCAVALIER] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FOONGUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_AMOONGUSS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FRILLISH] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_JELLICENT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ALOMOMOLA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_JOLTIK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GALVANTULA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FERROSEED] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FERROTHORN] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KLINK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KLANG] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KLINKLANG] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TYNAMO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_EELEKTRIK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_EELEKTROSS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ELGYEM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BEHEEYEM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LITWICK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LAMPENT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CHANDELURE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_AXEW] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_FRAXURE] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HAXORUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CUBCHOO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BEARTIC] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_CRYOGONAL] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SHELMET] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ACCELGOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_STUNFISK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MIENFOO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MIENSHAO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DRUDDIGON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GOLETT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GOLURK] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_PAWNIARD] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BISHARP] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BOUFFALANT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_RUFFLET] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_BRAVIARY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VULLABY] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MANDIBUZZ] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HEATMOR] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DURANT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_DEINO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ZWEILOUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_HYDREIGON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LARVESTA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VOLCARONA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_COBALION] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TERRAKION] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_VIRIZION] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_TORNADUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_THUNDURUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_RESHIRAM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_ZEKROM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_LANDORUS] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KYUREM] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_KELDEO] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MELOETTA] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_GENESECT] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_SYLVEON] = TUTOR(MOVE_SUBSTITUTE), // TODO
    [SPECIES_MISSINGNO] = TUTOR(MOVE_SUBSTITUTE), // TODO

};
