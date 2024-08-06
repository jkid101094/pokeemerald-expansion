TenouTownGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TenouTownGym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TenouTownGym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_TENOU_GYM_CAROLANNE
	setflag FLAG_TENOU_GYM_SAMANTHA
	setflag FLAG_TENOU_GYM_CARTER
	setflag FLAG_TENOU_GYM_HARLEY
	return


TenouGymClerk::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE01_GET, TenouGymClerk_2
	msgbox TenouGymClerk_Text_17
	release
	end

TenouGymClerk_1:
	release
PlayerSaidNo:
	msgbox TenouGymClerk_Text_18
	release
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
	msgbox TenouGymClerk_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TenouGymClerk_8
	goto PlayerSaidNo
	goto TenouGymClerk_1

TenouGymClerk_8:
	msgbox TenouGymClerk_Text_5
	waitmessage
	fadescreen FADE_TO_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, GetIntoPosition
	applymovement 8, Upx4
	clearflag FLAG_TENOU_GYM_CAROLANNE
	addobject 9
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 9, NPCTakePlace
	waitmovement 9
	delay 60
	msgbox CarolanneIntro
	trainerbattle_no_intro TRAINER_SAWYER_1, CarolanneLose
	playse SE_APPLAUSE
	msgbox TenouGymClerk_Text_6
	waitmessage
	waitse
	fadescreen FADE_TO_BLACK
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRight
	setflag FLAG_TENOU_GYM_CAROLANNE
	removeobject 9
	clearflag FLAG_TENOU_GYM_SAMANTHA
	addobject 10
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 10, NPCTakePlace
	waitmovement 10
	delay 60
	msgbox SamanthaIntro
	trainerbattle_no_intro TRAINER_SAWYER_1, SamanthaLose
	playse SE_APPLAUSE
	msgbox TenouGymClerk_Text_7
	waitmessage
	waitse
	fadescreen FADE_TO_BLACK
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRight
	setflag FLAG_TENOU_GYM_SAMANTHA
	removeobject 10
	clearflag FLAG_TENOU_GYM_CARTER
	addobject 11
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 11, NPCTakePlace
	waitmovement 11
	delay 60
	msgbox CarterIntro
	trainerbattle_no_intro TRAINER_SAWYER_1, CarterLose
	playse SE_APPLAUSE
	msgbox TenouGymClerk_Text_8
	waitmessage
	waitse
	fadescreen FADE_TO_BLACK
	delay 20
	special HealPlayerParty
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceRight
	setflag FLAG_TENOU_GYM_CARTER
	removeobject 11
	clearflag FLAG_TENOU_GYM_HARLEY
	addobject 12
	fadescreen FADE_FROM_BLACK
	playse SE_DOOR
	applymovement 12, NPCTakePlace
	waitmovement 12
	delay 60
	msgbox HarleyIntro
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
	msgbox TenouGymClerk_Text_10
	waitmessage
	waitse
	msgbox TenouGymClerk_Text_11
	msgbox TenouGymClerk_Text_12
	msgbox TenouGymClerk_Text_13
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	msgbox TenouGymClerk_Text_14
	msgbox TenouGymClerk_Text_15
	msgbox TenouGymClerk_Text_16
	release
	end

TenouGymClerk_12:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_13:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_14:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_15:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_16:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_17:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_18:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11

TenouGymClerk_19:
	trainerbattle_no_intro TRAINER_SAWYER_1, HarleyLose
	goto TenouGymClerk_11


HarleyPostBattle::
	lock
	faceplayer
	msgbox HarleyPostBattle_Text_0
	release
	return


TenouGymNPC1::
	lock
	faceplayer
	msgbox TenouGymNPC1_Text_0
	release
	return


TenouGymNPC2::
	lock
	faceplayer
	msgbox TenouGymNPC2_Text_0
	release
	return


TenouGymNPC3::
	lock
	faceplayer
	msgbox TenouGymNPC3_Text_0
	release
	return


TenouGymNPC4::
	lock
	faceplayer
	msgbox TenouGymNPC4_Text_0
	release
	return


TenouGymNPC5::
	lock
	faceplayer
	msgbox TenouGymNPC5_Text_0
	release
	return


TenouGymNPC6::
	lock
	faceplayer
	msgbox TenouGymNPC6_Text_0
	release
	return


TenouGymNPC7::
	lock
	faceplayer
	msgbox TenouGymNPC7_Text_0
	release
	return


PlayerFaceRight:
	face_right
	step_end

PlayerResume:
	walk_left
	face_right
	step_end

GetIntoPosition:
	walk_left
	walk_up
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
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	face_player
	step_end

PlayerApproach:
	walk_right
	step_end

NPCApproach:
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
	.string "glorious head chef!$"

TenouGymClerk_Text_4:
	.string "How about it?\nStill ready to take the challenge?$"

TenouGymClerk_Text_5:
	.string "Well then! Take your place to the left\n"
	.string "of the room and I'll go grab your first\l"
	.string "dish!$"

TenouGymClerk_Text_6:
	.string "Clerk: And our challenger clears the\nfirst course!\lWhat potential lies within her?$"

TenouGymClerk_Text_7:
	.string "Clerk: And our challenger clears the\nsecond course!\pCan she be stopped!?$"

TenouGymClerk_Text_8:
	.string "Clerk: And our challenger topples the\nthird course!\pYou know what that means!\nTime for the main event!\pBut first a meal for the Pokémon!$"

TenouGymClerk_Text_9:
	.string "Clerk: Our challenger has done it!\nThe head chef is down in a HUGE\lupset! Can you believe it, folks?$"

TenouGymClerk_Text_10:
	.string "Let's hear it for our winner today, Arle!$"

TenouGymClerk_Text_11:
	.string "As much as it sucks to say; you've beat\n"
	.string "me, so you've earned your badge.$"

TenouGymClerk_Text_12:
	.string "As gym leader of Tenou City I confer\n"
	.string "unto you, the Zest Badge!.$"

TenouGymClerk_Text_13:
	.string "Arle recieved the Zest Badge from\nHarley!$"

TenouGymClerk_Text_14:
	.string "With that you have officially conqured\n"
	.string "the Tenou City gym! Congratulations!$"

TenouGymClerk_Text_15:
	.string "If I were you, I'd hop aboard the cable\n"
	.string "car and head for Shingo City next.$"

TenouGymClerk_Text_16:
	.string "Good luck on the rest of your\n"
	.string "challenge!$"

TenouGymClerk_Text_17:
	.string "Thank you for stopping by!\nWe don't accept repeat challengers,\lbut please dine with us sometime!$"

TenouGymClerk_Text_18:
	.string "Very well.\nFeel free to return to dine with us\lanytime!$"

HarleyPostBattle_Text_0:
	.string "Harley: Good luck on the rest of your\n"
	.string "gym challenge!$"

TenouGymNPC1_Text_0:
	.string "Gym leaders in this region don't focus\n"
	.string "on types, but themes.\p"
	.string "I hear Harley focuses on food and big\n"
	.string "eaters, for example.$"

TenouGymNPC2_Text_0:
	.string "My boyfriend brought me here on a date,\n"
	.string "but he's too busy gawking at the\l"
	.string "waitresses to notice me!\p"
	.string "Oh well. He's still better than my ex.$"

TenouGymNPC3_Text_0:
	.string "Whoa ho! Isn't Harley just the cutest?$"

TenouGymNPC4_Text_0:
	.string "I came here for a meal, but apparently\n"
	.string "the make a show of gym challengers\l"
	.string "here too.\p"
	.string "I couldn't do that. I'd get stage\n"
	.string "fright!$"

TenouGymNPC5_Text_0:
	.string "This is my first time dining here, but\n"
	.string "this place is really swell.\p"
	.string "The air conditioning is the best part!$"

TenouGymNPC6_Text_0:
	.string "The food here almost makes trekking up\n"
	.string "a volcano worth it. ALMOST.$"

TenouGymNPC7_Text_0:
	.string "You gotta respect the moxie of the\n"
	.string "staff here. Holding a job on top of\l"
	.string "being gym trainers must be a lot of\l"
	.string "work. Makes my nine to five look like a\l"
	.string "cakewalk...$"

CarolanneIntro::
	.string "I'm a feast for the eyes who makes\nfeasts for your thighs!$"

CarolanneLose::
	.string "Guess your eyes weren't focused on\nme...$"

SamanthaIntro::
	.string "I'm a five-star chef with a\nfive-star wanted level!$"

SamanthaLose::
	.string "And now I'm a five-star chef\nwith a five-star loss streak...$"

CarterIntro::
	.string "I'm hungry for battles! I'm insatiable!$"

CarterLose::
	.string "For once I've had my fill.$"

HarleyIntro::
	.string "Harley: I must say, I'm impressed you \npassed my little gauntlet.\pHowever, your win streak ends here!\nI'm Harley, the fire of Mt. Tenou!\pAs the leader here, I accept your\nchallenge!\pCan you handle the heat of my kitchen?$"

HarleyLose::
	.string "I must admit.\nThe taste of defeat is... bitter sweet.$"
