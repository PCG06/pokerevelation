#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_1_BEAT_GYM_JAKE               0
#define QUEST_2_BEAT_GYM_REEVE              1
#define QUEST_3_BEAT_GYM_PREM               2
#define QUEST_4_BEAT_GYM_JAISON             3
#define QUEST_5_BEAT_GYM_PRAJITH            4
#define QUEST_6_BEAT_GYM_VARUN              5
#define QUEST_7_BEAT_GYM_SNEHAL             6
#define QUEST_8_BEAT_GYM_RAJESH             7
#define QUEST_9_BEAT_CHALLENGERS_ARENA      8
#define QUEST_10_THE_REVELATION_CHAMPION    9
#define QUEST_11_THE_MONOTYPE_MASOCHIST     10
#define QUEST_12_THE_REGIONAL_REGAL         11
#define QUEST_COUNT                         (QUEST_12_THE_REGIONAL_REGAL + 1)

// Sub quests per main quests
// Quest offsets are used for the unique id per subquest, whilst the subquest param takes array subscript

// Gym Quests
#define QUEST_1_OFFSET                      0
#define SUB_QUEST_1_BEAT_PRAJESH            0
#define SUB_QUEST_1_BEAT_JAKE               1
#define SUB_QUEST_1_BEAT_PAWAN              2

#define QUEST_2_OFFSET                      3
#define SUB_QUEST_2_BEAT_PREMAL             0
#define SUB_QUEST_2_BEAT_REEVE              1
#define SUB_QUEST_2_BEAT_HANSTON            2

#define QUEST_3_OFFSET                      6
#define SUB_QUEST_3_BEAT_DON                0
#define SUB_QUEST_3_BEAT_PREM               1
#define SUB_QUEST_3_BEAT_RASHEL             2

#define QUEST_4_OFFSET                      9
#define SUB_QUEST_4_BEAT_DARA               0
#define SUB_QUEST_4_BEAT_JAISON             1
#define SUB_QUEST_4_BEAT_AKSHARA            2

#define QUEST_5_OFFSET                      12
#define SUB_QUEST_5_BEAT_DELSON             0
#define SUB_QUEST_5_BEAT_PRAJITH            1
#define SUB_QUEST_5_BEAT_GILSTON            2

#define QUEST_6_OFFSET                      15
#define SUB_QUEST_6_BEAT_DARWIN             0
#define SUB_QUEST_6_BEAT_VARUN              1
#define SUB_QUEST_6_BEAT_MONVISH            2

#define QUEST_7_OFFSET                      18
#define SUB_QUEST_7_BEAT_HANDAM             0
#define SUB_QUEST_7_BEAT_SNEHAL             1
#define SUB_QUEST_7_BEAT_ADITHYA            2

#define QUEST_8_OFFSET                      21
#define SUB_QUEST_8_BEAT_DEON               0
#define SUB_QUEST_8_BEAT_RAJESH             1
#define SUB_QUEST_8_BEAT_RION               2

// Challengers Arena Quest
#define QUEST_9_OFFSET                     24
#define SUB_QUEST_9_BEAT_MANVITHA           0
#define SUB_QUEST_9_BEAT_KEVIN              1
#define SUB_QUEST_9_BEAT_LOHITH             2
#define SUB_QUEST_9_BEAT_ANMOL              3
#define SUB_QUEST_9_BEAT_ARSHAD             4
#define SUB_QUEST_9_BEAT_MELWIN             5
#define SUB_QUEST_9_BEAT_YASHAS             6

// Mono-Type Quest
#define QUEST_11_OFFSET                     31
#define SUB_QUEST_11_MONOTYPE_NORMAL        0
#define SUB_QUEST_11_MONOTYPE_FIGHTING      1
#define SUB_QUEST_11_MONOTYPE_FLYING        2
#define SUB_QUEST_11_MONOTYPE_POISON        3
#define SUB_QUEST_11_MONOTYPE_GROUND        4
#define SUB_QUEST_11_MONOTYPE_ROCK          5
#define SUB_QUEST_11_MONOTYPE_BUG           6
#define SUB_QUEST_11_MONOTYPE_GHOST         7
#define SUB_QUEST_11_MONOTYPE_STEEL         8
#define SUB_QUEST_11_MONOTYPE_FIRE          9
#define SUB_QUEST_11_MONOTYPE_WATER         10
#define SUB_QUEST_11_MONOTYPE_GRASS         11
#define SUB_QUEST_11_MONOTYPE_ELECTRIC      12
#define SUB_QUEST_11_MONOTYPE_PSYCHIC       13
#define SUB_QUEST_11_MONOTYPE_ICE           14
#define SUB_QUEST_11_MONOTYPE_DRAGON        15
#define SUB_QUEST_11_MONOTYPE_DARK          16
#define SUB_QUEST_11_MONOTYPE_FAIRY         17

// Mono-Region Quest
#define QUEST_12_OFFSET                     49
#define SUB_QUEST_12_REGION_KANTO           0
#define SUB_QUEST_12_REGION_JOHTO           1
#define SUB_QUEST_12_REGION_HOENN           2
#define SUB_QUEST_12_REGION_SINNOH          3
#define SUB_QUEST_12_REGION_UNOVA           4
#define SUB_QUEST_12_REGION_KALOS           5
#define SUB_QUEST_12_REGION_ALOLA           6
#define SUB_QUEST_12_REGION_GALAR           7
#define SUB_QUEST_12_REGION_PALDEA          8

#define GYM_SUBQUESTS_COUNT         3
#define CHALLENGERS_SUBQUEST_COUNT  7
#define MONOTYPE_SUBQUEST_COUNT     18
#define MONOREGION_SUBQUEST_COUNT   9
#define SUB_QUEST_COUNT             ((8 * GYM_SUBQUESTS_COUNT) + CHALLENGERS_SUBQUEST_COUNT + MONOTYPE_SUBQUEST_COUNT + MONOREGION_SUBQUEST_COUNT)

#define QUEST_ARRAY_COUNT           (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
