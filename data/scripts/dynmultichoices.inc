Common_EventScript_TrainerBattleMenu::
	lock
	faceplayer
	message Common_EventScript_TrainerBattleMenu_Text_0
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_TrainerBattleMenu_Text_1, Common_EventScript_TrainerBattleMenu_Text_2, Common_EventScript_TrainerBattleMenu_Text_3, Common_EventScript_TrainerBattleMenu_Text_4
	closemessage
	switch VAR_RESULT
	case 0, Common_EventScript_TrainerBattleMenu_3
	case 1, Common_EventScript_TrainerBattleMenu_4
	case 2, Common_EventScript_TrainerBattleMenu_5
	case 3, Common_EventScript_TrainerBattleMenu_6
Common_EventScript_TrainerBattleMenu_6:
	msgbox Common_EventScript_TrainerBattleMenu_Text_5, MSGBOX_DEFAULT
	release
	end

Common_EventScript_TrainerBattleMenu_1:
	release
	end

Common_EventScript_TrainerBattleMenu_3:
	goto EventScript_GymLeaderChoices
	goto Common_EventScript_TrainerBattleMenu_1

Common_EventScript_TrainerBattleMenu_4:
	goto EventScript_ChallengeTrainerChoices
	goto Common_EventScript_TrainerBattleMenu_1

Common_EventScript_TrainerBattleMenu_5:
	goto EventScript_PostgameTrainerChoices
	goto Common_EventScript_TrainerBattleMenu_1


EventScript_GymLeaderChoices::
	message EventScript_GymLeaderChoices_Text_0
	waitmessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_GymLeaderChoices_Text_1, EventScript_GymLeaderChoices_Text_2, EventScript_GymLeaderChoices_Text_3, EventScript_GymLeaderChoices_Text_4, EventScript_GymLeaderChoices_Text_5, EventScript_GymLeaderChoices_Text_6, EventScript_GymLeaderChoices_Text_7, EventScript_GymLeaderChoices_Text_8, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_GymLeaderChoices_3
	case 1, EventScript_GymLeaderChoices_4
	case 2, EventScript_GymLeaderChoices_5
	case 3, EventScript_GymLeaderChoices_6
	case 4, EventScript_GymLeaderChoices_7
	case 5, EventScript_GymLeaderChoices_8
	case 6, EventScript_GymLeaderChoices_9
	case 7, EventScript_GymLeaderChoices_10
	case 8, EventScript_GymLeaderChoices_11
EventScript_GymLeaderChoices_11:
	goto Common_EventScript_TrainerBattleMenu
EventScript_GymLeaderChoices_1:
	release
	end

EventScript_GymLeaderChoices_3:
	goto EventScript_Gym1Trainers
	goto EventScript_GymLeaderChoices_1

EventScript_GymLeaderChoices_4:
	goto EventScript_Gym2Trainers
	goto EventScript_GymLeaderChoices_1

EventScript_GymLeaderChoices_5:
	goto EventScript_Gym3Trainers
	goto EventScript_GymLeaderChoices_1

EventScript_GymLeaderChoices_6:
	goto EventScript_Gym4Trainers
	goto EventScript_GymLeaderChoices_1

EventScript_GymLeaderChoices_7:
	goto EventScript_Gym5Trainers
	goto EventScript_GymLeaderChoices_1

EventScript_GymLeaderChoices_8:
	goto EventScript_Gym6Trainers
	goto EventScript_GymLeaderChoices_1

EventScript_GymLeaderChoices_9:
	goto EventScript_Gym7Trainers
	goto EventScript_GymLeaderChoices_1

EventScript_GymLeaderChoices_10:
	goto EventScript_Gym8Trainers
	goto EventScript_GymLeaderChoices_1


EventScript_ChallengeGym1::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym1_Text_0, EventScript_ChallengeGym1_Text_1, EventScript_ChallengeGym1_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym1_2
	case 1, EventScript_ChallengeGym1_3
	case 2, EventScript_ChallengeGym1_4
	case 3, EventScript_ChallengeGym1_5
EventScript_ChallengeGym1_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym1_2:
	checktrainerflag TRAINER_PAWAN
	goto_if 1, EventScript_ChallengeGym1_7
	trainerbattle_no_intro TRAINER_PAWAN, Text_UghILost
EventScript_ChallengeGym1_6:
	goto EventScript_Gym1Trainers
	return

EventScript_ChallengeGym1_3:
	checktrainerflag TRAINER_PRAJESH
	goto_if 1, EventScript_ChallengeGym1_11
	trainerbattle_no_intro TRAINER_PRAJESH, Text_UghILost
EventScript_ChallengeGym1_10:
	goto EventScript_Gym1Trainers
	return

EventScript_ChallengeGym1_4:
	checktrainerflag TRAINER_JAKE
	goto_if 1, EventScript_ChallengeGym1_15
	trainerbattle_no_intro TRAINER_JAKE, Text_UghILost
EventScript_ChallengeGym1_14:
	goto EventScript_Gym1Trainers
	return

EventScript_ChallengeGym1_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym1_18
	goto EventScript_ChallengeGym1_6

EventScript_ChallengeGym1_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym1_20
	goto EventScript_ChallengeGym1_10

EventScript_ChallengeGym1_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym1_22
	goto EventScript_ChallengeGym1_14

EventScript_ChallengeGym1_18:
	trainerbattle_no_intro TRAINER_PAWAN, Text_UghILost
	goto EventScript_ChallengeGym1_6

EventScript_ChallengeGym1_20:
	trainerbattle_no_intro TRAINER_PRAJESH, Text_UghILost
	goto EventScript_ChallengeGym1_10

EventScript_ChallengeGym1_22:
	trainerbattle_no_intro TRAINER_JAKE, Text_UghILost
	goto EventScript_ChallengeGym1_14


EventScript_Gym1Trainers::
	checktrainerflag TRAINER_PAWAN
	goto_if 1, EventScript_Gym1Trainers_4
EventScript_Gym1Trainers_2:
	call EventScript_ChallengeGym1
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym1Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym1Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym1Trainers_3:
	checktrainerflag TRAINER_JAKE
	goto_if 1, EventScript_Gym1Trainers_1
	goto EventScript_Gym1Trainers_2

EventScript_Gym1Trainers_4:
	checktrainerflag TRAINER_PRAJESH
	goto_if 1, EventScript_Gym1Trainers_3
	goto EventScript_Gym1Trainers_2

EventScript_Gym1Trainers_8:
	call EventScript_ChallengeGym1
	return


EventScript_ChallengeGym2::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym2_Text_0, EventScript_ChallengeGym2_Text_1, EventScript_ChallengeGym2_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym2_2
	case 1, EventScript_ChallengeGym2_3
	case 2, EventScript_ChallengeGym2_4
	case 3, EventScript_ChallengeGym2_5
EventScript_ChallengeGym2_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym2_2:
	checktrainerflag TRAINER_HANSTON
	goto_if 1, EventScript_ChallengeGym2_7
	trainerbattle_no_intro TRAINER_HANSTON, Text_UghILost
EventScript_ChallengeGym2_6:
	goto EventScript_Gym2Trainers
	return

EventScript_ChallengeGym2_3:
	checktrainerflag TRAINER_PREMAL
	goto_if 1, EventScript_ChallengeGym2_11
	trainerbattle_no_intro TRAINER_PREMAL, Text_UghILost
EventScript_ChallengeGym2_10:
	goto EventScript_Gym2Trainers
	return

EventScript_ChallengeGym2_4:
	checktrainerflag TRAINER_REEVE
	goto_if 1, EventScript_ChallengeGym2_15
	trainerbattle_no_intro TRAINER_REEVE, Text_UghILost
EventScript_ChallengeGym2_14:
	goto EventScript_Gym2Trainers
	return

EventScript_ChallengeGym2_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym2_18
	goto EventScript_ChallengeGym2_6

EventScript_ChallengeGym2_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym2_20
	goto EventScript_ChallengeGym2_10

EventScript_ChallengeGym2_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym2_22
	goto EventScript_ChallengeGym2_14

EventScript_ChallengeGym2_18:
	trainerbattle_no_intro TRAINER_HANSTON, Text_UghILost
	goto EventScript_ChallengeGym2_6

EventScript_ChallengeGym2_20:
	trainerbattle_no_intro TRAINER_PREMAL, Text_UghILost
	goto EventScript_ChallengeGym2_10

EventScript_ChallengeGym2_22:
	trainerbattle_no_intro TRAINER_REEVE, Text_UghILost
	goto EventScript_ChallengeGym2_14


EventScript_Gym2Trainers::
	checktrainerflag TRAINER_HANSTON
	goto_if 1, EventScript_Gym2Trainers_4
EventScript_Gym2Trainers_2:
	call EventScript_ChallengeGym2
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym2Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym2Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym2Trainers_3:
	checktrainerflag TRAINER_REEVE
	goto_if 1, EventScript_Gym2Trainers_1
	goto EventScript_Gym2Trainers_2

EventScript_Gym2Trainers_4:
	checktrainerflag TRAINER_PREMAL
	goto_if 1, EventScript_Gym2Trainers_3
	goto EventScript_Gym2Trainers_2

EventScript_Gym2Trainers_8:
	goto EventScript_ChallengeGym2
	return


EventScript_ChallengeGym3::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym3_Text_0, EventScript_ChallengeGym3_Text_1, EventScript_ChallengeGym3_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym3_2
	case 1, EventScript_ChallengeGym3_3
	case 2, EventScript_ChallengeGym3_4
	case 3, EventScript_ChallengeGym3_5
EventScript_ChallengeGym3_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym3_2:
	checktrainerflag TRAINER_RASHEL
	goto_if 1, EventScript_ChallengeGym3_7
	trainerbattle_no_intro TRAINER_RASHEL, Text_UghILost
EventScript_ChallengeGym3_6:
	goto EventScript_Gym3Trainers
	return

EventScript_ChallengeGym3_3:
	checktrainerflag TRAINER_DON
	goto_if 1, EventScript_ChallengeGym3_11
	trainerbattle_no_intro TRAINER_DON, Text_UghILost
EventScript_ChallengeGym3_10:
	goto EventScript_Gym3Trainers
	return

EventScript_ChallengeGym3_4:
	checktrainerflag TRAINER_PREM
	goto_if 1, EventScript_ChallengeGym3_15
	trainerbattle_no_intro TRAINER_PREM, Text_UghILost
EventScript_ChallengeGym3_14:
	goto EventScript_Gym3Trainers
	return

EventScript_ChallengeGym3_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym3_18
	goto EventScript_ChallengeGym3_6

EventScript_ChallengeGym3_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym3_20
	goto EventScript_ChallengeGym3_10

EventScript_ChallengeGym3_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym3_22
	goto EventScript_ChallengeGym3_14

EventScript_ChallengeGym3_18:
	trainerbattle_no_intro TRAINER_RASHEL, Text_UghILost
	goto EventScript_ChallengeGym3_6

EventScript_ChallengeGym3_20:
	trainerbattle_no_intro TRAINER_DON, Text_UghILost
	goto EventScript_ChallengeGym3_10

EventScript_ChallengeGym3_22:
	trainerbattle_no_intro TRAINER_PREM, Text_UghILost
	goto EventScript_ChallengeGym3_14


EventScript_Gym3Trainers::
	checktrainerflag TRAINER_RASHEL
	goto_if 1, EventScript_Gym3Trainers_4
EventScript_Gym3Trainers_2:
	call EventScript_ChallengeGym3
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym3Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym3Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym3Trainers_3:
	checktrainerflag TRAINER_PREM
	goto_if 1, EventScript_Gym3Trainers_1
	goto EventScript_Gym3Trainers_2

EventScript_Gym3Trainers_4:
	checktrainerflag TRAINER_DON
	goto_if 1, EventScript_Gym3Trainers_3
	goto EventScript_Gym3Trainers_2

EventScript_Gym3Trainers_8:
	call EventScript_ChallengeGym3
	return


EventScript_ChallengeGym4::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym4_Text_0, EventScript_ChallengeGym4_Text_1, EventScript_ChallengeGym4_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym4_2
	case 1, EventScript_ChallengeGym4_3
	case 2, EventScript_ChallengeGym4_4
	case 3, EventScript_ChallengeGym4_5
EventScript_ChallengeGym4_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym4_2:
	checktrainerflag TRAINER_AKSHARA
	goto_if 1, EventScript_ChallengeGym4_7
	trainerbattle_no_intro TRAINER_AKSHARA, Text_UghILost
EventScript_ChallengeGym4_6:
	goto EventScript_Gym4Trainers
	return

EventScript_ChallengeGym4_3:
	checktrainerflag TRAINER_DARA
	goto_if 1, EventScript_ChallengeGym4_11
	trainerbattle_no_intro TRAINER_DARA, Text_UghILost
EventScript_ChallengeGym4_10:
	goto EventScript_Gym4Trainers
	return

EventScript_ChallengeGym4_4:
	checktrainerflag TRAINER_JAISON
	goto_if 1, EventScript_ChallengeGym4_15
	trainerbattle_no_intro TRAINER_JAISON, Text_UghILost
EventScript_ChallengeGym4_14:
	goto EventScript_Gym4Trainers
	return

EventScript_ChallengeGym4_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym4_18
	goto EventScript_ChallengeGym4_6

EventScript_ChallengeGym4_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym4_20
	goto EventScript_ChallengeGym4_10

EventScript_ChallengeGym4_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym4_22
	goto EventScript_ChallengeGym4_14

EventScript_ChallengeGym4_18:
	trainerbattle_no_intro TRAINER_AKSHARA, Text_UghILost
	goto EventScript_ChallengeGym4_6

EventScript_ChallengeGym4_20:
	trainerbattle_no_intro TRAINER_DARA, Text_UghILost
	goto EventScript_ChallengeGym4_10

EventScript_ChallengeGym4_22:
	trainerbattle_no_intro TRAINER_JAISON, Text_UghILost
	goto EventScript_ChallengeGym4_14


EventScript_Gym4Trainers::
	checktrainerflag TRAINER_AKSHARA
	goto_if 1, EventScript_Gym4Trainers_4
EventScript_Gym4Trainers_2:
	call EventScript_ChallengeGym4
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym4Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym4Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym4Trainers_3:
	checktrainerflag TRAINER_JAISON
	goto_if 1, EventScript_Gym4Trainers_1
	goto EventScript_Gym4Trainers_2

EventScript_Gym4Trainers_4:
	checktrainerflag TRAINER_DARA
	goto_if 1, EventScript_Gym4Trainers_3
	goto EventScript_Gym4Trainers_2

EventScript_Gym4Trainers_8:
	call EventScript_ChallengeGym4
	return


EventScript_ChallengeGym5::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym5_Text_0, EventScript_ChallengeGym5_Text_1, EventScript_ChallengeGym5_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym5_2
	case 1, EventScript_ChallengeGym5_3
	case 2, EventScript_ChallengeGym5_4
	case 3, EventScript_ChallengeGym5_5
EventScript_ChallengeGym5_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym5_2:
	checktrainerflag TRAINER_GILSTON
	goto_if 1, EventScript_ChallengeGym5_7
	trainerbattle_no_intro TRAINER_GILSTON, Text_UghILost
EventScript_ChallengeGym5_6:
	goto EventScript_Gym5Trainers
	return

EventScript_ChallengeGym5_3:
	checktrainerflag TRAINER_DELSON
	goto_if 1, EventScript_ChallengeGym5_11
	trainerbattle_no_intro TRAINER_DELSON, Text_UghILost
EventScript_ChallengeGym5_10:
	goto EventScript_Gym5Trainers
	return

EventScript_ChallengeGym5_4:
	checktrainerflag TRAINER_PRAJITH
	goto_if 1, EventScript_ChallengeGym5_15
	trainerbattle_no_intro TRAINER_PRAJITH, Text_UghILost
EventScript_ChallengeGym5_14:
	goto EventScript_Gym5Trainers
	return

EventScript_ChallengeGym5_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym5_18
	goto EventScript_ChallengeGym5_6

EventScript_ChallengeGym5_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym5_20
	goto EventScript_ChallengeGym5_10

EventScript_ChallengeGym5_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym5_22
	goto EventScript_ChallengeGym5_14

EventScript_ChallengeGym5_18:
	trainerbattle_no_intro TRAINER_GILSTON, Text_UghILost
	goto EventScript_ChallengeGym5_6

EventScript_ChallengeGym5_20:
	trainerbattle_no_intro TRAINER_DELSON, Text_UghILost
	goto EventScript_ChallengeGym5_10

EventScript_ChallengeGym5_22:
	trainerbattle_no_intro TRAINER_PRAJITH, Text_UghILost
	goto EventScript_ChallengeGym5_14


EventScript_Gym5Trainers::
	checktrainerflag TRAINER_GILSTON
	goto_if 1, EventScript_Gym5Trainers_4
EventScript_Gym5Trainers_2:
	call EventScript_ChallengeGym5
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym5Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym5Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym5Trainers_3:
	checktrainerflag TRAINER_PRAJITH
	goto_if 1, EventScript_Gym5Trainers_1
	goto EventScript_Gym5Trainers_2

EventScript_Gym5Trainers_4:
	checktrainerflag TRAINER_DELSON
	goto_if 1, EventScript_Gym5Trainers_3
	goto EventScript_Gym5Trainers_2

EventScript_Gym5Trainers_8:
	call EventScript_ChallengeGym5
	return


EventScript_ChallengeGym6::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym6_Text_0, EventScript_ChallengeGym6_Text_1, EventScript_ChallengeGym6_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym6_2
	case 1, EventScript_ChallengeGym6_3
	case 2, EventScript_ChallengeGym6_4
	case 3, EventScript_ChallengeGym6_5
EventScript_ChallengeGym6_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym6_2:
	checktrainerflag TRAINER_MONVISH
	goto_if 1, EventScript_ChallengeGym6_7
	trainerbattle_no_intro TRAINER_MONVISH, Text_UghILost
EventScript_ChallengeGym6_6:
	goto EventScript_Gym6Trainers
	return

EventScript_ChallengeGym6_3:
	checktrainerflag TRAINER_DARWIN
	goto_if 1, EventScript_ChallengeGym6_11
	trainerbattle_no_intro TRAINER_DARWIN, Text_UghILost
EventScript_ChallengeGym6_10:
	goto EventScript_Gym6Trainers
	return

EventScript_ChallengeGym6_4:
	checktrainerflag TRAINER_VARUN
	goto_if 1, EventScript_ChallengeGym6_15
	trainerbattle_no_intro TRAINER_VARUN, Text_UghILost
EventScript_ChallengeGym6_14:
	goto EventScript_Gym6Trainers
	return

EventScript_ChallengeGym6_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym6_18
	goto EventScript_ChallengeGym6_6

EventScript_ChallengeGym6_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym6_20
	goto EventScript_ChallengeGym6_10

EventScript_ChallengeGym6_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym6_22
	goto EventScript_ChallengeGym6_14

EventScript_ChallengeGym6_18:
	trainerbattle_no_intro TRAINER_MONVISH, Text_UghILost
	goto EventScript_ChallengeGym6_6

EventScript_ChallengeGym6_20:
	trainerbattle_no_intro TRAINER_DARWIN, Text_UghILost
	goto EventScript_ChallengeGym6_10

EventScript_ChallengeGym6_22:
	trainerbattle_no_intro TRAINER_VARUN, Text_UghILost
	goto EventScript_ChallengeGym6_14


EventScript_Gym6Trainers::
	checktrainerflag TRAINER_MONVISH
	goto_if 1, EventScript_Gym6Trainers_4
EventScript_Gym6Trainers_2:
	call EventScript_ChallengeGym6
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym6Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym6Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym6Trainers_3:
	checktrainerflag TRAINER_VARUN
	goto_if 1, EventScript_Gym6Trainers_1
	goto EventScript_Gym6Trainers_2

EventScript_Gym6Trainers_4:
	checktrainerflag TRAINER_DARWIN
	goto_if 1, EventScript_Gym6Trainers_3
	goto EventScript_Gym6Trainers_2

EventScript_Gym6Trainers_8:
	call EventScript_ChallengeGym6
	return


EventScript_ChallengeGym7::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym7_Text_0, EventScript_ChallengeGym7_Text_1, EventScript_ChallengeGym7_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym7_2
	case 1, EventScript_ChallengeGym7_3
	case 2, EventScript_ChallengeGym7_4
	case 3, EventScript_ChallengeGym7_5
EventScript_ChallengeGym7_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym7_2:
	checktrainerflag TRAINER_ADITHYA
	goto_if 1, EventScript_ChallengeGym7_7
	trainerbattle_no_intro TRAINER_ADITHYA, Text_UghILost
EventScript_ChallengeGym7_6:
	goto EventScript_Gym7Trainers
	return

EventScript_ChallengeGym7_3:
	checktrainerflag TRAINER_HANDAM
	goto_if 1, EventScript_ChallengeGym7_11
	trainerbattle_no_intro TRAINER_HANDAM, Text_UghILost
EventScript_ChallengeGym7_10:
	goto EventScript_Gym7Trainers
	return

EventScript_ChallengeGym7_4:
	checktrainerflag TRAINER_SNEHAL
	goto_if 1, EventScript_ChallengeGym7_15
	trainerbattle_no_intro TRAINER_SNEHAL, Text_UghILost
EventScript_ChallengeGym7_14:
	goto EventScript_Gym7Trainers
	return

EventScript_ChallengeGym7_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym7_18
	goto EventScript_ChallengeGym7_6

EventScript_ChallengeGym7_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym7_20
	goto EventScript_ChallengeGym7_10

EventScript_ChallengeGym7_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym7_22
	goto EventScript_ChallengeGym7_14

EventScript_ChallengeGym7_18:
	trainerbattle_no_intro TRAINER_ADITHYA, Text_UghILost
	goto EventScript_ChallengeGym7_6

EventScript_ChallengeGym7_20:
	trainerbattle_no_intro TRAINER_HANDAM, Text_UghILost
	goto EventScript_ChallengeGym7_10

EventScript_ChallengeGym7_22:
	trainerbattle_no_intro TRAINER_SNEHAL, Text_UghILost
	goto EventScript_ChallengeGym7_14


EventScript_Gym7Trainers::
	checktrainerflag TRAINER_ADITHYA
	goto_if 1, EventScript_Gym7Trainers_4
EventScript_Gym7Trainers_2:
	call EventScript_ChallengeGym7
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym7Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym7Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym7Trainers_3:
	checktrainerflag TRAINER_SNEHAL
	goto_if 1, EventScript_Gym7Trainers_1
	goto EventScript_Gym7Trainers_2

EventScript_Gym7Trainers_4:
	checktrainerflag TRAINER_HANDAM
	goto_if 1, EventScript_Gym7Trainers_3
	goto EventScript_Gym7Trainers_2

EventScript_Gym7Trainers_8:
	call EventScript_ChallengeGym7
	return


EventScript_ChallengeGym8::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeGym8_Text_0, EventScript_ChallengeGym8_Text_1, EventScript_ChallengeGym8_Text_2, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeGym8_2
	case 1, EventScript_ChallengeGym8_3
	case 2, EventScript_ChallengeGym8_4
	case 3, EventScript_ChallengeGym8_5
EventScript_ChallengeGym8_5:
	goto EventScript_GymLeaderChoices
	end

EventScript_ChallengeGym8_2:
	checktrainerflag TRAINER_RION
	goto_if 1, EventScript_ChallengeGym8_7
	trainerbattle_no_intro TRAINER_RION, Text_UghILost
EventScript_ChallengeGym8_6:
	goto EventScript_Gym8Trainers
	return

EventScript_ChallengeGym8_3:
	checktrainerflag TRAINER_DEON
	goto_if 1, EventScript_ChallengeGym8_11
	trainerbattle_no_intro TRAINER_DEON, Text_UghILost
EventScript_ChallengeGym8_10:
	goto EventScript_Gym8Trainers
	return

EventScript_ChallengeGym8_4:
	checktrainerflag TRAINER_RAJESH
	goto_if 1, EventScript_ChallengeGym8_15
	trainerbattle_no_intro TRAINER_RAJESH, Text_UghILost
EventScript_ChallengeGym8_14:
	goto EventScript_Gym8Trainers
	return

EventScript_ChallengeGym8_7:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym8_18
	goto EventScript_ChallengeGym8_6

EventScript_ChallengeGym8_11:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym8_20
	goto EventScript_ChallengeGym8_10

EventScript_ChallengeGym8_15:
	msgbox Text_YouHaveAlreadyDefeatedTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeGym8_22
	goto EventScript_ChallengeGym8_14

EventScript_ChallengeGym8_18:
	trainerbattle_no_intro TRAINER_RION, Text_UghILost
	goto EventScript_ChallengeGym8_6

EventScript_ChallengeGym8_20:
	trainerbattle_no_intro TRAINER_DEON, Text_UghILost
	goto EventScript_ChallengeGym8_10

EventScript_ChallengeGym8_22:
	trainerbattle_no_intro TRAINER_RAJESH, Text_UghILost
	goto EventScript_ChallengeGym8_14


EventScript_Gym8Trainers::
	checktrainerflag TRAINER_RION
	goto_if 1, EventScript_Gym8Trainers_4
EventScript_Gym8Trainers_2:
	call EventScript_ChallengeGym8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym8Trainers_1:
	msgbox Text_AllTrainersDefeated, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Gym8Trainers_8
	goto EventScript_GymLeaderChoices
	return

EventScript_Gym8Trainers_3:
	checktrainerflag TRAINER_RAJESH
	goto_if 1, EventScript_Gym8Trainers_1
	goto EventScript_Gym8Trainers_2

EventScript_Gym8Trainers_4:
	checktrainerflag TRAINER_DEON
	goto_if 1, EventScript_Gym8Trainers_3
	goto EventScript_Gym8Trainers_2

EventScript_Gym8Trainers_8:
	call EventScript_ChallengeGym8
	return


EventScript_ChallengeTrainers::
	message EventScript_ChallengeTrainers_Text_0
	waitmessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengeTrainers_Text_1, EventScript_ChallengeTrainers_Text_2, EventScript_ChallengeTrainers_Text_3, EventScript_ChallengeTrainers_Text_4, EventScript_ChallengeTrainers_Text_5, EventScript_ChallengeTrainers_Text_6, EventScript_ChallengeTrainers_Text_7, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengeTrainers_2
	case 1, EventScript_ChallengeTrainers_3
	case 2, EventScript_ChallengeTrainers_4
	case 3, EventScript_ChallengeTrainers_5
	case 4, EventScript_ChallengeTrainers_6
	case 5, EventScript_ChallengeTrainers_7
	case 6, EventScript_ChallengeTrainers_8
	case 7, EventScript_ChallengeTrainers_9
EventScript_ChallengeTrainers_9:
	goto Common_EventScript_TrainerBattleMenu
	return

EventScript_ChallengeTrainers_2:
	checktrainerflag TRAINER_MANVITHA
	goto_if 1, EventScript_ChallengeTrainers_10
	trainerbattle_no_intro TRAINER_MANVITHA, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_3:
	checktrainerflag TRAINER_KEVIN
	goto_if 1, EventScript_ChallengeTrainers_13
	trainerbattle_no_intro TRAINER_KEVIN, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_4:
	checktrainerflag TRAINER_LOHITH
	goto_if 1, EventScript_ChallengeTrainers_16
	trainerbattle_no_intro TRAINER_LOHITH, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_5:
	checktrainerflag TRAINER_ANMOL
	goto_if 1, EventScript_ChallengeTrainers_19
	trainerbattle_no_intro TRAINER_ANMOL, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_6:
	checktrainerflag TRAINER_ARSHAD
	goto_if 1, EventScript_ChallengeTrainers_22
	trainerbattle_no_intro TRAINER_ARSHAD, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_7:
	checktrainerflag TRAINER_MELWIN
	goto_if 1, EventScript_ChallengeTrainers_25
	trainerbattle_no_intro TRAINER_MELWIN, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_8:
	checktrainerflag TRAINER_YASHAS
	goto_if 1, EventScript_ChallengeTrainers_28
	trainerbattle_no_intro TRAINER_YASHAS, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_10:
	msgbox Text_YouHaveAlreadyDefeatedChallenger, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainers_31
	return

EventScript_ChallengeTrainers_13:
	msgbox Text_YouHaveAlreadyDefeatedChallenger, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainers_33
	return

EventScript_ChallengeTrainers_16:
	msgbox Text_YouHaveAlreadyDefeatedChallenger, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainers_35
	return

EventScript_ChallengeTrainers_19:
	msgbox Text_YouHaveAlreadyDefeatedChallenger, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainers_37
	return

EventScript_ChallengeTrainers_22:
	msgbox Text_YouHaveAlreadyDefeatedChallenger, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainers_39
	return

EventScript_ChallengeTrainers_25:
	msgbox Text_YouHaveAlreadyDefeatedChallenger, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainers_41
	return

EventScript_ChallengeTrainers_28:
	msgbox EventScript_ChallengeTrainers_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainers_43
	return

EventScript_ChallengeTrainers_31:
	trainerbattle_no_intro TRAINER_MANVITHA, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_33:
	trainerbattle_no_intro TRAINER_KEVIN, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_35:
	trainerbattle_no_intro TRAINER_LOHITH, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_37:
	trainerbattle_no_intro TRAINER_ANMOL, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_39:
	trainerbattle_no_intro TRAINER_ARSHAD, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_41:
	trainerbattle_no_intro TRAINER_MELWIN, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return

EventScript_ChallengeTrainers_43:
	trainerbattle_no_intro TRAINER_YASHAS, Text_UghILost
	goto EventScript_ChallengeTrainerChoices
	return


EventScript_ChallengeTrainerChoices::
	checktrainerflag TRAINER_MANVITHA
	goto_if 1, EventScript_ChallengeTrainerChoices_4
EventScript_ChallengeTrainerChoices_2:
	call EventScript_ChallengeTrainers
	return

EventScript_ChallengeTrainerChoices_1:
	msgbox EventScript_ChallengeTrainerChoices_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengeTrainerChoices_16
	goto Common_EventScript_TrainerBattleMenu
	return

EventScript_ChallengeTrainerChoices_3:
	checktrainerflag TRAINER_LOHITH
	goto_if 1, EventScript_ChallengeTrainerChoices_8
	goto EventScript_ChallengeTrainerChoices_2

EventScript_ChallengeTrainerChoices_4:
	checktrainerflag TRAINER_KEVIN
	goto_if 1, EventScript_ChallengeTrainerChoices_3
	goto EventScript_ChallengeTrainerChoices_2

EventScript_ChallengeTrainerChoices_7:
	checktrainerflag TRAINER_ARSHAD
	goto_if 1, EventScript_ChallengeTrainerChoices_12
	goto EventScript_ChallengeTrainerChoices_2

EventScript_ChallengeTrainerChoices_8:
	checktrainerflag TRAINER_ANMOL
	goto_if 1, EventScript_ChallengeTrainerChoices_7
	goto EventScript_ChallengeTrainerChoices_2

EventScript_ChallengeTrainerChoices_11:
	checktrainerflag TRAINER_YASHAS
	goto_if 1, EventScript_ChallengeTrainerChoices_1
	goto EventScript_ChallengeTrainerChoices_2

EventScript_ChallengeTrainerChoices_12:
	checktrainerflag TRAINER_MELWIN
	goto_if 1, EventScript_ChallengeTrainerChoices_11
	goto EventScript_ChallengeTrainerChoices_2

EventScript_ChallengeTrainerChoices_16:
	call EventScript_ChallengeTrainers
	return


EventScript_ChallengePostgameTrainers::
	message Text_WhichTrainerToChallenge
	waitmessage
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_ChallengePostgameTrainers_Text_0, EventScript_ChallengePostgameTrainers_Text_1, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_ChallengePostgameTrainers_2
	case 1, EventScript_ChallengePostgameTrainers_3
	case 2, EventScript_ChallengePostgameTrainers_4
EventScript_ChallengePostgameTrainers_4:
	goto Common_EventScript_TrainerBattleMenu
	return

EventScript_ChallengePostgameTrainers_2:
	checktrainerflag TRAINER_BENNY
	goto_if 1, EventScript_ChallengePostgameTrainers_5
	trainerbattle_no_intro TRAINER_BENNY, Text_UghILost
	goto EventScript_PostgameTrainerChoices
	return

EventScript_ChallengePostgameTrainers_3:
	checktrainerflag TRAINER_AARON
	goto_if 1, EventScript_ChallengePostgameTrainers_8
	trainerbattle_no_intro TRAINER_AARON, Text_UghILost
	goto EventScript_PostgameTrainerChoices
	return

EventScript_ChallengePostgameTrainers_5:
	msgbox Text_YouHaveAlreadyDefeatedPostgameTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengePostgameTrainers_11
	return

EventScript_ChallengePostgameTrainers_8:
	msgbox Text_YouHaveAlreadyDefeatedPostgameTrainer, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ChallengePostgameTrainers_13
	return

EventScript_ChallengePostgameTrainers_11:
	trainerbattle_no_intro TRAINER_BENNY, Text_UghILost
	goto EventScript_PostgameTrainerChoices
	return

EventScript_ChallengePostgameTrainers_13:
	trainerbattle_no_intro TRAINER_AARON, Text_UghILost
	goto EventScript_PostgameTrainerChoices
	return


EventScript_PostgameTrainerChoices::
	checktrainerflag TRAINER_BENNY
	goto_if 1, EventScript_PostgameTrainerChoices_3
EventScript_PostgameTrainerChoices_2:
	call EventScript_ChallengePostgameTrainers
	return

EventScript_PostgameTrainerChoices_1:
	msgbox EventScript_PostgameTrainerChoices_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_PostgameTrainerChoices_6
	goto Common_EventScript_TrainerBattleMenu
	return

EventScript_PostgameTrainerChoices_3:
	checktrainerflag TRAINER_AARON
	goto_if 1, EventScript_PostgameTrainerChoices_1
	goto EventScript_PostgameTrainerChoices_2

EventScript_PostgameTrainerChoices_6:
	call EventScript_ChallengePostgameTrainers
	return


Common_EventScript_TrainerBattleMenu_Text_0:
	.string "Select a category of Trainers.$"

Common_EventScript_TrainerBattleMenu_Text_1:
	.string "Gym Leaders$"

Common_EventScript_TrainerBattleMenu_Text_2:
	.string "Challenge Trainers$"

Common_EventScript_TrainerBattleMenu_Text_3:
	.string "Postgame Trainers$"

Common_EventScript_TrainerBattleMenu_Text_4:
	.string "Nevermind$"

Common_EventScript_TrainerBattleMenu_Text_5:
	.string "Come back when you're ready!$"

EventScript_GymLeaderChoices_Text_0:
	.string "Select a Gym.$"

EventScript_GymLeaderChoices_Text_1:
	.string "Jake's Gym 1$"

EventScript_GymLeaderChoices_Text_2:
	.string "Reeve's Gym 2$"

EventScript_GymLeaderChoices_Text_3:
	.string "Prem's Gym 3$"

EventScript_GymLeaderChoices_Text_4:
	.string "Jaison's Gym 4$"

EventScript_GymLeaderChoices_Text_5:
	.string "Prajith's Gym 5$"

EventScript_GymLeaderChoices_Text_6:
	.string "Varun's Gym 6$"

EventScript_GymLeaderChoices_Text_7:
	.string "Snehal's Gym 7$"

EventScript_GymLeaderChoices_Text_8:
	.string "Rajesh's Gym 8$"

EventScript_GymLeaderChoices_Text_9:
	.string "Back$"

EventScript_ChallengeGym1_Text_0:
	.string "Trainer Pawan$"

EventScript_ChallengeGym1_Text_1:
	.string "Trainer Prajesh$"

EventScript_ChallengeGym1_Text_2:
	.string "Leader Jake$"

EventScript_ChallengeGym2_Text_0:
	.string "Trainer Hanston$"

EventScript_ChallengeGym2_Text_1:
	.string "Trainer Premal$"

EventScript_ChallengeGym2_Text_2:
	.string "Leader Reeve$"

EventScript_ChallengeGym3_Text_0:
	.string "Trainer Rashel$"

EventScript_ChallengeGym3_Text_1:
	.string "Trainer Don$"

EventScript_ChallengeGym3_Text_2:
	.string "Leader Prem$"

EventScript_ChallengeGym4_Text_0:
	.string "Trainer Akshara$"

EventScript_ChallengeGym4_Text_1:
	.string "Trainer Dara$"

EventScript_ChallengeGym4_Text_2:
	.string "Leader Jaison$"

EventScript_ChallengeGym5_Text_0:
	.string "Trainer Gilston$"

EventScript_ChallengeGym5_Text_1:
	.string "Trainer Delson$"

EventScript_ChallengeGym5_Text_2:
	.string "Leader Prajith$"

EventScript_ChallengeGym6_Text_0:
	.string "Trainer Monvish$"

EventScript_ChallengeGym6_Text_1:
	.string "Trainer Darwin$"

EventScript_ChallengeGym6_Text_2:
	.string "Leader Varun$"

EventScript_ChallengeGym7_Text_0:
	.string "Trainer Adithya$"

EventScript_ChallengeGym7_Text_1:
	.string "Trainer Handam$"

EventScript_ChallengeGym7_Text_2:
	.string "Leader Snehal$"

EventScript_ChallengeGym8_Text_0:
	.string "Trainer Rion$"

EventScript_ChallengeGym8_Text_1:
	.string "Trainer Deon$"

EventScript_ChallengeGym8_Text_2:
	.string "Leader Rajesh$"

EventScript_ChallengeTrainers_Text_0:
	.string "Which Challenger do you want to\nchallenge?$"

EventScript_ChallengeTrainers_Text_1:
	.string "Challenger Manvitha$"

EventScript_ChallengeTrainers_Text_2:
	.string "Challenger Kevin$"

EventScript_ChallengeTrainers_Text_3:
	.string "Challenger Lohith$"

EventScript_ChallengeTrainers_Text_4:
	.string "Challenger Anmol$"

EventScript_ChallengeTrainers_Text_5:
	.string "Challenger Arshad$"

EventScript_ChallengeTrainers_Text_6:
	.string "Challenger Melwin$"

EventScript_ChallengeTrainers_Text_7:
	.string "Champion Bardar$"

EventScript_ChallengeTrainers_Text_8:
	.string "You have already defeated the\n"
	.string "Champion!\p"
	.string "Would you like to battle again?$"

EventScript_ChallengeTrainerChoices_Text_0:
	.string "You have already defeated all\n"
	.string "Challengers here!\p"
	.string "Would you like to battle again?$"

EventScript_ChallengePostgameTrainers_Text_0:
	.string "Professor Benny$"

EventScript_ChallengePostgameTrainers_Text_1:
	.string "Master Aaron$"

EventScript_PostgameTrainerChoices_Text_0:
	.string "You have already defeated all\n"
	.string "Postgame Trainers here!\p"
	.string "Would you like to battle again?$"

Text_UghILost::
	.string "Ugh, I lost!$"

Text_WhichTrainerToChallenge::
	.string "Which Trainer do you want to\n"
	.string "challenge?$"

Text_AllTrainersDefeated::
	.string "You have already defeated all\n"
	.string "Trainers here!\p"
	.string "Would you like to battle again?$"

Text_YouHaveAlreadyDefeatedTrainer::
	.string "You have already defeated this\n"
	.string "Trainer!\p"
	.string "Would you like to battle again?$"

Text_YouHaveAlreadyDefeatedChallenger::
	.string "You have already defeated this\n"
	.string "Challenger!\p"
	.string "Would you like to battle again?$"

Text_YouHaveAlreadyDefeatedPostgameTrainer::
	.string "You have already defeated this\n"
	.string "Postgame Trainer!\p"
	.string "Would you like to battle again?$"
