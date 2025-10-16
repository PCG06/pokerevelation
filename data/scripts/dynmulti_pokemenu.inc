EventScript_PokeMenu::
	lock
	setvar VAR_TEMP_B, 0
	goto EventScript_PokeMenuMultichoice
	release
	end


EventScript_PokeMenuMultichoice::
	copyvar VAR_TEMP_A, VAR_TEMP_B
	dynmultichoice 0, 0, FALSE, 8, VAR_TEMP_A, DYN_MULTICHOICE_CB_NONE, EventScript_PokeMenuMultichoice_Text_0, EventScript_PokeMenuMultichoice_Text_1, EventScript_PokeMenuMultichoice_Text_2, EventScript_PokeMenuMultichoice_Text_3, EventScript_PokeMenuMultichoice_Text_4, EventScript_PokeMenuMultichoice_Text_5, EventScript_PokeMenuMultichoice_Text_6
	copyvar VAR_TEMP_B, VAR_RESULT
	switch VAR_RESULT
	case 0, EventScript_PokeMenuMultichoice_2
	case 1, EventScript_PokeMenuMultichoice_3
	case 2, EventScript_PokeMenuMultichoice_4
	case 3, EventScript_PokeMenuMultichoice_5
	case 4, EventScript_PokeMenuMultichoice_6
	case 5, EventScript_PokeMenuMultichoice_7
	case 6, EventScript_PokeMenuMultichoice_8
EventScript_PokeMenuMultichoice_8:
	setvar VAR_TEMP_B, 0
	release
	end

EventScript_PokeMenuMultichoice_2:
	call EventScript_StatEditor
	return

EventScript_PokeMenuMultichoice_3:
	call EventScript_SetAbility
	return

EventScript_PokeMenuMultichoice_4:
	call EventScript_SetHiddenNature
	return

EventScript_PokeMenuMultichoice_5:
	call EventScript_MoveRelearner
	return

EventScript_PokeMenuMultichoice_6:
	call EventScript_SetHiddenPowerIVs
	return

EventScript_PokeMenuMultichoice_7:
	call EventScript_SetFriendship
	return


EventScript_StatEditor::
	msgbox Text_ChooseAPartyPkmn, MSGBOX_AUTOCLOSE
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_StatEditor_2
EventScript_StatEditor_1:
	special OpenStatEditorCallback
	waitstate
	goto EventScript_PokeMenuMultichoice
	return

EventScript_StatEditor_2:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_StatEditor_1


EventScript_SetAbility::
	msgbox Text_ChooseAPartyPkmn, MSGBOX_AUTOCLOSE
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_SetAbility_2
EventScript_SetAbility_1:
	callnative GetAbilityNamesByVars
	compare VAR_0x8000, FALSE
	goto_if_eq EventScript_SetAbility_5
EventScript_SetAbility_4:
	compare VAR_0x8000, TRUE
	goto_if_eq EventScript_SetAbility_8
EventScript_SetAbility_7:
	compare VAR_0x8001, TRUE
	goto_if_eq EventScript_SetAbility_11
EventScript_SetAbility_10:
	compare VAR_0x8002, TRUE
	goto_if_eq EventScript_SetAbility_14
EventScript_SetAbility_13:
	dynmultipush EventScript_SetAbility_Text_1, 3
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, NULL
	switch VAR_RESULT
	case 3, EventScript_SetAbility_17
	case MULTI_B_PRESSED, EventScript_SetAbility_17
	callnative SetAbility
	msgbox EventScript_SetAbility_Text_2, MSGBOX_AUTOCLOSE
	goto EventScript_PokeMenuMultichoice
	return

EventScript_SetAbility_2:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_SetAbility_1

EventScript_SetAbility_5:
	msgbox EventScript_SetAbility_Text_0, MSGBOX_AUTOCLOSE
	goto EventScript_PokeMenuMultichoice
	goto EventScript_SetAbility_4

EventScript_SetAbility_8:
	dynmultipush gStringVar1, 0
	goto EventScript_SetAbility_7

EventScript_SetAbility_11:
	dynmultipush gStringVar2, 1
	goto EventScript_SetAbility_10

EventScript_SetAbility_14:
	dynmultipush gStringVar3, 2
	goto EventScript_SetAbility_13

EventScript_SetAbility_17:
	goto EventScript_PokeMenuMultichoice
	return


EventScript_SetHiddenNature::
	msgbox Text_ChooseAPartyPkmn, MSGBOX_AUTOCLOSE
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_SetHiddenNature_2
EventScript_SetHiddenNature_1:
	dynmultipush gText_Nature_Hardy, 0
	dynmultipush gText_Nature_Lonely, 1
	dynmultipush gText_Nature_Brave, 2
	dynmultipush gText_Nature_Adamant, 3
	dynmultipush gText_Nature_Naughty, 4
	dynmultipush gText_Nature_Bold, 5
	dynmultipush gText_Nature_Docile, 6
	dynmultipush gText_Nature_Relaxed, 7
	dynmultipush gText_Nature_Impish, 8
	dynmultipush gText_Nature_Lax, 9
	dynmultipush gText_Nature_Timid, 10
	dynmultipush gText_Nature_Hasty, 11
	dynmultipush gText_Nature_Serious, 12
	dynmultipush gText_Nature_Jolly, 13
	dynmultipush gText_Nature_Naive, 14
	dynmultipush gText_Nature_Modest, 15
	dynmultipush gText_Nature_Mild, 16
	dynmultipush gText_Nature_Quiet, 17
	dynmultipush gText_Nature_Bashful, 18
	dynmultipush gText_Nature_Rash, 19
	dynmultipush gText_Nature_Calm, 20
	dynmultipush gText_Nature_Gentle, 21
	dynmultipush gText_Nature_Sassy, 22
	dynmultipush gText_Nature_Careful, 23
	dynmultipush gText_Nature_Quirky, 24
	dynmultipush EventScript_SetAbility_Text_1, 25
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 25, EventScript_SetHiddenNature_5
	case MULTI_B_PRESSED, EventScript_SetHiddenNature_5
	special SetHiddenNature
	msgbox EventScript_SetHiddenNature_Text_0, MSGBOX_AUTOCLOSE
	goto EventScript_PokeMenuMultichoice
	return

EventScript_SetHiddenNature_2:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_SetHiddenNature_1

EventScript_SetHiddenNature_5:
	goto EventScript_PokeMenuMultichoice
	return


EventScript_SetHiddenPowerIVs::
	msgbox Text_ChooseAPartyPkmn, MSGBOX_AUTOCLOSE
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_SetHiddenPowerIVs_2
EventScript_SetHiddenPowerIVs_1:
	dynmultipush gText_Type_Fighting, 0
	dynmultipush gText_Type_Flying, 1
	dynmultipush gText_Type_Poison, 2
	dynmultipush gText_Type_Ground, 3
	dynmultipush gText_Type_Rock, 4
	dynmultipush gText_Type_Bug, 5
	dynmultipush gText_Type_Ghost, 6
	dynmultipush gText_Type_Steel, 7
	dynmultipush gText_Type_Fire, 8
	dynmultipush gText_Type_Water, 9
	dynmultipush gText_Type_Grass, 10
	dynmultipush gText_Type_Electric, 11
	dynmultipush gText_Type_Psychic, 12
	dynmultipush gText_Type_Ice, 13
	dynmultipush gText_Type_Dragon, 14
	dynmultipush gText_Type_Dark, 15
	dynmultipush EventScript_SetAbility_Text_1, 16
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 16, EventScript_SetHiddenPowerIVs_5
	case MULTI_B_PRESSED, EventScript_SetHiddenPowerIVs_5
	special SetHiddenPowerIVs
	msgbox EventScript_SetHiddenPowerIVs_Text_0, MSGBOX_AUTOCLOSE
	goto EventScript_PokeMenuMultichoice
	return

EventScript_SetHiddenPowerIVs_2:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_SetHiddenPowerIVs_1

EventScript_SetHiddenPowerIVs_5:
	goto EventScript_PokeMenuMultichoice
	return


EventScript_SetFriendship::
	msgbox Text_ChooseAPartyPkmn, MSGBOX_AUTOCLOSE
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_SetFriendship_2
EventScript_SetFriendship_1:
	callnative DebugNative_Party_SetFriendship
	waitstate
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_SetFriendship_5
EventScript_SetFriendship_4:
	goto EventScript_PokeMenuMultichoice
	return

EventScript_SetFriendship_2:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_SetFriendship_1

EventScript_SetFriendship_5:
	msgbox EventScript_SetFriendship_Text_0, MSGBOX_AUTOCLOSE
	goto EventScript_SetFriendship_4


EventScript_SetTeraType::
	msgbox Text_ChooseAPartyPkmn, MSGBOX_AUTOCLOSE
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_SetTeraType_2
EventScript_SetTeraType_1:
	dynmultipush gText_Type_Normal, 0
	dynmultipush gText_Type_Fighting, 1
	dynmultipush gText_Type_Flying, 2
	dynmultipush gText_Type_Poison, 3
	dynmultipush gText_Type_Ground, 4
	dynmultipush gText_Type_Rock, 5
	dynmultipush gText_Type_Bug, 6
	dynmultipush gText_Type_Ghost, 7
	dynmultipush gText_Type_Steel, 8
	dynmultipush gText_Type_Fire, 9
	dynmultipush gText_Type_Water, 10
	dynmultipush gText_Type_Grass, 11
	dynmultipush gText_Type_Electric, 12
	dynmultipush gText_Type_Psychic, 13
	dynmultipush gText_Type_Ice, 14
	dynmultipush gText_Type_Dragon, 15
	dynmultipush gText_Type_Dark, 16
	dynmultipush gText_Type_Fairy, 17
	dynmultipush EventScript_SetAbility_Text_1, 18
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 18, EventScript_SetTeraType_5
	case MULTI_B_PRESSED, EventScript_SetTeraType_5
	compare VAR_RESULT, 8
	goto_if_gt EventScript_SetTeraType_8
	addvar VAR_RESULT, 1
EventScript_SetTeraType_7:
	setteratype VAR_RESULT, VAR_0x8004
	msgbox EventScript_SetTeraType_Text_0, MSGBOX_AUTOCLOSE
	goto EventScript_PokeMenuMultichoice
	return

EventScript_SetTeraType_2:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_SetTeraType_1

EventScript_SetTeraType_5:
	goto EventScript_PokeMenuMultichoice
	return

EventScript_SetTeraType_8:
	addvar VAR_RESULT, 2
	goto EventScript_SetTeraType_7


EventScript_MoveRelearner::
	msgbox Text_ChooseAPartyPkmn, MSGBOX_AUTOCLOSE
	setflag FLAG_SCRIPT_MOVE_RELEARNER
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_MoveRelearner_2
EventScript_MoveRelearner_1:
	compare VAR_0x8005, NO
	goto_if_eq EventScript_MoveRelearner_5
EventScript_MoveRelearner_4:
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, NO
	goto_if_eq EventScript_MoveRelearner_8
EventScript_MoveRelearner_7:
	clearflag FLAG_SCRIPT_MOVE_RELEARNER
	goto EventScript_PokeMenuMultichoice
	return

EventScript_MoveRelearner_2:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_MoveRelearner_1

EventScript_MoveRelearner_5:
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	msgbox EventScript_MoveRelearner_Text_0, MSGBOX_AUTOCLOSE
	goto EventScript_PokeMenuMultichoice
	goto EventScript_MoveRelearner_4

EventScript_MoveRelearner_8:
	goto EventScript_PokeMenuMultichoice
	goto EventScript_MoveRelearner_7


EventScript_PokeMenuMultichoice_Text_0:
	.string "Set Stats$"

EventScript_PokeMenuMultichoice_Text_1:
	.string "Set Ability$"

EventScript_PokeMenuMultichoice_Text_2:
	.string "Set Nature$"

EventScript_PokeMenuMultichoice_Text_3:
	.string "Set Moves$"

EventScript_PokeMenuMultichoice_Text_4:
	.string "Set Hidden Power IVs$"

EventScript_PokeMenuMultichoice_Text_5:
	.string "Set Friendship$"

EventScript_PokeMenuMultichoice_Text_6:
	.string "Exit$"

EventScript_SetAbility_Text_0:
	.string "Your Pokémon only has 1 ability!$"

EventScript_SetAbility_Text_1:
	.string "Back$"

EventScript_SetAbility_Text_2:
	.string "Set {STR_VAR_1}'s ability to:\n{STR_VAR_2}.$"

EventScript_SetHiddenNature_Text_0:
	.string "Set {STR_VAR_1}'s new nature to:\n{STR_VAR_2}.$"

EventScript_SetHiddenPowerIVs_Text_0:
	.string "Set {STR_VAR_1}'s new Hidden Power\ntype to: {STR_VAR_2}.$"

EventScript_SetFriendship_Text_0:
	.string "Set {STR_VAR_1}'s friendship to: {STR_VAR_2}.$"

EventScript_SetTeraType_Text_0:
	.string "Set {STR_VAR_1}'s Tera type to:\n{STR_VAR_2}.$"

EventScript_MoveRelearner_Text_0:
	.string "{STR_VAR_1} cannot learn new moves.$"

Text_ChooseAPartyPkmn::
	.string "Choose a Pokémon from your party.$"
