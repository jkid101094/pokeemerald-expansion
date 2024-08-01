KinoWoods::
	.byte 0


AsukaEncounter1::
	lockall
	playbgm MUS_ENCOUNTER_GIRL, FALSE
	msgbox AsukaEncounter1_Text_0
	waitmessage
	releaseall
	return


KinoWoods_sign1::
	lockall
	msgbox KinoWoods_sign1_Text_0
	releaseall
	return


KinoWoods_sign2::
	lockall
	msgbox KinoWoods_sign1_Text_0
	releaseall
	return


KinoWoods_sign3::
	lockall
	msgbox KinoWoods_sign1_Text_0
	releaseall
	return


KinoWoods_sign4::
	lockall
	msgbox KinoWoods_sign1_Text_0
	releaseall
	return


TrainerBeck::
	trainerbattle_single TRAINER_BECK, BeckIntro, BeckLoss
	msgbox PostBattle_Beck, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerDarren::
	trainerbattle_single TRAINER_Darren, DarrenIntro, DarrenLoss
	msgbox PostBattle_Darren, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerLen::
	trainerbattle_single TRAINER_LEN, LenIntro, LenLoss
	msgbox PostBattle_Len, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerKelda::
	trainerbattle_single TRAINER_KELDA, KeldaIntro, KeldaLoss
	msgbox PostBattle_Kelda, MSGBOX_AUTOCLOSE
	waitmessage
	return


KinoWoods_Item_Ball_Rare_Candy::
	lockall
	giveitem ITEM_NUGGET, [ 1 ]
	setflag FLAG_KINOWOODS_NUGGET
	removeobject 7
	releaseall
	return


Route1_Item_Ball_Sceptilite::
	lockall
	giveitem ITEM_SCEPTILITE, [ 1 ]
	setflag FLAG_KINOWOODS_SCEPTILITE
	removeobject 6
	releaseall
	return


AsukaEncounter1_Text_0:
	.string "Jordan? Jordan!?\nWhere are you?$"

KinoWoods_sign1_Text_0:
	.string "NOTICE: Please be on the lookout for lost\nitems.\pIf found please return to the Usagi Bay lost\nand found.\pThank you and watch your step!$"

BeckIntro::
	.string "Get ready, peon!\nThe Beckoning is nigh!$"

BeckLoss::
	.string "Curses! Foiled again!$"

PostBattle_Beck::
	.string "Just you wait, you goody two\nshoes...\pBeck will rise again!$"

DarrenIntro::
	.string "Have you spoken to that guy by\nthe entrance? I think he's nuts!$"

DarrenLoss::
	.string "Aww! My Castcoon!$"

PostBattle_Darren::
	.string "I'd honestly feel better if that\nguy would just leave...$"

LenIntro::
	.string "You think you're ready?\nI'll be the judge of that!$"

LenLoss::
	.string "Drat!\nSquashed again!$"

PostBattle_Len::
	.string "Ready for what?\nWhat lies ahead, of course!$"

KeldaIntro::
	.string "You won't make a monkey out of me!$"

KeldaLoss::
	.string "Ooo ooo eee eee!$"

PostBattle_Kelda::
	.string "Ugh! So embarassing!$"
