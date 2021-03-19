#ifndef GUARD_QUESTS_H
#define GUARD_QUESTS_H

typedef const u16 (*ObjectiveFunc)(void);

struct SideQuest 
{
	const u8* name;
	const u8* desc;
	const u8* poc;
	const u8* map;
	u8 difficulty;
	u16 objectives;
	ObjectiveFunc completedObjectives;
};

extern const struct SideQuest gSideQuests[SIDE_QUEST_COUNT];

enum 
{
	QUEST_DIFFICULTY_EASY,
	QUEST_DIFFICULTY_NORMAL,
	QUEST_DIFFICULTY_CHALLENGING,
	QUEST_DIFFICULTY_HARD,
	QUEST_DIFFICULTY_MASTER,
	QUEST_DIFFICULTY_SPECIAL,
};

enum QuestCases
{
    FLAG_GET_UNLOCKED,      // check if quest is unlocked
    FLAG_SET_UNLOCKED,      // mark unlocked quest
    FLAG_GET_COMPLETED,     // check if quest is completed
    FLAG_SET_COMPLETED,     // mark completed quest
};

//functions
void CB2_QuestMenuFromStartMenu(void);
void SetQuestMenuActive(void);
void CopyQuestName(u8 *dst, u8 questId);
s8 GetSetQuestFlag(u8 quest, u8 caseId);

#endif // GUARD_QUESTS_H
