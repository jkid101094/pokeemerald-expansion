KinoGrove_MapScripts::
	.byte 0


KinoGroveRunner::
	lockall
	faceplayer
	msgbox KinoGroveRunner_Text_0
	releaseall
	return


KinoFatMan::
	lockall
	faceplayer
	msgbox KinoFatMan_Text_0
	releaseall
	return


KinoSign::
	lockall
	msgbox KinoSign_Text_0
	releaseall
	return


KinoGroveNurse::
	lock
	faceplayer
	msgbox KinoGroveNurse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq KinoGroveNurse_2
	msgbox KinoGroveNurse_Text_3
KinoGroveNurse_1:
	release
	return

KinoGroveNurse_2:
	msgbox KinoGroveNurse_Text_1
	fadescreen FADE_TO_BLACK
	delay 40
	playfanfare MUS_HEAL
	special HealPlayerParty
	delay 180
	fadescreen FADE_FROM_BLACK
	delay 40
	msgbox KinoGroveNurse_Text_2
	waitmessage
	goto KinoGroveNurse_1


AromaGwen::
	trainerbattle_single TRAINER_GWEN, GwenIntro, GwenLoss
	msgbox PostBattle_Gwen, MSGBOX_AUTOCLOSE
	waitmessage
	return


CollectorKarl::
	trainerbattle_single TRAINER_KARL, KarlIntro, KarlLoss
	msgbox PostBattle_Karl, MSGBOX_AUTOCLOSE
	waitmessage
	return


BugCatcherTegen::
	trainerbattle_single TRAINER_TEGAN, TegenIntro, TegenLoss
	msgbox PostBattle_Tegen, MSGBOX_AUTOCLOSE
	waitmessage
	return


KinoGroveRunner_Text_0:
	.string "Kino Grove is great for exercise!\nThe air here is so fresh!$"

KinoFatMan_Text_0:
	.string "The woods are full of all types of\nPokémon!\pI think I saw a Petilil in there!$"

KinoSign_Text_0:
	.string "-Kino Woods-$"

KinoGroveNurse_Text_0:
	.string "Hello there!\nWould you like me to heal your Pokémon?$"

KinoGroveNurse_Text_1:
	.string "Very well, then!\nI'll just take them for a second...$"

KinoGroveNurse_Text_2:
	.string "All healed!\nStay safe out there!$"

KinoGroveNurse_Text_3:
	.string "Very well.\nStay safe out there!$"

GwenIntro::
	.string "Can you smell the flowers?$"

GwenLoss::
	.string "I suppose it doesn't\nmatter in a battle.$"

PostBattle_Gwen::
	.string "The scent of nature is so captivating.$"

KarlIntro::
	.string "The Clefairy dance.\nI am utterly entranced.\pI have no last line.$"

KarlLoss::
	.string "I have lo- Ah, forget it.$"

PostBattle_Karl::
	.string "Writing haiku takes talent I don't have.$"

TegenIntro::
	.string "Are you afraid of bugs?$"

TegenLoss::
	.string "I'm squashed!$"

PostBattle_Tegen::
	.string "Just keep those repels away from me!$"
