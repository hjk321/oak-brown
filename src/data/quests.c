#define side_quest(n, dif, d, p, m, o, c) {.name = n, .difficulty = dif, .desc = d, .poc = p, .map = m, .objectives = o, .completedObjectives = c}
static const struct SideQuest sSideQuests[SIDE_QUEST_COUNT] =
{
    side_quest(gText_SideQuestName_PokedexMaster,  QUEST_DIFFICULTY_MASTER, gText_SideQuestDesc_PokedexMaster,  gText_SideQuestPOC_Tim,  gText_SideQuestMap_GravelTown, NATIONAL_DEX_COUNT, Objective_PokedexMaster),
    side_quest(gText_SideQuestName_CatchEmAll,  QUEST_DIFFICULTY_MASTER, gText_SideQuestDesc_CatchEmAll,  gText_SideQuestPOC_Tim,  gText_SideQuestMap_GravelTown, NATIONAL_DEX_COUNT, Objective_CatchEmAll),
    side_quest(gText_SideQuestName_3,  QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_3,  gText_SideQuestPOC_3,  gText_SideQuestMap_3, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_4,  QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_4,  gText_SideQuestPOC_4,  gText_SideQuestMap_4, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_5,  QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_5,  gText_SideQuestPOC_5,  gText_SideQuestMap_5, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_6,  QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_6,  gText_SideQuestPOC_6,  gText_SideQuestMap_6, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_7,  QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_7,  gText_SideQuestPOC_7,  gText_SideQuestMap_7, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_8,  QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_8,  gText_SideQuestPOC_8,  gText_SideQuestMap_8, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_9,  QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_9,  gText_SideQuestPOC_9,  gText_SideQuestMap_9, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_10, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_10, gText_SideQuestPOC_10, gText_SideQuestMap_10, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_11, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_11, gText_SideQuestPOC_11, gText_SideQuestMap_11, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_12, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_12, gText_SideQuestPOC_12, gText_SideQuestMap_12, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_13, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_13, gText_SideQuestPOC_13, gText_SideQuestMap_13, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_14, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_14, gText_SideQuestPOC_14, gText_SideQuestMap_14, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_15, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_15, gText_SideQuestPOC_15, gText_SideQuestMap_15, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_16, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_16, gText_SideQuestPOC_16, gText_SideQuestMap_16, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_17, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_17, gText_SideQuestPOC_17, gText_SideQuestMap_17, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_18, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_18, gText_SideQuestPOC_18, gText_SideQuestMap_18, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_19, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_19, gText_SideQuestPOC_19, gText_SideQuestMap_19, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_20, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_20, gText_SideQuestPOC_20, gText_SideQuestMap_20, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_21, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_21, gText_SideQuestPOC_21, gText_SideQuestMap_21, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_22, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_22, gText_SideQuestPOC_22, gText_SideQuestMap_22, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_23, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_23, gText_SideQuestPOC_23, gText_SideQuestMap_23, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_24, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_24, gText_SideQuestPOC_24, gText_SideQuestMap_24, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_25, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_25, gText_SideQuestPOC_25, gText_SideQuestMap_25, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_26, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_26, gText_SideQuestPOC_26, gText_SideQuestMap_26, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_27, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_27, gText_SideQuestPOC_27, gText_SideQuestMap_27, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_28, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_28, gText_SideQuestPOC_28, gText_SideQuestMap_28, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_29, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_29, gText_SideQuestPOC_29, gText_SideQuestMap_29, 1, Objective_Dummy),
    side_quest(gText_SideQuestName_30, QUEST_DIFFICULTY_NORMAL, gText_SideQuestDesc_30, gText_SideQuestPOC_30, gText_SideQuestMap_30, 1, Objective_Dummy),
};
