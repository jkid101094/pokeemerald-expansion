LittlerootTown_MapScripts::
	.byte 0


RegidragoEncounter::
	lockall
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_ENCOUNTER
	msgbox RegidragoEncounter_Text_0
	setwildbattle SPECIES_REGIDRAGO, 15, item = ITEM_NONE
	waitmoncry
	dowildbattle
	releaseall
	return


RegielekiEncounter::
	lockall
	playmoncry SPECIES_REGIELEKI, CRY_MODE_ENCOUNTER
	msgbox RegidragoEncounter_Text_0
	setwildbattle SPECIES_REGIELEKI, 15, item = ITEM_NONE
	waitmoncry
	dowildbattle
	releaseall
	return


RegigigasEncounter::
	lockall
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
	msgbox RegidragoEncounter_Text_0
	setwildbattle SPECIES_REGIGIGAS, 15, item = ITEM_NONE
	waitmoncry
	dowildbattle
	releaseall
	return


RegidragoEncounter_Text_0:
	.string "Gi gi gi gi!$"
