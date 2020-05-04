#ifndef GUARD_QUESTS_H
#define GUARD_QUESTS_H

//constants
enum SideQuests
{
    SIDE_QUEST_1,
    SIDE_QUEST_2,
    SIDE_QUEST_3,
    SIDE_QUEST_4,
    SIDE_QUEST_5,
    SIDE_QUEST_6,
    SIDE_QUEST_7,
    SIDE_QUEST_8,
    SIDE_QUEST_9,
    SIDE_QUEST_10,
    SIDE_QUEST_11,
    SIDE_QUEST_12,
    SIDE_QUEST_13,
    SIDE_QUEST_14,
    SIDE_QUEST_15,
    SIDE_QUEST_16,
    SIDE_QUEST_17,
    SIDE_QUEST_18,
    SIDE_QUEST_19,
    SIDE_QUEST_20,
    SIDE_QUEST_21,
    SIDE_QUEST_22,
    SIDE_QUEST_23,
    SIDE_QUEST_24,
    SIDE_QUEST_25,
    SIDE_QUEST_26,
    SIDE_QUEST_27,
    SIDE_QUEST_28,
    SIDE_QUEST_29,
    SIDE_QUEST_30,
    SIDE_QUEST_COUNT
};

//#define FLAG_QUEST_MENU_ACTIVE              0x200 //constants/flags.h
#define NO_ACTIVE_QUEST                     -1

//structs
struct SideQuest 
{
	/*0x00*/ const u8* name;
	/*0x04*/ const u8* desc;
	/*0x08*/ const u8* poc;
	/*0x0C*/ const u8* map;
	///*0x10*/ const u8* hint;
	/*0x10*/ const u8* reward;
}; /* size = 0x14 */

extern const struct SideQuest gSideQuests[SIDE_QUEST_COUNT];

enum 
{
	QUEST_DIFFICULTY_EASY,
	QUEST_DIFFICULTY_MEDIUM,
	QUEST_DIFFICULTY_HARD,
	QUEST_DIFFICULTY_EXTREME,
};

enum QuestCases
{
    FLAG_GET_UNLOCKED,      // check if quest is unlocked
    FLAG_SET_UNLOCKED,      // mark unlocked quest
    FLAG_GET_COMPLETED,     // check if quest is completed
    FLAG_SET_COMPLETED,     // mark completed quest
};

//functions
void SetQuestMenuActive(void);
void SetActiveQuest(u8 questId);


#endif // GUARD_QUESTS_H