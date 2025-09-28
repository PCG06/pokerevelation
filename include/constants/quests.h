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
#define QUEST_13        12
#define QUEST_14        13
#define QUEST_15        14
#define QUEST_16        15
#define QUEST_17        16
#define QUEST_18        17
#define QUEST_19        18
#define QUEST_20        19
#define QUEST_21        20
#define QUEST_22        21
#define QUEST_23        22
#define QUEST_24        23
#define QUEST_25        24
#define QUEST_26        25
#define QUEST_27        26
#define QUEST_28        27
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_COUNT     (QUEST_30 + 1)

// Gym Quests
#define SUB_QUEST_1_BEAT_PRAJESH            0
#define SUB_QUEST_2_BEAT_JAKE               1
#define SUB_QUEST_3_BEAT_PAWAN              2

#define SUB_QUEST_4_BEAT_PREMAL             3
#define SUB_QUEST_5_BEAT_REEVE              4
#define SUB_QUEST_6_BEAT_HANSTON            5

#define SUB_QUEST_7_BEAT_DON                6
#define SUB_QUEST_8_BEAT_PREM               7
#define SUB_QUEST_9_BEAT_RASHEL             8

#define SUB_QUEST_10_BEAT_DARA              9
#define SUB_QUEST_11_BEAT_JAISON            10
#define SUB_QUEST_12_BEAT_AKSHARA           11

#define SUB_QUEST_13_BEAT_DELSON            12
#define SUB_QUEST_14_BEAT_PRAJITH           13
#define SUB_QUEST_15_BEAT_GILSTON           14

#define SUB_QUEST_16_BEAT_DARWIN            15
#define SUB_QUEST_17_BEAT_VARUN             16
#define SUB_QUEST_18_BEAT_MONVISH           17

#define SUB_QUEST_19_BEAT_HANDAM            18
#define SUB_QUEST_20_BEAT_SNEHAL            19
#define SUB_QUEST_21_BEAT_ADITHYA           20

#define SUB_QUEST_22_BEAT_DEON              21
#define SUB_QUEST_23_BEAT_RAJESH            22
#define SUB_QUEST_24_BEAT_RION              23

// Challengers Arena Quest
#define SUB_QUEST_25_BEAT_MANVITHA          24
#define SUB_QUEST_26_BEAT_KEVIN             25
#define SUB_QUEST_27_BEAT_LOHITH            26
#define SUB_QUEST_28_BEAT_ANMOL             27
#define SUB_QUEST_29_BEAT_ARSHAD            28
#define SUB_QUEST_30_BEAT_MELWIN            29
#define SUB_QUEST_31_BEAT_YASHAS            30

// Mono-Type Quest
#define SUB_QUEST_32_MONOTYPE_NORMAL        31
#define SUB_QUEST_33_MONOTYPE_FIGHTING      32
#define SUB_QUEST_34_MONOTYPE_FLYING        33
#define SUB_QUEST_35_MONOTYPE_POISON        34
#define SUB_QUEST_36_MONOTYPE_GROUND        35
#define SUB_QUEST_37_MONOTYPE_ROCK          36
#define SUB_QUEST_38_MONOTYPE_BUG           37
#define SUB_QUEST_39_MONOTYPE_GHOST         38
#define SUB_QUEST_40_MONOTYPE_STEEL         39
#define SUB_QUEST_41_MONOTYPE_FIRE          40
#define SUB_QUEST_42_MONOTYPE_WATER         41
#define SUB_QUEST_43_MONOTYPE_GRASS         42
#define SUB_QUEST_44_MONOTYPE_ELECTRIC      43
#define SUB_QUEST_45_MONOTYPE_PSYCHIC       44
#define SUB_QUEST_46_MONOTYPE_ICE           45
#define SUB_QUEST_47_MONOTYPE_DRAGON        46
#define SUB_QUEST_48_MONOTYPE_DARK          47
#define SUB_QUEST_49_MONOTYPE_FAIRY         48

// Mono-Region Quest
#define SUB_QUEST_50_REGION_KANTO           49
#define SUB_QUEST_51_REGION_JOHTO           50
#define SUB_QUEST_52_REGION_HOENN           51
#define SUB_QUEST_53_REGION_SINNOH          52
#define SUB_QUEST_54_REGION_UNOVA           53
#define SUB_QUEST_55_REGION_KALOS           54
#define SUB_QUEST_56_REGION_ALOLA           55
#define SUB_QUEST_57_REGION_GALAR           56
#define SUB_QUEST_58_REGION_PALDEA          57

#define GYM_SUBQUESTS_COUNT         3
#define CHALLENGERS_SUBQUEST_COUNT  7
#define MONOTYPE_SUBQUEST_COUNT     18
#define MONOREGION_SUBQUEST_COUNT   9
#define SUB_QUEST_COUNT             ((8 * GYM_SUBQUESTS_COUNT) + CHALLENGERS_SUBQUEST_COUNT + MONOTYPE_SUBQUEST_COUNT + MONOREGION_SUBQUEST_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
