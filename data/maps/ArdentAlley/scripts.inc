ArdentAlley_MapScripts::
	.byte 0


LassAlisa::
	trainerbattle_single TRAINER_SAWYER_1, AlisaIntro, AlisaLoss
	msgbox PostBattle_Alisa, MSGBOX_AUTOCLOSE
	return


HikerMarco::
	trainerbattle_single TRAINER_SAWYER_1, MarcoIntro, MarcoLoss
	msgbox PostBattle_Marco, MSGBOX_AUTOCLOSE
	return


ArdentAlley_Item_Ball_Choice_Scarf::
	lockall
	giveitem ITEM_CHOICE_SCARF, [ 1 ]
	setflag FLAG_ARDENT_ALLEY_CHOICE_SCARF
	removeobject 2
	releaseall
	return


ArdentAlleyNurse::
	lock
	faceplayer
	msgbox ArdentAlleyNurse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq ArdentAlleyNurse_2
	msgbox ArdentAlleyNurse_Text_3
ArdentAlleyNurse_1:
	release
	return

ArdentAlleyNurse_2:
	msgbox ArdentAlleyNurse_Text_1
	fadescreen FADE_TO_BLACK
	delay 40
	playfanfare MUS_HEAL
	special HealPlayerParty
	delay 180
	fadescreen FADE_FROM_BLACK
	delay 40
	msgbox ArdentAlleyNurse_Text_2
	waitmessage
	goto ArdentAlleyNurse_1


ArdentAlleyNurse_Text_0:
	.string "Hello there!\nWould you like me to heal your Pokémon?$"

ArdentAlleyNurse_Text_1:
	.string "Very well, then!\nI'll just take them for a second...$"

ArdentAlleyNurse_Text_2:
	.string "All healed!\nStay safe out there!$"

ArdentAlleyNurse_Text_3:
	.string "Very well.\nStay safe out there!$"

AlisaIntro::
	.string "Gulpin are SO CUTE!\nDon't you agree?$"

AlisaLoss::
	.string "Still cute, though.$"

PostBattle_Alisa::
	.string "Gulpin were born for contests,\nnot battles!$"

MarcoIntro::
	.string "Sorry, girlie.\nBut you gotta be REAL MANLY to take\lthis heat!$"

MarcoLoss::
	.string "My manly Pokémon!$"

PostBattle_Marco::
	.string "Guess you're more manly than you look...$"
