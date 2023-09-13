MtTenou_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HideLaura
	.byte 0


HideLaura::
	removeobject 1
	return


LauraEncounter1::
	lockall
	playbgm MUS_ENCOUNTER_GIRL, FALSE
	addobject 1
	msgbox LauraEncounter1_Text_0
	waitmessage
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

LauraEncounter1_Text_0:
	.string "Laura: Yo, Arles! Waitup!$"

LauraEncounter1_Text_1:
	.string "Phew! Glad I caught up to ya!\nWas starting to think I'd never find\lyou.$"

LauraEncounter1_Text_2:
	.string "I really wish we could have started our\njourneys together, but Nox is SO\limpatient...$"

LauraEncounter1_Text_3:
	.string "She ran on off ahead and then Jordan\n"
	.string "got tired of waiting... Asuka took off\l"
	.string "after Jordan and before I knew it it\l"
	.string "was just me standing there on Route\l"
	.string "1...$"

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
	.string "See you later, Arles!\pTake care, alright?$"

LauraLoseText::
	.string "Haha! Great job, Arles!$"
