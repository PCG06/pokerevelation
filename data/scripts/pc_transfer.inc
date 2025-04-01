@ Call this script after receiving a gift Pokémon to handle fanfare, nickname, sending to box
Common_EventScript_PlayerReceivedPokemon::
	playfanfare MUS_OBTAIN_ITEM
	call_if_eq VAR_0x8000, TRUE, EventScript_PlayShinySoundSE
	showmonpic VAR_TEMP_TRANSFERRED_SPECIES, VAR_0x8000, 10, 3
	message gText_PlayerReceivedPokemon
	waitse
	waitfanfare
	waitbuttonpress
	hidemonpic
	closemessage
	call Common_EventScript_ShowPokemonNature
	call Common_EventScript_NicknameGiftPokemon
	return

EventScript_PlayShinySoundSE:
	playse SE_SHINY
	return

Common_EventScript_ShowPokemonNature::
	message gText_ItHasTheXNature
	waitbuttonpress
	return

Common_EventScript_NicknameGiftPokemon::
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, EventScript_NicknamePartyMonYesNo
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, EventScript_NicknameBoxMonYesNo
	return

EventScript_NicknamePartyMonYesNo::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_NicknamePartyMon
	return

EventScript_NicknamePartyMon::
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return

EventScript_NicknameBoxMonYesNo::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, EventScript_NicknameBoxMon
	goto Common_EventScript_TransferredToPC
	return

EventScript_NicknameBoxMon::
	call Common_EventScript_NameReceivedBoxMon
	return

@ VAR_0x8004 here is used by ChangePokemonNickname
Common_EventScript_GetGiftMonPartySlot::
	getpartysize
	subvar VAR_RESULT, 1
	copyvar VAR_0x8004, VAR_RESULT
	return

Common_EventScript_NameReceivedBoxMon::
	fadescreen FADE_TO_BLACK
	special ChangeBoxPokemonNickname
	waitstate
	lock
	faceplayer
	return

Common_EventScript_TransferredToPC::
	bufferboxname STR_VAR_1, VAR_PC_BOX_TO_SEND_MON
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_TransferredSomeonesPC
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_TransferredLanettesPC
	return

EventScript_TransferredSomeonesPC::
	specialvar VAR_RESULT, ShouldShowBoxWasFullMessage
	goto_if_eq VAR_RESULT, TRUE, EventScript_SomeonesPCBoxFull
	msgbox gText_PkmnTransferredSomeonesPC, MSGBOX_DEFAULT
	return

EventScript_SomeonesPCBoxFull::
	specialvar VAR_RESULT, GetPCBoxToSendMon
	bufferboxname STR_VAR_3, VAR_RESULT
	msgbox gText_PkmnTransferredSomeonesPCBoxFull, MSGBOX_DEFAULT
	return

EventScript_TransferredLanettesPC::
	specialvar VAR_RESULT, ShouldShowBoxWasFullMessage
	goto_if_eq VAR_RESULT, TRUE, EventScript_LanettesPCBoxFull
	msgbox gText_PkmnTransferredLanettesPC, MSGBOX_DEFAULT
	return

EventScript_LanettesPCBoxFull::
	specialvar VAR_RESULT, GetPCBoxToSendMon
	bufferboxname STR_VAR_3, VAR_RESULT
	msgbox gText_PkmnTransferredLanettesPCBoxFull, MSGBOX_DEFAULT
	return

Common_EventScript_NoMoreRoomForPokemon::
	msgbox gText_NoMoreRoomForPokemon, MSGBOX_DEFAULT
	release
	end
