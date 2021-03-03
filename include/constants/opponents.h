#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#include "constants/opponents_old.h"

#define TRAINER_NONE                               0

// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is 
//       only space for 25 additional trainers before trainer flag space overflows.
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define NUM_TRAINERS                             1
#define MAX_TRAINERS_COUNT                       768

#endif  // GUARD_CONSTANTS_OPPONENTS_H
