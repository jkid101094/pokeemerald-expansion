TerraDen1_MapScripts::
	.byte 0


Zygarde10Encounter::
	lockall
	msgbox Zygarde10Encounter_Text_0
	playmoncry SPECIES_ZYGARDE_10_AURA_BREAK, CRY_MODE_ENCOUNTER
	msgbox Zygarde10Encounter_Text_1
	setwildbattle SPECIES_ZYGARDE_10_AURA_BREAK, 15, item = ITEM_NONE
	delay 40
	waitmoncry
	setflag FLAG_NO_CATCHING
	dowildbattle
	releaseall
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Zygarde10Encounter_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Zygarde10Encounter_3
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zygarde10Encounter_4
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zygarde10Encounter_5
	clearflag FLAG_NO_CATCHING
Zygarde10Encounter_1:
	waitmessage
	releaseall
	return

Zygarde10Encounter_2:
	call Won_or_Caught
	goto Zygarde10Encounter_1

Zygarde10Encounter_3:
	call Won_or_Caught
	goto Zygarde10Encounter_1

Zygarde10Encounter_4:
	call RanAway
	goto Zygarde10Encounter_1

Zygarde10Encounter_5:
	call RanAway
	goto Zygarde10Encounter_1


Won_or_Caught::
	clearflag FLAG_NO_CATCHING
	return


RanAway::
	clearflag FLAG_NO_CATCHING
	return


Zygarde10Encounter_Text_0:
	.string "Suddenly a mass of green energy\n"
	.string "appears before you!$"

Zygarde10Encounter_Text_1:
	.string "Zzzz-dddd-aaaaaa!$"
