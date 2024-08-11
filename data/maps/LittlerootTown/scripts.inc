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


GiveHitmonchan::
	lockall
	msgbox GiveHitmonchan_Text_0
	givemon SPECIES_HITMONCHAN_FEMALE, 25, [ ITEM_PUNCHING_GLOVE ]
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveHitmonchan_Text_1
	releaseall
	return


RegidragoEncounter_Text_0:
	.string "Gi gi gi gi!$"

GiveHitmonchan_Text_0:
	.string "This is a test script.\nHave a free Hitmonchan.$"

GiveHitmonchan_Text_1:
	.string "You recieved the Hitmonchan!$"
