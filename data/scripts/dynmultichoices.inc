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


Common_EventScript_ChoosePkmnMenu::
	lock
	faceplayer
	compare VAR_GOT_PARTY_PKMN, 2
	goto_if_lt Common_EventScript_ChoosePkmnMenu_2
Common_EventScript_ChoosePkmnMenu_1:
	goto Common_EventScript_ChoosePkmnMulti
	release
	end

Common_EventScript_ChoosePkmnMenu_2:
	setvar VAR_GOT_PARTY_PKMN, 1
	goto Common_EventScript_ChoosePkmnMenu_1


Common_EventScript_ChoosePkmnMulti::
	compare VAR_GOT_PARTY_PKMN, 6
	goto_if_eq Common_EventScript_ChoosePkmnMulti_2
Common_EventScript_ChoosePkmnMulti_1:
	goto_if_set FLAG_GOT_PARTY_PKMN, Common_EventScript_ChoosePkmnMulti_5
	message Common_EventScript_ChoosePkmnMulti_Text_1
	waitmessage
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_ChoosePkmnMulti_Text_2, Common_EventScript_ChoosePkmnMulti_Text_3, Common_EventScript_ChoosePkmnMulti_Text_4, Common_EventScript_ChoosePkmnMulti_Text_5, Common_EventScript_ChoosePkmnMulti_Text_6, Common_EventScript_TrainerBattleMenu_Text_4
	closemessage
	switch VAR_RESULT
	case 0, Common_EventScript_ChoosePkmnMulti_9
	case 1, Common_EventScript_ChoosePkmnMulti_10
	case 2, Common_EventScript_ChoosePkmnMulti_11
	case 3, Common_EventScript_ChoosePkmnMulti_12
	case 4, Common_EventScript_ChoosePkmnMulti_13
	case 5, Common_EventScript_ChoosePkmnMulti_14
Common_EventScript_ChoosePkmnMulti_14:
	buffernumberstring STR_VAR_2, VAR_GOT_PARTY_PKMN
	msgbox Common_EventScript_ChoosePkmnMulti_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_ChoosePkmnMulti_18
	goto Common_EventScript_ChoosePkmnMulti
Common_EventScript_ChoosePkmnMulti_4:
	release
	end

Common_EventScript_ChoosePkmnMulti_2:
	setflag FLAG_GOT_PARTY_PKMN
	goto Common_EventScript_ChoosePkmnMulti_1

Common_EventScript_ChoosePkmnMulti_5:
	msgbox Common_EventScript_ChoosePkmnMulti_Text_0, MSGBOX_NPC
	goto Common_EventScript_ChoosePkmnMulti_4

Common_EventScript_ChoosePkmnMulti_9:
	goto EventScript_Group1Choices
	goto Common_EventScript_ChoosePkmnMulti_4

Common_EventScript_ChoosePkmnMulti_10:
	goto EventScript_Group2Choices
	goto Common_EventScript_ChoosePkmnMulti_4

Common_EventScript_ChoosePkmnMulti_11:
	goto EventScript_Group3Choices
	goto Common_EventScript_ChoosePkmnMulti_4

Common_EventScript_ChoosePkmnMulti_12:
	goto EventScript_Group4Choices
	goto Common_EventScript_ChoosePkmnMulti_4

Common_EventScript_ChoosePkmnMulti_13:
	goto EventScript_Group5Choices
	goto Common_EventScript_ChoosePkmnMulti_4

Common_EventScript_ChoosePkmnMulti_15:
	setflag FLAG_GOT_PARTY_PKMN
	msgbox Common_EventScript_ChoosePkmnMulti_Text_8, MSGBOX_DEFAULT
	release
	end

Common_EventScript_ChoosePkmnMulti_16:
	goto Common_EventScript_ChoosePkmnMulti
	goto Common_EventScript_ChoosePkmnMulti_4

	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_ChoosePkmnMulti_15
	goto Common_EventScript_ChoosePkmnMulti_16

Common_EventScript_ChoosePkmnMulti_18:
	setflag FLAG_GOT_PARTY_PKMN
	msgbox Common_EventScript_ChoosePkmnMulti_Text_8, MSGBOX_DEFAULT
	release
	end


EventScript_Givemonset::
	playfanfare MUS_OBTAIN_ITEM
	givemonset VAR_TEMP_TRANSFERRED_SPECIES
	addvar VAR_GOT_PARTY_PKMN, 1
	buffernumberstring STR_VAR_2, VAR_GOT_PARTY_PKMN
	message EventScript_Givemonset_Text_0
	showmonpic VAR_TEMP_TRANSFERRED_SPECIES, FALSE, 10, 3
	waitmessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Givemonset_2
EventScript_Givemonset_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Common_EventScript_ChoosePkmnMulti
	end

EventScript_Givemonset_2:
	goto Common_EventScript_ChoosePkmnMulti
	goto EventScript_Givemonset_1


EventScript_Group1Choices::
	message Text_SelectPkmn
	waitmessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Group1Choices_Text_0, EventScript_Group1Choices_Text_1, EventScript_Group1Choices_Text_2, EventScript_Group1Choices_Text_3, EventScript_Group1Choices_Text_4, EventScript_Group1Choices_Text_5, EventScript_Group1Choices_Text_6, EventScript_Group1Choices_Text_7, EventScript_Group1Choices_Text_8, EventScript_Group1Choices_Text_9, EventScript_Group1Choices_Text_10, EventScript_Group1Choices_Text_11, EventScript_Group1Choices_Text_12, EventScript_Group1Choices_Text_13, EventScript_Group1Choices_Text_14, EventScript_Group1Choices_Text_15, EventScript_Group1Choices_Text_16, EventScript_Group1Choices_Text_17, EventScript_Group1Choices_Text_18, EventScript_Group1Choices_Text_19, EventScript_Group1Choices_Text_20, EventScript_Group1Choices_Text_21, EventScript_Group1Choices_Text_22, EventScript_Group1Choices_Text_23, EventScript_Group1Choices_Text_24, EventScript_Group1Choices_Text_25, EventScript_Group1Choices_Text_26, EventScript_Group1Choices_Text_27, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_Group1Choices_2
	case 1, EventScript_Group1Choices_3
	case 2, EventScript_Group1Choices_4
	case 3, EventScript_Group1Choices_5
	case 4, EventScript_Group1Choices_6
	case 5, EventScript_Group1Choices_7
	case 6, EventScript_Group1Choices_8
	case 7, EventScript_Group1Choices_9
	case 8, EventScript_Group1Choices_10
	case 9, EventScript_Group1Choices_11
	case 10, EventScript_Group1Choices_12
	case 11, EventScript_Group1Choices_13
	case 12, EventScript_Group1Choices_14
	case 13, EventScript_Group1Choices_15
	case 14, EventScript_Group1Choices_16
	case 15, EventScript_Group1Choices_17
	case 16, EventScript_Group1Choices_18
	case 17, EventScript_Group1Choices_19
	case 18, EventScript_Group1Choices_20
	case 19, EventScript_Group1Choices_21
	case 20, EventScript_Group1Choices_22
	case 21, EventScript_Group1Choices_23
	case 22, EventScript_Group1Choices_24
	case 23, EventScript_Group1Choices_25
	case 24, EventScript_Group1Choices_26
	case 25, EventScript_Group1Choices_27
	case 26, EventScript_Group1Choices_28
	case 27, EventScript_Group1Choices_29
	case 28, EventScript_Group1Choices_30
EventScript_Group1Choices_30:
	goto Common_EventScript_ChoosePkmnMulti
	return

EventScript_Group1Choices_2:
	bufferspeciesname STR_VAR_1, SPECIES_ABSOL
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_31
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_3:
	bufferspeciesname STR_VAR_1, SPECIES_AEGISLASH
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_34
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_4:
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_37
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_5:
	bufferspeciesname STR_VAR_1, SPECIES_ALTARIA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_40
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_6:
	bufferspeciesname STR_VAR_1, SPECIES_AMBIPOM
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_43
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_7:
	bufferspeciesname STR_VAR_1, SPECIES_ANNIHILAPE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_46
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_8:
	bufferspeciesname STR_VAR_1, SPECIES_ARAQUANID
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_49
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_9:
	bufferspeciesname STR_VAR_1, SPECIES_ARCHALUDON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_52
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_10:
	bufferspeciesname STR_VAR_1, SPECIES_ARMAROUGE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_55
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_11:
	bufferspeciesname STR_VAR_1, SPECIES_AZUMARILL
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_58
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_12:
	bufferspeciesname STR_VAR_1, SPECIES_BARRASKEWDA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_61
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_13:
	bufferspeciesname STR_VAR_1, SPECIES_BASCULEGION
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_64
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_14:
	bufferspeciesname STR_VAR_1, SPECIES_BASCULEGION_F
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_67
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_15:
	bufferspeciesname STR_VAR_1, SPECIES_BAXCALIBUR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_70
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_16:
	bufferspeciesname STR_VAR_1, SPECIES_BELLIBOLT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_73
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_17:
	bufferspeciesname STR_VAR_1, SPECIES_BRONZONG
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_76
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_18:
	bufferspeciesname STR_VAR_1, SPECIES_CAMERUPT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_79
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_19:
	bufferspeciesname STR_VAR_1, SPECIES_CERULEDGE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_82
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_20:
	bufferspeciesname STR_VAR_1, SPECIES_CLAWITZER
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_85
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_21:
	bufferspeciesname STR_VAR_1, SPECIES_CORVIKNIGHT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_88
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_22:
	bufferspeciesname STR_VAR_1, SPECIES_CRAWDAUNT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_91
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_23:
	bufferspeciesname STR_VAR_1, SPECIES_DONDOZO
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_94
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_24:
	bufferspeciesname STR_VAR_1, SPECIES_DRAGAPULT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_97
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_25:
	bufferspeciesname STR_VAR_1, SPECIES_DRAGONITE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_100
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_26:
	bufferspeciesname STR_VAR_1, SPECIES_DUDUNSPARCE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_103
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_27:
	bufferspeciesname STR_VAR_1, SPECIES_ELECTIVIRE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_106
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_28:
	bufferspeciesname STR_VAR_1, SPECIES_ESPEON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_109
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_29:
	bufferspeciesname STR_VAR_1, SPECIES_EXCADRILL
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group1Choices_112
	goto EventScript_Group1Choices
	return

EventScript_Group1Choices_31:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ABSOL
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_34:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AEGISLASH
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_37:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_40:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ALTARIA
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_43:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AMBIPOM
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_46:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANNIHILAPE
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_49:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARAQUANID
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_52:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCHALUDON
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_55:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARMAROUGE
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_58:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AZUMARILL
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_61:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BARRASKEWDA
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_64:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BASCULEGION
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_67:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BASCULEGION_F
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_70:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BAXCALIBUR
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_73:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELLIBOLT
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_76:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BRONZONG
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_79:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CAMERUPT
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_82:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CERULEDGE
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_85:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CLAWITZER
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_88:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CORVIKNIGHT
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_91:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CRAWDAUNT
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_94:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DONDOZO
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_97:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRAGAPULT
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_100:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRAGONITE
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_103:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DUDUNSPARCE
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_106:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ELECTIVIRE
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_109:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ESPEON
	goto EventScript_Givemonset
	return

EventScript_Group1Choices_112:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EXCADRILL
	goto EventScript_Givemonset
	return


EventScript_Group2Choices::
	message Text_SelectPkmn
	waitmessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Group2Choices_Text_0, EventScript_Group2Choices_Text_1, EventScript_Group2Choices_Text_2, EventScript_Group2Choices_Text_3, EventScript_Group2Choices_Text_4, EventScript_Group2Choices_Text_5, EventScript_Group2Choices_Text_6, EventScript_Group2Choices_Text_7, EventScript_Group2Choices_Text_8, EventScript_Group2Choices_Text_9, EventScript_Group2Choices_Text_10, EventScript_Group2Choices_Text_11, EventScript_Group2Choices_Text_12, EventScript_Group2Choices_Text_13, EventScript_Group2Choices_Text_14, EventScript_Group2Choices_Text_15, EventScript_Group2Choices_Text_16, EventScript_Group2Choices_Text_17, EventScript_Group2Choices_Text_18, EventScript_Group2Choices_Text_19, EventScript_Group2Choices_Text_20, EventScript_Group2Choices_Text_21, EventScript_Group2Choices_Text_22, EventScript_Group2Choices_Text_23, EventScript_Group2Choices_Text_24, EventScript_Group2Choices_Text_25, EventScript_Group2Choices_Text_26, EventScript_Group2Choices_Text_27, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_Group2Choices_2
	case 1, EventScript_Group2Choices_3
	case 2, EventScript_Group2Choices_4
	case 3, EventScript_Group2Choices_5
	case 4, EventScript_Group2Choices_6
	case 5, EventScript_Group2Choices_7
	case 6, EventScript_Group2Choices_8
	case 7, EventScript_Group2Choices_9
	case 8, EventScript_Group2Choices_10
	case 9, EventScript_Group2Choices_11
	case 10, EventScript_Group2Choices_12
	case 11, EventScript_Group2Choices_13
	case 12, EventScript_Group2Choices_14
	case 13, EventScript_Group2Choices_15
	case 14, EventScript_Group2Choices_16
	case 15, EventScript_Group2Choices_17
	case 16, EventScript_Group2Choices_18
	case 17, EventScript_Group2Choices_19
	case 18, EventScript_Group2Choices_20
	case 19, EventScript_Group2Choices_21
	case 20, EventScript_Group2Choices_22
	case 21, EventScript_Group2Choices_23
	case 22, EventScript_Group2Choices_24
	case 23, EventScript_Group2Choices_25
	case 24, EventScript_Group2Choices_26
	case 25, EventScript_Group2Choices_27
	case 26, EventScript_Group2Choices_28
	case 27, EventScript_Group2Choices_29
	case 28, EventScript_Group2Choices_30
EventScript_Group2Choices_30:
	goto Common_EventScript_ChoosePkmnMulti
	return

EventScript_Group2Choices_2:
	bufferspeciesname STR_VAR_1, SPECIES_FARIGIRAF
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_31
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_3:
	bufferspeciesname STR_VAR_1, SPECIES_FERROTHORN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_34
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_4:
	bufferspeciesname STR_VAR_1, SPECIES_FLAREON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_37
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_5:
	bufferspeciesname STR_VAR_1, SPECIES_FROSLASS
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_40
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_6:
	bufferspeciesname STR_VAR_1, SPECIES_GARCHOMP
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_43
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_7:
	bufferspeciesname STR_VAR_1, SPECIES_GENGAR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_46
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_8:
	bufferspeciesname STR_VAR_1, SPECIES_GHOLDENGO
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_49
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_9:
	bufferspeciesname STR_VAR_1, SPECIES_GLACEON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_52
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_10:
	bufferspeciesname STR_VAR_1, SPECIES_GLALIE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_55
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_11:
	bufferspeciesname STR_VAR_1, SPECIES_GLISCOR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_58
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_12:
	bufferspeciesname STR_VAR_1, SPECIES_GOGOAT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_61
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_13:
	bufferspeciesname STR_VAR_1, SPECIES_GOLURK
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_64
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_14:
	bufferspeciesname STR_VAR_1, SPECIES_GOODRA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_67
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_15:
	bufferspeciesname STR_VAR_1, SPECIES_GOODRA_HISUI
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_70
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_16:
	bufferspeciesname STR_VAR_1, SPECIES_GRIMMSNARL
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_73
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_17:
	bufferspeciesname STR_VAR_1, SPECIES_GYARADOS
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_76
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_18:
	bufferspeciesname STR_VAR_1, SPECIES_HATTERENE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_79
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_19:
	bufferspeciesname STR_VAR_1, SPECIES_HAWLUCHA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_82
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_20:
	bufferspeciesname STR_VAR_1, SPECIES_HITMONCHAN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_85
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_21:
	bufferspeciesname STR_VAR_1, SPECIES_HITMONLEE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_88
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_22:
	bufferspeciesname STR_VAR_1, SPECIES_HITMONTOP
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_91
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_23:
	bufferspeciesname STR_VAR_1, SPECIES_HOUNDSTONE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_94
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_24:
	bufferspeciesname STR_VAR_1, SPECIES_HYDREIGON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_97
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_25:
	bufferspeciesname STR_VAR_1, SPECIES_ILLUMISE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_100
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_26:
	bufferspeciesname STR_VAR_1, SPECIES_JOLTEON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_103
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_27:
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_106
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_28:
	bufferspeciesname STR_VAR_1, SPECIES_KINGAMBIT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_109
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_29:
	bufferspeciesname STR_VAR_1, SPECIES_KINGDRA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group2Choices_112
	goto EventScript_Group2Choices
	return

EventScript_Group2Choices_31:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FARIGIRAF
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_34:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FERROTHORN
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_37:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FLAREON
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_40:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_FROSLASS
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_43:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GARCHOMP
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_46:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GENGAR
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_49:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GHOLDENGO
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_52:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GLACEON
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_55:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GLALIE
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_58:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GLISCOR
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_61:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GOGOAT
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_64:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GOLURK
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_67:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GOODRA
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_70:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GOODRA_HISUI
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_73:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GRIMMSNARL
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_76:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_GYARADOS
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_79:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HATTERENE
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_82:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HAWLUCHA
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_85:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HITMONCHAN
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_88:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HITMONLEE
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_91:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HITMONTOP
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_94:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HOUNDSTONE
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_97:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_HYDREIGON
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_100:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ILLUMISE
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_103:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_JOLTEON
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_106:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_JYNX
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_109:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KINGAMBIT
	goto EventScript_Givemonset
	return

EventScript_Group2Choices_112:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KINGDRA
	goto EventScript_Givemonset
	return


EventScript_Group3Choices::
	message Text_SelectPkmn
	waitmessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Group3Choices_Text_0, EventScript_Group3Choices_Text_1, EventScript_Group3Choices_Text_2, EventScript_Group3Choices_Text_3, EventScript_Group3Choices_Text_4, EventScript_Group3Choices_Text_5, EventScript_Group3Choices_Text_6, EventScript_Group3Choices_Text_7, EventScript_Group3Choices_Text_8, EventScript_Group3Choices_Text_9, EventScript_Group3Choices_Text_10, EventScript_Group3Choices_Text_11, EventScript_Group3Choices_Text_12, EventScript_Group3Choices_Text_13, EventScript_Group3Choices_Text_14, EventScript_Group3Choices_Text_15, EventScript_Group3Choices_Text_16, EventScript_Group3Choices_Text_17, EventScript_Group3Choices_Text_18, EventScript_Group3Choices_Text_19, EventScript_Group3Choices_Text_20, EventScript_Group3Choices_Text_21, EventScript_Group3Choices_Text_22, EventScript_Group3Choices_Text_23, EventScript_Group3Choices_Text_24, EventScript_Group3Choices_Text_25, EventScript_Group3Choices_Text_26, EventScript_Group3Choices_Text_27, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_Group3Choices_2
	case 1, EventScript_Group3Choices_3
	case 2, EventScript_Group3Choices_4
	case 3, EventScript_Group3Choices_5
	case 4, EventScript_Group3Choices_6
	case 5, EventScript_Group3Choices_7
	case 6, EventScript_Group3Choices_8
	case 7, EventScript_Group3Choices_9
	case 8, EventScript_Group3Choices_10
	case 9, EventScript_Group3Choices_11
	case 10, EventScript_Group3Choices_12
	case 11, EventScript_Group3Choices_13
	case 12, EventScript_Group3Choices_14
	case 13, EventScript_Group3Choices_15
	case 14, EventScript_Group3Choices_16
	case 15, EventScript_Group3Choices_17
	case 16, EventScript_Group3Choices_18
	case 17, EventScript_Group3Choices_19
	case 18, EventScript_Group3Choices_20
	case 19, EventScript_Group3Choices_21
	case 20, EventScript_Group3Choices_22
	case 21, EventScript_Group3Choices_23
	case 22, EventScript_Group3Choices_24
	case 23, EventScript_Group3Choices_25
	case 24, EventScript_Group3Choices_26
	case 25, EventScript_Group3Choices_27
	case 26, EventScript_Group3Choices_28
	case 27, EventScript_Group3Choices_29
	case 28, EventScript_Group3Choices_30
EventScript_Group3Choices_30:
	goto Common_EventScript_ChoosePkmnMulti
	return

EventScript_Group3Choices_2:
	bufferspeciesname STR_VAR_1, SPECIES_KLEAVOR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_31
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_3:
	bufferspeciesname STR_VAR_1, SPECIES_KOMMO_O
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_34
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_4:
	bufferspeciesname STR_VAR_1, SPECIES_KROOKODILE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_37
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_5:
	bufferspeciesname STR_VAR_1, SPECIES_LANTURN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_40
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_6:
	bufferspeciesname STR_VAR_1, SPECIES_LEAFEON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_43
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_7:
	bufferspeciesname STR_VAR_1, SPECIES_LILLIGANT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_46
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_8:
	bufferspeciesname STR_VAR_1, SPECIES_LILLIGANT_HISUI
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_49
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_9:
	bufferspeciesname STR_VAR_1, SPECIES_LINOONE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_52
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_10:
	bufferspeciesname STR_VAR_1, SPECIES_LOKIX
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_55
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_11:
	bufferspeciesname STR_VAR_1, SPECIES_LUCARIO
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_58
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_12:
	bufferspeciesname STR_VAR_1, SPECIES_LUDICOLO
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_61
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_13:
	bufferspeciesname STR_VAR_1, SPECIES_LUXRAY
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_64
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_14:
	bufferspeciesname STR_VAR_1, SPECIES_LYCANROC
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_67
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_15:
	bufferspeciesname STR_VAR_1, SPECIES_LYCANROC_DUSK
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_70
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_16:
	bufferspeciesname STR_VAR_1, SPECIES_LYCANROC_MIDNIGHT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_73
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_17:
	bufferspeciesname STR_VAR_1, SPECIES_MAGMORTAR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_76
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_18:
	bufferspeciesname STR_VAR_1, SPECIES_MAGNEZONE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_79
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_19:
	bufferspeciesname STR_VAR_1, SPECIES_MALAMAR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_82
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_20:
	bufferspeciesname STR_VAR_1, SPECIES_MAMOSWINE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_85
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_21:
	bufferspeciesname STR_VAR_1, SPECIES_MANTINE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_88
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_22:
	bufferspeciesname STR_VAR_1, SPECIES_MAWILE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_91
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_23:
	bufferspeciesname STR_VAR_1, SPECIES_METAGROSS
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_94
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_24:
	bufferspeciesname STR_VAR_1, SPECIES_MEW
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_97
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_25:
	bufferspeciesname STR_VAR_1, SPECIES_MILOTIC
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_100
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_26:
	bufferspeciesname STR_VAR_1, SPECIES_MIMIKYU
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_103
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_27:
	bufferspeciesname STR_VAR_1, SPECIES_NIDOKING
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_106
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_28:
	bufferspeciesname STR_VAR_1, SPECIES_NIDOQUEEN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_109
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_29:
	bufferspeciesname STR_VAR_1, SPECIES_NOIVERN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group3Choices_112
	goto EventScript_Group3Choices
	return

EventScript_Group3Choices_31:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KLEAVOR
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_34:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KOMMO_O
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_37:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KROOKODILE
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_40:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LANTURN
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_43:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LEAFEON
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_46:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILLIGANT
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_49:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILLIGANT_HISUI
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_52:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LINOONE
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_55:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LOKIX
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_58:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LUCARIO
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_61:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LUDICOLO
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_64:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LUXRAY
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_67:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LYCANROC
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_70:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LYCANROC_DUSK
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_73:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LYCANROC_MIDNIGHT
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_76:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAGMORTAR
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_79:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAGNEZONE
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_82:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MALAMAR
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_85:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAMOSWINE
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_88:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MANTINE
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_91:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAWILE
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_94:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_METAGROSS
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_97:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MEW
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_100:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MILOTIC
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_103:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MIMIKYU
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_106:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_NIDOKING
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_109:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_NIDOQUEEN
	goto EventScript_Givemonset
	return

EventScript_Group3Choices_112:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_NOIVERN
	goto EventScript_Givemonset
	return


EventScript_Group4Choices::
	message Text_SelectPkmn
	waitmessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Group4Choices_Text_0, EventScript_Group4Choices_Text_1, EventScript_Group4Choices_Text_2, EventScript_Group4Choices_Text_3, EventScript_Group4Choices_Text_4, EventScript_Group4Choices_Text_5, EventScript_Group4Choices_Text_6, EventScript_Group4Choices_Text_7, EventScript_Group4Choices_Text_8, EventScript_Group4Choices_Text_9, EventScript_Group4Choices_Text_10, EventScript_Group4Choices_Text_11, EventScript_Group4Choices_Text_12, EventScript_Group4Choices_Text_13, EventScript_Group4Choices_Text_14, EventScript_Group4Choices_Text_15, EventScript_Group4Choices_Text_16, EventScript_Group4Choices_Text_17, EventScript_Group4Choices_Text_18, EventScript_Group4Choices_Text_19, EventScript_Group4Choices_Text_20, EventScript_Group4Choices_Text_21, EventScript_Group4Choices_Text_22, EventScript_Group4Choices_Text_23, EventScript_Group4Choices_Text_24, EventScript_Group4Choices_Text_25, EventScript_Group4Choices_Text_26, EventScript_Group4Choices_Text_27, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_Group4Choices_2
	case 1, EventScript_Group4Choices_3
	case 2, EventScript_Group4Choices_4
	case 3, EventScript_Group4Choices_5
	case 4, EventScript_Group4Choices_6
	case 5, EventScript_Group4Choices_7
	case 6, EventScript_Group4Choices_8
	case 7, EventScript_Group4Choices_9
	case 8, EventScript_Group4Choices_10
	case 9, EventScript_Group4Choices_11
	case 10, EventScript_Group4Choices_12
	case 11, EventScript_Group4Choices_13
	case 12, EventScript_Group4Choices_14
	case 13, EventScript_Group4Choices_15
	case 14, EventScript_Group4Choices_16
	case 15, EventScript_Group4Choices_17
	case 16, EventScript_Group4Choices_18
	case 17, EventScript_Group4Choices_19
	case 18, EventScript_Group4Choices_20
	case 19, EventScript_Group4Choices_21
	case 20, EventScript_Group4Choices_22
	case 21, EventScript_Group4Choices_23
	case 22, EventScript_Group4Choices_24
	case 23, EventScript_Group4Choices_25
	case 24, EventScript_Group4Choices_26
	case 25, EventScript_Group4Choices_27
	case 26, EventScript_Group4Choices_28
	case 27, EventScript_Group4Choices_29
	case 28, EventScript_Group4Choices_30
EventScript_Group4Choices_30:
	goto Common_EventScript_ChoosePkmnMulti
	return

EventScript_Group4Choices_2:
	bufferspeciesname STR_VAR_1, SPECIES_OBSTAGOON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_31
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_3:
	bufferspeciesname STR_VAR_1, SPECIES_PALOSSAND
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_34
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_4:
	bufferspeciesname STR_VAR_1, SPECIES_PERRSERKER
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_37
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_5:
	bufferspeciesname STR_VAR_1, SPECIES_PERSIAN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_40
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_6:
	bufferspeciesname STR_VAR_1, SPECIES_PERSIAN_ALOLA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_43
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_7:
	bufferspeciesname STR_VAR_1, SPECIES_PIDGEOT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_46
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_8:
	bufferspeciesname STR_VAR_1, SPECIES_POLITOED
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_49
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_9:
	bufferspeciesname STR_VAR_1, SPECIES_POLIWRATH
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_52
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_10:
	bufferspeciesname STR_VAR_1, SPECIES_RAICHU
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_55
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_11:
	bufferspeciesname STR_VAR_1, SPECIES_RAICHU_ALOLA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_58
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_12:
	bufferspeciesname STR_VAR_1, SPECIES_ROSERADE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_61
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_13:
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_64
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_14:
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_FAN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_67
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_15:
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_FROST
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_70
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_16:
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_HEAT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_73
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_17:
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_MOW
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_76
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_18:
	bufferspeciesname STR_VAR_1, SPECIES_ROTOM_WASH
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_79
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_19:
	bufferspeciesname STR_VAR_1, SPECIES_SABLEYE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_82
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_20:
	bufferspeciesname STR_VAR_1, SPECIES_SALAMENCE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_85
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_21:
	bufferspeciesname STR_VAR_1, SPECIES_SALAZZLE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_88
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_22:
	bufferspeciesname STR_VAR_1, SPECIES_SCIZOR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_91
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_23:
	bufferspeciesname STR_VAR_1, SPECIES_SHARPEDO
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_94
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_24:
	bufferspeciesname STR_VAR_1, SPECIES_SHIFTRY
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_97
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_25:
	bufferspeciesname STR_VAR_1, SPECIES_SHUCKLE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_100
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_26:
	bufferspeciesname STR_VAR_1, SPECIES_SKARMORY
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_103
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_27:
	bufferspeciesname STR_VAR_1, SPECIES_SLOWBRO
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_106
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_28:
	bufferspeciesname STR_VAR_1, SPECIES_SLOWBRO_GALAR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_109
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_29:
	bufferspeciesname STR_VAR_1, SPECIES_SLOWKING
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group4Choices_112
	goto EventScript_Group4Choices
	return

EventScript_Group4Choices_31:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OBSTAGOON
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_34:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PALOSSAND
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_37:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PERRSERKER
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_40:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PERSIAN
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_43:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PERSIAN_ALOLA
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_46:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PIDGEOT
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_49:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_POLITOED
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_52:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_POLIWRATH
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_55:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_RAICHU
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_58:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_RAICHU_ALOLA
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_61:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROSERADE
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_64:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROTOM
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_67:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROTOM_FAN
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_70:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROTOM_FROST
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_73:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROTOM_HEAT
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_76:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROTOM_MOW
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_79:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROTOM_WASH
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_82:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SABLEYE
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_85:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SALAMENCE
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_88:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SALAZZLE
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_91:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SCIZOR
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_94:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHARPEDO
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_97:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHIFTRY
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_100:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHUCKLE
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_103:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SKARMORY
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_106:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SLOWBRO
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_109:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SLOWBRO_GALAR
	goto EventScript_Givemonset
	return

EventScript_Group4Choices_112:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SLOWKING
	goto EventScript_Givemonset
	return


EventScript_Group5Choices::
	message Text_SelectPkmn
	waitmessage
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Group5Choices_Text_0, EventScript_Group5Choices_Text_1, EventScript_Group5Choices_Text_2, EventScript_Group5Choices_Text_3, EventScript_Group5Choices_Text_4, EventScript_Group5Choices_Text_5, EventScript_Group5Choices_Text_6, EventScript_Group5Choices_Text_7, EventScript_Group5Choices_Text_8, EventScript_Group5Choices_Text_9, EventScript_Group5Choices_Text_10, EventScript_Group5Choices_Text_11, EventScript_Group5Choices_Text_12, EventScript_Group5Choices_Text_13, EventScript_Group5Choices_Text_14, EventScript_Group5Choices_Text_15, EventScript_Group5Choices_Text_16, EventScript_Group5Choices_Text_17, EventScript_Group5Choices_Text_18, EventScript_Group5Choices_Text_19, EventScript_Group5Choices_Text_20, EventScript_Group5Choices_Text_21, EventScript_Group5Choices_Text_22, EventScript_Group5Choices_Text_23, EventScript_Group5Choices_Text_24, EventScript_Group5Choices_Text_25, EventScript_Group5Choices_Text_26, EventScript_GymLeaderChoices_Text_9
	closemessage
	switch VAR_RESULT
	case 0, EventScript_Group5Choices_2
	case 1, EventScript_Group5Choices_3
	case 2, EventScript_Group5Choices_4
	case 3, EventScript_Group5Choices_5
	case 4, EventScript_Group5Choices_6
	case 5, EventScript_Group5Choices_7
	case 6, EventScript_Group5Choices_8
	case 7, EventScript_Group5Choices_9
	case 8, EventScript_Group5Choices_10
	case 9, EventScript_Group5Choices_11
	case 10, EventScript_Group5Choices_12
	case 11, EventScript_Group5Choices_13
	case 12, EventScript_Group5Choices_14
	case 13, EventScript_Group5Choices_15
	case 14, EventScript_Group5Choices_16
	case 15, EventScript_Group5Choices_17
	case 16, EventScript_Group5Choices_18
	case 17, EventScript_Group5Choices_19
	case 18, EventScript_Group5Choices_20
	case 19, EventScript_Group5Choices_21
	case 20, EventScript_Group5Choices_22
	case 21, EventScript_Group5Choices_23
	case 22, EventScript_Group5Choices_24
	case 23, EventScript_Group5Choices_25
	case 24, EventScript_Group5Choices_26
	case 25, EventScript_Group5Choices_27
	case 26, EventScript_Group5Choices_28
	case 27, EventScript_Group5Choices_29
EventScript_Group5Choices_29:
	goto Common_EventScript_ChoosePkmnMulti
	return

EventScript_Group5Choices_2:
	bufferspeciesname STR_VAR_1, SPECIES_SLOWKING_GALAR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_30
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_3:
	bufferspeciesname STR_VAR_1, SPECIES_SNEASLER
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_33
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_4:
	bufferspeciesname STR_VAR_1, SPECIES_SNORLAX
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_36
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_5:
	bufferspeciesname STR_VAR_1, SPECIES_STARAPTOR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_39
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_6:
	bufferspeciesname STR_VAR_1, SPECIES_SUDOWOODO
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_42
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_7:
	bufferspeciesname STR_VAR_1, SPECIES_SWELLOW
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_45
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_8:
	bufferspeciesname STR_VAR_1, SPECIES_SYLVEON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_48
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_9:
	bufferspeciesname STR_VAR_1, SPECIES_TALONFLAME
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_51
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_10:
	bufferspeciesname STR_VAR_1, SPECIES_TATSUGIRI
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_54
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_11:
	bufferspeciesname STR_VAR_1, SPECIES_TOGEKISS
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_57
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_12:
	bufferspeciesname STR_VAR_1, SPECIES_TORKOAL
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_60
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_13:
	bufferspeciesname STR_VAR_1, SPECIES_TOXTRICITY
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_63
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_14:
	bufferspeciesname STR_VAR_1, SPECIES_TOXTRICITY_LOW_KEY
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_66
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_15:
	bufferspeciesname STR_VAR_1, SPECIES_TYRANITAR
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_69
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_16:
	bufferspeciesname STR_VAR_1, SPECIES_TYRANTRUM
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_72
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_17:
	bufferspeciesname STR_VAR_1, SPECIES_UMBREON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_75
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_18:
	bufferspeciesname STR_VAR_1, SPECIES_UNOWN
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_78
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_19:
	bufferspeciesname STR_VAR_1, SPECIES_URSALUNA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_81
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_20:
	bufferspeciesname STR_VAR_1, SPECIES_URSALUNA_BLOODMOON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_84
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_21:
	bufferspeciesname STR_VAR_1, SPECIES_VAPOREON
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_87
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_22:
	bufferspeciesname STR_VAR_1, SPECIES_VOLBEAT
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_90
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_23:
	bufferspeciesname STR_VAR_1, SPECIES_VOLCARONA
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_93
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_24:
	bufferspeciesname STR_VAR_1, SPECIES_WAILORD
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_96
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_25:
	bufferspeciesname STR_VAR_1, SPECIES_WEAVILE
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_99
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_26:
	bufferspeciesname STR_VAR_1, SPECIES_WYRDEER
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_102
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_27:
	bufferspeciesname STR_VAR_1, SPECIES_ZOROARK
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_105
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_28:
	bufferspeciesname STR_VAR_1, SPECIES_ZOROARK_HISUI
	msgbox Text_DoYouWantPkmn, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Group5Choices_108
	goto EventScript_Group5Choices
	return

EventScript_Group5Choices_30:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SLOWKING_GALAR
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_33:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SNEASLER
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_36:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SNORLAX
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_39:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_STARAPTOR
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_42:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SUDOWOODO
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_45:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SWELLOW
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_48:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SYLVEON
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_51:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TALONFLAME
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_54:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TATSUGIRI
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_57:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOGEKISS
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_60:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TORKOAL
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_63:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOXTRICITY
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_66:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOXTRICITY_LOW_KEY
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_69:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYRANITAR
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_72:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYRANTRUM
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_75:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_UMBREON
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_78:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_UNOWN
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_81:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_URSALUNA
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_84:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_URSALUNA_BLOODMOON
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_87:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VAPOREON
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_90:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VOLBEAT
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_93:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VOLCARONA
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_96:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WAILORD
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_99:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WEAVILE
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_102:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WYRDEER
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_105:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZOROARK
	goto EventScript_Givemonset
	return

EventScript_Group5Choices_108:
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZOROARK_HISUI
	goto EventScript_Givemonset
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
	.string "1. Jake's Gym$"

EventScript_GymLeaderChoices_Text_2:
	.string "2. Reeve's Gym$"

EventScript_GymLeaderChoices_Text_3:
	.string "3. Prem's Gym$"

EventScript_GymLeaderChoices_Text_4:
	.string "4. Jaison's Gym$"

EventScript_GymLeaderChoices_Text_5:
	.string "5. Prajith's Gym$"

EventScript_GymLeaderChoices_Text_6:
	.string "6. Varun's Gym$"

EventScript_GymLeaderChoices_Text_7:
	.string "7. Snehal's Gym$"

EventScript_GymLeaderChoices_Text_8:
	.string "8. Rajesh's Gym$"

EventScript_GymLeaderChoices_Text_9:
	.string "Back$"

EventScript_ChallengeGym1_Text_0:
	.string "Bug Catcher Pawan$"

EventScript_ChallengeGym1_Text_1:
	.string "Camper Prajesh$"

EventScript_ChallengeGym1_Text_2:
	.string "Leader Jake$"

EventScript_ChallengeGym2_Text_0:
	.string "Collector Hanston$"

EventScript_ChallengeGym2_Text_1:
	.string "Burglar Premal$"

EventScript_ChallengeGym2_Text_2:
	.string "Leader Reeve$"

EventScript_ChallengeGym3_Text_0:
	.string "Psychic Rashel$"

EventScript_ChallengeGym3_Text_1:
	.string "Psychic Don$"

EventScript_ChallengeGym3_Text_2:
	.string "Leader Prem$"

EventScript_ChallengeGym4_Text_0:
	.string "Lady Akshara$"

EventScript_ChallengeGym4_Text_1:
	.string "Lass Dara$"

EventScript_ChallengeGym4_Text_2:
	.string "Leader Jaison$"

EventScript_ChallengeGym5_Text_0:
	.string "Black Belt Gilston$"

EventScript_ChallengeGym5_Text_1:
	.string "Kindler Delson$"

EventScript_ChallengeGym5_Text_2:
	.string "Leader Prajith$"

EventScript_ChallengeGym6_Text_0:
	.string "Guitarist Monvish$"

EventScript_ChallengeGym6_Text_1:
	.string "Scientist Darwin$"

EventScript_ChallengeGym6_Text_2:
	.string "Leader Varun$"

EventScript_ChallengeGym7_Text_0:
	.string "Fisherman Adithya$"

EventScript_ChallengeGym7_Text_1:
	.string "Youngster Handam$"

EventScript_ChallengeGym7_Text_2:
	.string "Leader Snehal$"

EventScript_ChallengeGym8_Text_0:
	.string "Expert Rion$"

EventScript_ChallengeGym8_Text_1:
	.string "Dragon Tamer Deon$"

EventScript_ChallengeGym8_Text_2:
	.string "Leader Rajesh$"

EventScript_ChallengeTrainers_Text_0:
	.string "Which Challenger do you want to\nchallenge?$"

EventScript_ChallengeTrainers_Text_1:
	.string "1. Challenger Manvitha$"

EventScript_ChallengeTrainers_Text_2:
	.string "2. Challenger Kevin$"

EventScript_ChallengeTrainers_Text_3:
	.string "3. Challenger Lohith$"

EventScript_ChallengeTrainers_Text_4:
	.string "4. Challenger Anmol$"

EventScript_ChallengeTrainers_Text_5:
	.string "5. Challenger Arshad$"

EventScript_ChallengeTrainers_Text_6:
	.string "6. Challenger Melwin$"

EventScript_ChallengeTrainers_Text_7:
	.string "7. Champion Bardar$"

EventScript_ChallengeTrainers_Text_8:
	.string "You have already defeated the\n"
	.string "Champion!\p"
	.string "Would you like to battle again?$"

EventScript_ChallengeTrainerChoices_Text_0:
	.string "You have already defeated all\n"
	.string "Challengers here!\p"
	.string "Would you like to battle again?$"

EventScript_ChallengePostgameTrainers_Text_0:
	.string "1. Professor Benny$"

EventScript_ChallengePostgameTrainers_Text_1:
	.string "2. Master Aaron$"

EventScript_PostgameTrainerChoices_Text_0:
	.string "You have already defeated all\n"
	.string "Postgame Trainers here!\p"
	.string "Would you like to battle again?$"

Common_EventScript_ChoosePkmnMulti_Text_0:
	.string "You have chosen your Pokémon!\n"
	.string "Start your adventure!$"

Common_EventScript_ChoosePkmnMulti_Text_1:
	.string "Select a group of Pokémon.$"

Common_EventScript_ChoosePkmnMulti_Text_2:
	.string "Group 1 (A-E)$"

Common_EventScript_ChoosePkmnMulti_Text_3:
	.string "Group 2 (F-K)$"

Common_EventScript_ChoosePkmnMulti_Text_4:
	.string "Group 3 (K-N)$"

Common_EventScript_ChoosePkmnMulti_Text_5:
	.string "Group 4 (O-S)$"

Common_EventScript_ChoosePkmnMulti_Text_6:
	.string "Group 5 (S-Z)$"

Common_EventScript_ChoosePkmnMulti_Text_7:
	.string "Start adventure with only {STR_VAR_2} Pokémon?$"

Common_EventScript_ChoosePkmnMulti_Text_8:
	.string "Start your adventure!$"

EventScript_Givemonset_Text_0:
	.string "{PKMN} No {STR_VAR_2}.\n"
	.string "{PLAYER} received {STR_VAR_1}!$"

EventScript_Group1Choices_Text_0:
	.string "1. Absol$"

EventScript_Group1Choices_Text_1:
	.string "2. Aegislash$"

EventScript_Group1Choices_Text_2:
	.string "3. Aerodactyl$"

EventScript_Group1Choices_Text_3:
	.string "4. Altaria$"

EventScript_Group1Choices_Text_4:
	.string "5. Ambipom$"

EventScript_Group1Choices_Text_5:
	.string "6. Annihilape$"

EventScript_Group1Choices_Text_6:
	.string "7. Araquanid$"

EventScript_Group1Choices_Text_7:
	.string "8. Archaludon$"

EventScript_Group1Choices_Text_8:
	.string "9. Armarouge$"

EventScript_Group1Choices_Text_9:
	.string "10. Azumarill$"

EventScript_Group1Choices_Text_10:
	.string "11. Barraskewda$"

EventScript_Group1Choices_Text_11:
	.string "12. Basculegion$"

EventScript_Group1Choices_Text_12:
	.string "13. Basculegion-F$"

EventScript_Group1Choices_Text_13:
	.string "14. Baxcalibur$"

EventScript_Group1Choices_Text_14:
	.string "15. Bellibolt$"

EventScript_Group1Choices_Text_15:
	.string "16. Bronzong$"

EventScript_Group1Choices_Text_16:
	.string "17. Camerupt$"

EventScript_Group1Choices_Text_17:
	.string "18. Ceruledge$"

EventScript_Group1Choices_Text_18:
	.string "19. Clawitzer$"

EventScript_Group1Choices_Text_19:
	.string "20. Corviknight$"

EventScript_Group1Choices_Text_20:
	.string "21. Crawdaunt$"

EventScript_Group1Choices_Text_21:
	.string "22. Dondozo$"

EventScript_Group1Choices_Text_22:
	.string "23. Dragapult$"

EventScript_Group1Choices_Text_23:
	.string "24. Dragonite$"

EventScript_Group1Choices_Text_24:
	.string "25. Dudunsparce$"

EventScript_Group1Choices_Text_25:
	.string "26. Electivire$"

EventScript_Group1Choices_Text_26:
	.string "27. Espeon$"

EventScript_Group1Choices_Text_27:
	.string "28. Excadrill$"

EventScript_Group2Choices_Text_0:
	.string "29. Farigiraf$"

EventScript_Group2Choices_Text_1:
	.string "30. Ferrothorn$"

EventScript_Group2Choices_Text_2:
	.string "31. Flareon$"

EventScript_Group2Choices_Text_3:
	.string "32. Froslass$"

EventScript_Group2Choices_Text_4:
	.string "33. Garchomp$"

EventScript_Group2Choices_Text_5:
	.string "34. Gengar$"

EventScript_Group2Choices_Text_6:
	.string "35. Gholdengo$"

EventScript_Group2Choices_Text_7:
	.string "36. Glaceon$"

EventScript_Group2Choices_Text_8:
	.string "37. Glalie$"

EventScript_Group2Choices_Text_9:
	.string "38. Gliscor$"

EventScript_Group2Choices_Text_10:
	.string "39. Gogoat$"

EventScript_Group2Choices_Text_11:
	.string "40. Golurk$"

EventScript_Group2Choices_Text_12:
	.string "41. Goodra$"

EventScript_Group2Choices_Text_13:
	.string "42. Goodra-H$"

EventScript_Group2Choices_Text_14:
	.string "43. Grimmsnarl$"

EventScript_Group2Choices_Text_15:
	.string "44. Gyarados$"

EventScript_Group2Choices_Text_16:
	.string "45. Hatterene$"

EventScript_Group2Choices_Text_17:
	.string "46. Hawlucha$"

EventScript_Group2Choices_Text_18:
	.string "47. Hitmonchan$"

EventScript_Group2Choices_Text_19:
	.string "48. Hitmonlee$"

EventScript_Group2Choices_Text_20:
	.string "49. Hitmontop$"

EventScript_Group2Choices_Text_21:
	.string "50. Houndstone$"

EventScript_Group2Choices_Text_22:
	.string "51. Hydreigon$"

EventScript_Group2Choices_Text_23:
	.string "52. Illumise$"

EventScript_Group2Choices_Text_24:
	.string "53. Jolteon$"

EventScript_Group2Choices_Text_25:
	.string "54. Jynx$"

EventScript_Group2Choices_Text_26:
	.string "55. Kingambit$"

EventScript_Group2Choices_Text_27:
	.string "56. Kingdra$"

EventScript_Group3Choices_Text_0:
	.string "57. Kleavor$"

EventScript_Group3Choices_Text_1:
	.string "58. Kommo-o$"

EventScript_Group3Choices_Text_2:
	.string "59. Krookodile$"

EventScript_Group3Choices_Text_3:
	.string "60. Lanturn$"

EventScript_Group3Choices_Text_4:
	.string "61. Leafeon$"

EventScript_Group3Choices_Text_5:
	.string "62. Lilligant$"

EventScript_Group3Choices_Text_6:
	.string "63. Lilligant-H$"

EventScript_Group3Choices_Text_7:
	.string "64. Linoone$"

EventScript_Group3Choices_Text_8:
	.string "65. Lokix$"

EventScript_Group3Choices_Text_9:
	.string "66. Lucario$"

EventScript_Group3Choices_Text_10:
	.string "67. Ludicolo$"

EventScript_Group3Choices_Text_11:
	.string "68. Luxray$"

EventScript_Group3Choices_Text_12:
	.string "69. Lycanroc$"

EventScript_Group3Choices_Text_13:
	.string "70. Lycanroc-D$"

EventScript_Group3Choices_Text_14:
	.string "71. Lycanroc-M$"

EventScript_Group3Choices_Text_15:
	.string "72. Magmortar$"

EventScript_Group3Choices_Text_16:
	.string "73. Magnezone$"

EventScript_Group3Choices_Text_17:
	.string "74. Malamar$"

EventScript_Group3Choices_Text_18:
	.string "75. Mamoswine$"

EventScript_Group3Choices_Text_19:
	.string "76. Mantine$"

EventScript_Group3Choices_Text_20:
	.string "77. Mawile$"

EventScript_Group3Choices_Text_21:
	.string "78. Metagross$"

EventScript_Group3Choices_Text_22:
	.string "79. Mew$"

EventScript_Group3Choices_Text_23:
	.string "80. Milotic$"

EventScript_Group3Choices_Text_24:
	.string "81. Mimikyu$"

EventScript_Group3Choices_Text_25:
	.string "82. Nidoking$"

EventScript_Group3Choices_Text_26:
	.string "83. Nidoqueen$"

EventScript_Group3Choices_Text_27:
	.string "84. Noivern$"

EventScript_Group4Choices_Text_0:
	.string "85. Obstagoon$"

EventScript_Group4Choices_Text_1:
	.string "86. Palossand$"

EventScript_Group4Choices_Text_2:
	.string "87. Perrserker$"

EventScript_Group4Choices_Text_3:
	.string "88. Persian$"

EventScript_Group4Choices_Text_4:
	.string "89. Persian-A$"

EventScript_Group4Choices_Text_5:
	.string "90. Pidgeot$"

EventScript_Group4Choices_Text_6:
	.string "91. Politoed$"

EventScript_Group4Choices_Text_7:
	.string "92. Poliwrath$"

EventScript_Group4Choices_Text_8:
	.string "93. Raichu$"

EventScript_Group4Choices_Text_9:
	.string "94. Raichu-A$"

EventScript_Group4Choices_Text_10:
	.string "95. Roserade$"

EventScript_Group4Choices_Text_11:
	.string "96. Rotom$"

EventScript_Group4Choices_Text_12:
	.string "97. Rotom-Fan$"

EventScript_Group4Choices_Text_13:
	.string "98. Rotom-Frost$"

EventScript_Group4Choices_Text_14:
	.string "99. Rotom-Heat$"

EventScript_Group4Choices_Text_15:
	.string "100. Rotom-Mow$"

EventScript_Group4Choices_Text_16:
	.string "101. Rotom-Wash$"

EventScript_Group4Choices_Text_17:
	.string "102. Sableye$"

EventScript_Group4Choices_Text_18:
	.string "103. Salamence$"

EventScript_Group4Choices_Text_19:
	.string "104. Salazzle$"

EventScript_Group4Choices_Text_20:
	.string "105. Scizor$"

EventScript_Group4Choices_Text_21:
	.string "106. Sharpedo$"

EventScript_Group4Choices_Text_22:
	.string "107. Shiftry$"

EventScript_Group4Choices_Text_23:
	.string "108. Shuckle$"

EventScript_Group4Choices_Text_24:
	.string "109. Skarmory$"

EventScript_Group4Choices_Text_25:
	.string "110. Slowbro$"

EventScript_Group4Choices_Text_26:
	.string "111. Slowbro-G$"

EventScript_Group4Choices_Text_27:
	.string "112. Slowking$"

EventScript_Group5Choices_Text_0:
	.string "113. Slowking-G$"

EventScript_Group5Choices_Text_1:
	.string "114. Sneasler$"

EventScript_Group5Choices_Text_2:
	.string "115. Snorlax$"

EventScript_Group5Choices_Text_3:
	.string "116. Staraptor$"

EventScript_Group5Choices_Text_4:
	.string "117. Sudowoodo$"

EventScript_Group5Choices_Text_5:
	.string "118. Swellow$"

EventScript_Group5Choices_Text_6:
	.string "119. Sylveon$"

EventScript_Group5Choices_Text_7:
	.string "120. Talonflame$"

EventScript_Group5Choices_Text_8:
	.string "121. Tatsugiri$"

EventScript_Group5Choices_Text_9:
	.string "122. Togekiss$"

EventScript_Group5Choices_Text_10:
	.string "123. Torkoal$"

EventScript_Group5Choices_Text_11:
	.string "124. Toxtricity$"

EventScript_Group5Choices_Text_12:
	.string "125. Toxtricity-LK$"

EventScript_Group5Choices_Text_13:
	.string "126. Tyranitar$"

EventScript_Group5Choices_Text_14:
	.string "127. Tyrantrum$"

EventScript_Group5Choices_Text_15:
	.string "128. Umbreon$"

EventScript_Group5Choices_Text_16:
	.string "129. Unown$"

EventScript_Group5Choices_Text_17:
	.string "130. Ursaluna$"

EventScript_Group5Choices_Text_18:
	.string "131. Ursaluna-BM$"

EventScript_Group5Choices_Text_19:
	.string "132. Vaporeon$"

EventScript_Group5Choices_Text_20:
	.string "133. Volbeat$"

EventScript_Group5Choices_Text_21:
	.string "134. Volcarona$"

EventScript_Group5Choices_Text_22:
	.string "135. Wailord$"

EventScript_Group5Choices_Text_23:
	.string "136. Weavile$"

EventScript_Group5Choices_Text_24:
	.string "137. Wyrdeer$"

EventScript_Group5Choices_Text_25:
	.string "138. Zoroark$"

EventScript_Group5Choices_Text_26:
	.string "139. Zoroark-H$"

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

Text_SelectPkmn::
	.string "Please select your Pokémon.$"

Text_DoYouWantPkmn::
	.string "Do you want {STR_VAR_1}?$"
