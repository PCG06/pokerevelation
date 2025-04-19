EventScript_UseSurf::
	bufferpartymonnick STR_VAR_1, 0
	setfieldeffectargument 0, 0
	lockall
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
