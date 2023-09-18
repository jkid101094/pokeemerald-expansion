TenouTownGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TenouTownGym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TenouTownGym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TENOU_GYM_CAROLANNE
	removeobject 9
	setflag FLAG_TENOU_GYM_SAMANTHA
	removeobject 10
	setflag FLAG_TENOU_GYM_CARTER
	removeobject 11
	setflag FLAG_TENOU_GYM_HARLEY
	removeobject 12
	return


TenouGymClerk::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, TenouGymClerk_2
	msgbox TenouGymClerk_Text_10
TenouGymClerk_1:
	release
PlayerSaidNo:
	msgbox TenouGymClerk_Text_11
	return

TenouGymClerk_2:
	msgbox TenouGymClerk_Text_0
	msgbox TenouGymClerk_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TenouGymClerk_5
	goto PlayerSaidNo
	goto TenouGymClerk_1

TenouGymClerk_5:
	msgbox TenouGymClerk_Text_2
	msgbox TenouGymClerk_Text_3
	msgbox TenouGymClerk_Text_4
	compare VAR_RESULT, YES
	goto_if_eq TenouGymClerk_8
	goto PlayerSaidNo
	goto TenouGymClerk_1

TenouGymClerk_8:
	msgbox TenouGymClerk_Text_5
	waitmessage
	fadescreen FADE_TO_BLACK
	delay 20
	warpsilent MAP_TENOU_TOWN_GYM, 10, 9
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRight
	applymovement 8, Upx4
	clearflag FLAG_TENOU_GYM_CAROLANNE
	addobject 9
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 9, NPCTakePlace
	waitmovement 9
	applymovement 9, NPCApproach
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproach
	waitmovement 9
	delay 60
	trainerbattle_single TRAINER_CAROLANNE, CarolanneIntro, CarolanneLose
	playse SE_APPLAUSE
	msgbox TenouGymClerk_Text_6
	waitmessage
	waitse
	fadescreen FADE_TO_BLACK
	delay 20
	warpsilent MAP_TENOU_TOWN_GYM, 10, 9
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRight
	setflag FLAG_TENOU_GYM_CAROLANNE
	removeobject 9
	clearflag FLAG_TENOU_GYM_SAMANTHA
	addobject 10
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 10, NPCTakePlace
	waitmovement 10
	applymovement 10, NPCApproach
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproach
	waitmovement 10
	delay 60
	trainerbattle_single TRAINER_SAMANTHA, SamanthaIntro, SamanthaLose
	playse SE_APPLAUSE
	msgbox TenouGymClerk_Text_7
	waitmessage
	waitse
	fadescreen FADE_TO_BLACK
	delay 20
	warpsilent MAP_TENOU_TOWN_GYM, 10, 9
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRight
	applymovement 8, Upx4
	setflag FLAG_TENOU_GYM_SAMANTHA
	removeobject 10
	clearflag FLAG_TENOU_GYM_CARTER
	addobject 11
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 11, NPCTakePlace
	waitmovement 11
	applymovement 11, NPCApproach
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproach
	waitmovement 11
	delay 60
	trainerbattle_single TRAINER_CARTER, CarterIntro, CarterLose
	playse SE_APPLAUSE
	msgbox TenouGymClerk_Text_8
	waitmessage
	waitse
	fadescreen FADE_TO_BLACK
	delay 20
	special HealPlayerParty
	warpsilent MAP_TENOU_TOWN_GYM, 10, 9
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRight
	setflag FLAG_TENOU_GYM_CARTER
	removeobject 11
	clearflag FLAG_TENOU_GYM_HARLEY
	addobject 12
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 12, NPCTakePlace
	waitmovement 12
	applymovement 12, NPCApproach
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproach
	waitmovement 12
	delay 60
	compare VAR_BADGES_OBTAINED, 0
	goto_if_eq TenouGymClerk_12
	compare VAR_BADGES_OBTAINED, 1
	goto_if_eq TenouGymClerk_13
	compare VAR_BADGES_OBTAINED, 2
	goto_if_eq TenouGymClerk_14
	compare VAR_BADGES_OBTAINED, 3
	goto_if_eq TenouGymClerk_15
	compare VAR_BADGES_OBTAINED, 4
	goto_if_eq TenouGymClerk_16
	compare VAR_BADGES_OBTAINED, 5
	goto_if_eq TenouGymClerk_17
	compare VAR_BADGES_OBTAINED, 6
	goto_if_eq TenouGymClerk_18
	compare VAR_BADGES_OBTAINED, 7
	goto_if_eq TenouGymClerk_19
TenouGymClerk_11:
	playse SE_APPLAUSE
	msgbox TenouGymClerk_Text_9
	waitmessage
	waitse
	goto TenouGymClerk_1

TenouGymClerk_12:
	trainerbattle_single TRAINER_HARLEY_1, HarleyIntro, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_13:
	trainerbattle_single TRAINER_HARLEY_2, HarleyIntro, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_14:
	trainerbattle_single TRAINER_HARLEY_3, HarleyIntro, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_15:
	trainerbattle_single TRAINER_HARLEY_4, HarleyIntro, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_16:
	trainerbattle_single TRAINER_HARLEY_5, HarleyIntro, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_17:
	trainerbattle_single TRAINER_HARLEY_6, HarleyIntro, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_18:
	trainerbattle_single TRAINER_HARLEY_7, HarleyIntro, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_19:
	trainerbattle_single TRAINER_HARLEY_8, HarleyIntro, HarleyLose
	goto TenouGymClerk_11


PlayerFaceRight:
	face_right
	step_end

Upx4:
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

NPCTakePlace:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

PlayerApproach:
	walk_right
	walk_right
	walk_right
	step_end

NPCApproach:
	walk_left
	walk_left
	walk_left
	step_end

TenouGymClerk_Text_0:
	.string "Clerk: Hello!\nWill you be dining with us today?\lOr are you perhaps a trainer?$"

TenouGymClerk_Text_1:
	.string "Would you like to partake in the gym\nchallenge?$"

TenouGymClerk_Text_2:
	.string "Very well! Here in Tenou Town we offer\n"
	.string "an all you can beat buffet!$"

TenouGymClerk_Text_3:
	.string "Take on three challengers in a row\n"
	.string "without healing, and you can face our\l"
	.string "florious head chef!$"

TenouGymClerk_Text_4:
	.string "How about it?\n"
	.string "Still ready to take the challenge?$"

TenouGymClerk_Text_5:
	.string "Well then! Take your place to the left\n"
	.string "of the room and I'll go grab your first\l"
	.string "dish!$"

TenouGymClerk_Text_6:
	.string "Clerk: And our challenger clears the\nfirst course!\lWhat potential lies within our challenger?$"

TenouGymClerk_Text_7:
	.string "Clerk: And our challenger clears the\nsecond course!\pWhat a thrilling bout!$"

TenouGymClerk_Text_8:
	.string "Clerk: And our challenger topples the\nthird course!\pYou know what that means!\nTime for the main event\pBut first a meal for the Pokémon!$"

TenouGymClerk_Text_9:
	.string "Clerk: Our challenger has done it!\nThe head chef is down in a HUGE\lupset! Can you believe it, folks?$"

TenouGymClerk_Text_10:
	.string "Thank you for stopping by!\nWe don't accept repeat challengers,\lbut please dine with us sometime!$"

TenouGymClerk_Text_11:
	.string "Very well.\nFeel free to return to dine with us\lanytime!$"

CarolanneIntro::
	.string "I'm a feast for the eyes who makes\nfeasts for your thighs!$"

CarolanneLose::
	.string "Guess your eyes weren't focused on\nme...$"

SamanthaIntro::
	.string "I'm a five-star chef with a\nfive-star wanted level!$"

SamanthaLose::
	.string "And now I'm a five-star chef\nwith a five loss streak...$"

CarterIntro::
	.string "I'm hungry for battles! I'm insatiable!$"

CarterLose::
	.string "For once I've had my fill.$"

HarleyIntro::
	.string "I must say, I'm impressed you passed my\nlittle gauntlet.\pHowever, your win streak ends here!\nI'm Harley, the fire of Mt. Tenou!\pAs the leader here, I accept your\nchallenge!\pCan you handle the heat of my kitchen?$"

HarleyLose::
	.string "I must admit.\nThe taste of defeat is... bitter sweet.$"
