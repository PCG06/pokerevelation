#ifndef GUARD_MOVE_RELEARNER_H
#define GUARD_MOVE_RELEARNER_H

void TeachMoveRelearnerMove(void);
void MoveRelearnerShowHideHearts(s32 move);
void MoveRelearnerShowHideCategoryIcon(s32);
void CB2_InitLearnMove(void);
u32 CheckDynamicMoveRelearnerType(u32 chosenMove);

extern u8 gOriginSummaryScreenPage;

#define MAX_RELEARNER_MOVES 300

#endif //GUARD_MOVE_RELEARNER_H
