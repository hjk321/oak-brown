#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#define RNG_SEED_MURA                               127

#define TRAINER_NONE                                0
#define TRAINER_MURA_BULBASAUR_1                    1
#define TRAINER_MURA_CHARMANDER_1                   2
#define TRAINER_MURA_SQUIRTLE_1                     3
#define TRAINER_YOUNGSTER_HAYDEN                    4
#define TRAINER_YOUNGSTER_BENNY                     5
#define TRAINER_LASS_ABIGAIL                        6
#define TRAINER_BUG_CATCHER_FRED                    7
#define TRAINER_SUPER_NERD_JONATHAN                 8
#define TRAINER_HIKER_BRIAN                         9
#define TRAINER_SUPER_NERD_JARUS                    10
#define TRAINER_LASS_NATALIE                        11
#define TRAINER_BUG_CATCHER_GEORGE                  12

// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is 
//       only space for 25 additional trainers before trainer flag space overflows.
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define NUM_TRAINERS                             12
#define MAX_TRAINERS_COUNT                       768

#endif  // GUARD_CONSTANTS_OPPONENTS_H
