MtTenou_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HideLaura
	.byte 0


HideLaura::
	setflag FLAG_LAURA_VISIBLE
	return


LauraEncounter1::
	lockall
	playbgm MUS_ENCOUNTER_GIRL, FALSE
	clearflag FLAG_LAURA_VISIBLE
	msgbox LauraEncounter1_Text_0
	waitmessage
	clearflag FLAG_LAURA_VISIBLE
	addobject 1
	applymovement 1, LauraCome
	applymovement OBJ_EVENT_ID_PLAYER, ArleFaceDown
	waitmovement 1
	msgbox LauraEncounter1_Text_1
	msgbox LauraEncounter1_Text_2
	msgbox LauraEncounter1_Text_3
	msgbox LauraEncounter1_Text_4
	msgbox LauraEncounter1_Text_5
	msgbox LauraEncounter1_Text_6
	trainerbattle_no_intro TRAINER_LAURA_1, LauraLoseText
	msgbox LauraEncounter1_Text_7
	msgbox LauraEncounter1_Text_8
	setvar VAR_STORY_PROGRESSION, 4
	applymovement 1, LauraGo
	waitmovement 1
	removeobject 1
	setflag FLAG_LAURA_VISIBLE
	setflag FLAG_ASUKA_VISIBLE
	releaseall
	return


LauraCome:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

ArleFaceDown:
	face_down
	step_end

LauraGo:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

HikerGustaf::
	trainerbattle_single TRAINER_GUSTAF, GustafIntro, GustafLoss
	msgbox PostBattle_Gustaf, MSGBOX_AUTOCLOSE
	waitmessage
	return


LadyOlivia::
	trainerbattle_single TRAINER_OLIVIA, OliviaIntro, OliviaLoss
	msgbox PostBattle_Olivia, MSGBOX_AUTOCLOSE
	waitmessage
	return


HikerFoster::
	trainerbattle_single TRAINER_FOSTER, FosterIntro, FosterLoss
	msgbox PostBattle_Foster, MSGBOX_AUTOCLOSE
	waitmessage
	return


CollectorJulian::
	trainerbattle_single TRAINER_JULIAN, JulianIntro, JulianLoss
	msgbox PostBattle_Julian, MSGBOX_AUTOCLOSE
	waitmessage
	return


MtTenou_Item_Ball_Stone_Plate::
	lockall
	giveitem ITEM_STONE_PLATE, [ 1 ]
	setflag FLAG_MT_TENOU_STONE_PLATE
	removeobject 10
	releaseall
	return


MtTennou_Item_Ball_TM39::
	lockall
	giveitem ITEM_TM39_ROCK_TOMB, [ 1 ]
	setflag FLAG_MT_TENOU_TM39
	removeobject 9
	releaseall
	return


MtTennou_Item_Ball_TM31::
	lockall
	giveitem ITEM_TM31_BRICK_BREAK, [ 1 ]
	setflag FLAG_MT_TENOU_TM31
	removeobject 11
	releaseall
	return


TenouSign::
	lockall
	msgbox TenouSign_Text_0
	releaseall
	return


LauraEncounter1_Text_0:
	.string "Laura: Yo, Arles! Waitup!$"

LauraEncounter1_Text_1:
	.string "Phew! Glad I caught up to ya!\nWas starting to think I'd never find\lyou.$"

LauraEncounter1_Text_2:
	.string "I really wish we could have started our\njourneys together, but Nox is SO\limpatient...$"

LauraEncounter1_Text_3:
	.string "She ran on off ahead and then Jordan\n"
	.string "got tired of waiting... Asuka took off\l"
	.string "after Jordan and before I knew it I was\l"
	.string "the only one left standing there on\l"
	.string "Route 1...$"

LauraEncounter1_Text_4:
	.string "Ah, who needs that sentimental stuff\n"
	.string "anyways, right? Besides, I can tell\l"
	.string "you're starting to zone out. So how\l"
	.string "about we have some fun with a battle?$"

LauraEncounter1_Text_5:
	.string "Gotta warn ya, though. I caught a sweet\n"
	.string "new Pokémon in that forest over there!$"

LauraEncounter1_Text_6:
	.string "You ready, Arles? OK! Let's go!$"

LauraEncounter1_Text_7:
	.string "I guess I've still got some training to\n"
	.string "do, huh?\p"
	.string "Guess I'll put my energy towards\n"
	.string "leveling up for now.$"

LauraEncounter1_Text_8:
	.string "See you later, Arles!\nTake care, alright?$"

TenouSign_Text_0:
	.string "-MT. TENOU-\nThe Apex of Albastia.$"

LauraLoseText::
	.string "Haha! Great job, Arles!$"

GustafIntro::
	.string "Mt. Tenou is the tallest mountain in\nthis region, but did you know it's\lactually TWO volcanos?$"

GustafLoss::
	.string "Looks like you're erupting too!$"

PostBattle_Gustaf::
	.string "They say Mt. Tenou won't erupt again\nfor thousands of years, but if it did, it\lwould end all life in the region.\pThat's scary to think about!$"

OliviaIntro::
	.string "I just LOVE big Pokémon!\nWho's your biggest one?$"

OliviaLoss::
	.string "I guess the bigger they are, the harder\nthey fall...$"

PostBattle_Olivia::
	.string "I wonder what the biggest Pokémon of\nall is...$"

FosterIntro::
	.string "Caught me a wee little lad, I did.\nWould you like to meet him?$"

FosterLoss::
	.string "Aye...\nGuess you weren't down for a play date...$"

PostBattle_Foster::
	.string "Care for a spot of tea, lass?\nNo? Fine. More for us.$"

JulianIntro::
	.string "Hehe... Want to see my collection?$"

JulianLoss::
	.string "But they were mint condition!$"

PostBattle_Julian::
	.string "Do you know how much I paid for\nthese?$"
