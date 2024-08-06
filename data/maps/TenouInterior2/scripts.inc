TenouInterior2_MapScripts::
	.byte 0


TrainerGunter::
	trainerbattle_single TRAINER_SAWYER_1, GunterIntro, GunterLoss
	msgbox PostBattle_Gunter, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerJenette::
	trainerbattle_single TRAINER_SAWYER_1, JenetteIntro, JenetteLoss
	msgbox PostBattle_Jenette, MSGBOX_AUTOCLOSE
	waitmessage
	return


MushroomGuy::
	lockall
	faceplayer
	goto_if_set FLAG_MUSHROOM_POKEMON_TAKEN, MushroomGuy_2
	goto_if_set FLAG_MUSHROOM_MAN_TALKED_TO, MushroomGuy_5
	setflag FLAG_MUSHROOM_MAN_TALKED_TO
	msgbox MushroomGuy_Text_6
	msgbox MushroomGuy_Text_7
	playmoncry SPECIES_MORELULL, CRY_MODE_NORMAL
	showmonpic SPECIES_MORELULL, 10, 3
	waitmoncry
	msgbox MushroomGuy_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MushroomGuy_11
	hidemonpic
	msgbox MushroomGuy_Text_9
MushroomGuy_1:
	releaseall
	return

MushroomGuy_2:
	msgbox MushroomGuy_Text_0
	goto MushroomGuy_1

MushroomGuy_5:
	msgbox MushroomGuy_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MushroomGuy_8
	hidemonpic
	msgbox MushroomGuy_Text_5
	goto MushroomGuy_1

MushroomGuy_8:
	hidemonpic
	givemon SPECIES_MORELULL, 10, [ ITEM_BIG_MUSHROOM ]
	playfanfare MUS_OBTAIN_ITEM
	msgbox MushroomGuy_Text_2, MSGBOX_AUTOCLOSE
	waitfanfare
	setflag FLAG_MUSHROOM_POKEMON_TAKEN
	msgbox MushroomGuy_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MushroomGuy_15
MushroomGuy_14:
	msgbox MushroomGuy_Text_4
	goto MushroomGuy_1

MushroomGuy_11:
	hidemonpic
	givemon SPECIES_MORELULL, 10, [ ITEM_BIG_MUSHROOM ]
	playfanfare MUS_OBTAIN_ITEM
	msgbox MushroomGuy_Text_2, MSGBOX_AUTOCLOSE
	waitfanfare
	setflag FLAG_MUSHROOM_POKEMON_TAKEN
	msgbox MushroomGuy_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MushroomGuy_18
MushroomGuy_17:
	msgbox MushroomGuy_Text_4
	goto MushroomGuy_1

MushroomGuy_15:
	call Common_EventScript_NameReceivedPartyMon
	goto MushroomGuy_14

MushroomGuy_18:
	call Common_EventScript_NameReceivedPartyMon
	goto MushroomGuy_17


MushroomGuy_Text_0:
	.string "Hello again, friend! How's my Morelull\n"
	.string "doing?$"

MushroomGuy_Text_1:
	.string "Oh! It's you again!\n"
	.string "Come to take my mushroom?$"

MushroomGuy_Text_2:
	.string "You recieved the Morelull!$"

MushroomGuy_Text_3:
	.string "Give the Morelull a nickname?$"

MushroomGuy_Text_4:
	.string "Thanks for taking it off my hands!\n"
	.string "Just don't eat it, OK?$"

MushroomGuy_Text_5:
	.string "Still no? OK. Suit yourself!$"

MushroomGuy_Text_6:
	.string "Me? A trainer? Heavens no!\n"
	.string "I just came to sample this cave's fine,\l"
	.string "delicate mushrooms!$"

MushroomGuy_Text_7:
	.string "That reminds me... I found this mushroom\n"
	.string "awhile back. I don't think it's edible,\l"
	.string "so you can take it.$"

MushroomGuy_Text_8:
	.string "How about it? Wanna take this thing off\n"
	.string "my hands? It's free!$"

MushroomGuy_Text_9:
	.string "Fine, then. I'll keep it.\n"
	.string "Maybe I can put it in a stew or\l"
	.string "something.$"

GunterIntro::
	.string "I came in this cave to rest,\nbut there are monsters everywhere!$"

GunterLoss::
	.string "What? You mean they're just Pokémon?$"

PostBattle_Gunter::
	.string "Hahaha! I knew that!\nI wasn't scared at all!$"

JenetteIntro::
	.string "Teeheehe...\nDo you believe in ghosts, little girl?$"

JenetteLoss::
	.string "Looks like I'm busted!$"

PostBattle_Jenette::
	.string "Kekeke!\nYou best know who to call when you're\lall alone!$"
