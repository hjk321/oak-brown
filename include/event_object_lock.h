#ifndef GUARD_EVENT_OBJECT_LOCK_H
#define GUARD_EVENT_OBJECT_LOCK_H

#include "global.h"

bool8 NativeScript_WaitPlayerStopMoving(void);
void ScriptFreezeObjectEvents(void);
bool8 NativeScript_WaitPlayerAndTargetNPCStopMoving(void);
void LockSelectedObjectEvent(void);
void sub_8098630(void);
bool8 sub_8098734(void);
void ClearPlayerHeldMovementAndUnfreezeObjectEvents(void);
bool8 walkrun_is_standing_still(void);
void UnionRoom_UnlockPlayerAndChatPartner(void);
void ScriptFreezeTargetObjectEvent(void);

#endif // GUARD_EVENT_OBJECT_LOCK_H
