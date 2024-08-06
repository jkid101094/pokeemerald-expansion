KinoWoods_MapScripts::
	.byte 0


AsukaEncounter1Left::
	lockall
	playbgm MUS_ENCOUNTER_GIRL, FALSE
	applymovement 1, AsukaSearch
	waitmovement 1
	msgbox AsukaEncounter1Left_Text_0
	waitmessage
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	applymovement 1, AsukaApproachLeft
	waitmovement 1
	msgbox AsukaEncounter1Left_Text_1
	msgbox AsukaEncounter1Left_Text_2
	msgbox AsukaEncounter1Left_Text_3
	msgbox AsukaEncounter1Left_Text_4
	msgbox AsukaEncounter1Left_Text_5
	trainerbattle_no_intro TRAINER_SAWYER_1, AsukaLoseText
	msgbox AsukaEncounter1Left_Text_6
	msgbox AsukaEncounter1Left_Text_7
	msgbox AsukaEncounter1Left_Text_8
	setvar VAR_STORY_PROGRESSION, 4
	applymovement 1, AsukaLeave
	waitmovement 1
	removeobject 1
	setflag FLAG_LAURA_VISIBLE
	setflag FLAG_ASUKA_VISIBLE
	releaseall
	return


AsukaEncounter1Right::
	lockall
	playbgm MUS_ENCOUNTER_GIRL, FALSE
	applymovement 1, AsukaSearch
	waitmovement 1
	msgbox AsukaEncounter1Left_Text_0
	waitmessage
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	applymovement 1, AsukaApproachRight
	waitmovement 1
	msgbox AsukaEncounter1Left_Text_1
	msgbox AsukaEncounter1Left_Text_2
	msgbox AsukaEncounter1Left_Text_3
	msgbox AsukaEncounter1Left_Text_4
	msgbox AsukaEncounter1Left_Text_5
	trainerbattle_no_intro TRAINER_SAWYER_1, AsukaLoseText
	msgbox AsukaEncounter1Left_Text_6
	msgbox AsukaEncounter1Left_Text_7
	msgbox AsukaEncounter1Left_Text_8
	setvar VAR_STORY_PROGRESSION, 4
	applymovement 1, AsukaLeave
	waitmovement 1
	removeobject 1
	setflag FLAG_LAURA_VISIBLE
	setflag FLAG_ASUKA_VISIBLE
	releaseall
	return


AsukaSearch:
	face_left
	delay_16
	face_right
	delay_16
	jump_in_place_up
	delay_16
	step_end

AsukaApproachLeft:
	walk_down
	walk_down
	step_end

AsukaApproachRight:
	walk_right
	walk_down
	walk_down
	step_end

AsukaLeave:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

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
	trainerbattle_single TRAINER_SAWYER_1, BeckIntro, BeckLoss
	msgbox PostBattle_Beck, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerDarren::
	trainerbattle_single TRAINER_SAWYER_1, DarrenIntro, DarrenLoss
	msgbox PostBattle_Darren, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerLen::
	trainerbattle_single TRAINER_SAWYER_1, LenIntro, LenLoss
	msgbox PostBattle_Len, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerKelda::
	trainerbattle_single TRAINER_SAWYER_1, KeldaIntro, KeldaLoss
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


AsukaEncounter1Left_Text_0:
	.string "Jordan? Jordan!?\nWhere are you?$"

AsukaEncounter1Left_Text_1:
	.string "Oh, Arle! You finally got your first\n"
	.string "Pokémon, huh?$"

AsukaEncounter1Left_Text_2:
	.string "Jordan got tired of waiting on you and\n"
	.string "took off. I tried to follow her to make\l"
	.string "sure she was safe, but she disappeared\l"
	.string "too quickly.$"

AsukaEncounter1Left_Text_3:
	.string "I'm getting a little burnt out on\n"
	.string "searching so why don't we have a quick\l"
	.string "battle?$"

AsukaEncounter1Left_Text_4:
	.string "I caught a new teammate on Mt. Tenou\n"
	.string "and I'm dying to let it loose.$"

AsukaEncounter1Left_Text_5:
	.string "It's decided then! Ready or not, Arle!\n"
	.string "Here we come!$"

AsukaEncounter1Left_Text_6:
	.string "It's good to see you're already getting\n"
	.string "the hang of battling. You'll keep your\l"
	.string "rivals sharp, I'm sure.$"

AsukaEncounter1Left_Text_7:
	.string "Anyway I gotta keep looking for Jordan.\n"
	.string "Let's all catch up later, alright?$"

AsukaEncounter1Left_Text_8:
	.string "See ya!$"

KinoWoods_sign1_Text_0:
	.string "NOTICE: Please be on the lookout for lost\nitems.\pIf found please return to the Usagi Bay lost\nand found.\pThank you and watch your step!$"

AsukaLoseText::
	.string "I see you're already coming into\nyour own.$"

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
