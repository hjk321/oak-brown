#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#define RNG_SEED_MURA                               127

#include "constants/opponents_old.h"

#define TRAINER_NONE                                0
#define TRAINER_MURA_BULBASAUR_1                    1
#define TRAINER_MURA_CHARMANDER_1                   2
#define TRAINER_MURA_SQUIRTLE_1                     3

// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is 
//       only space for 25 additional trainers before trainer flag space overflows.
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define NUM_TRAINERS                             4
#define MAX_TRAINERS_COUNT                       768

#endif  // GUARD_CONSTANTS_OPPONENTS_H
