KinoVillage_MapScripts::
	.byte 0


KinoVillageGardener::
	lockall
	faceplayer
	showmoneybox 0, 0
	msgbox KinoVillageGardener_Text_0
	msgbox KinoVillageGardener_Text_1
	msgbox KinoVillageGardener_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq KinoVillageGardener_2
	msgbox KinoVillageGardener_Text_5
KinoVillageGardener_1:
	hidemoneybox
	releaseall
	return

KinoVillageGardener_2:
	checkmoney 1000
	compare VAR_RESULT, TRUE
	goto_if_eq KinoVillageGardener_5
	msgbox KinoVillageGardener_Text_4
	goto KinoVillageGardener_1

KinoVillageGardener_5:
	removemoney 1000
	playse SE_SHOP
	waitse
	giveitem ITEM_PEAT_BLOCK, [ 1 ]
	msgbox KinoVillageGardener_Text_3
	goto KinoVillageGardener_1


KinoVillageGameboy::
	lockall
	msgbox KinoVillageGameboy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq KinoVillageGameboy_2
	msgbox KinoVillageGameboy_Text_2
KinoVillageGameboy_1:
	releaseall
	return

KinoVillageGameboy_2:
	msgbox KinoVillageGameboy_Text_1
	goto KinoVillageGameboy_1


KinoVillageArtist::
	lockall
	faceplayer
	msgbox KinoVillageArtist_Text_0
	releaseall
	return


KinoVillageBoy::
	lockall
	faceplayer
	msgbox KinoVillageBoy_Text_0
	releaseall
	return


KinoVillage_sign1::
	lockall
	msgbox KinoVillage_sign1_Text_0
	releaseall
	return


KinoVillage_sign2::
	lockall
	msgbox KinoVillage_sign2_Text_0
	releaseall
	return


KinoVillage_sign3::
	lockall
	msgbox KinoVillage_sign3_Text_0
	releaseall
	return


KinoVillage_gym_sign::
	lockall
	msgbox KinoVillage_gym_sign_Text_0
	releaseall
	return


KinoVillage_HM::
	lockall
	giveitem ITEM_TM09_BULLET_SEED, [ 1 ]
	setflag FLAG_KINOVILLAGE_HM
	removeobject 2
	releaseall
	return


KinoVillageGardener_Text_0:
	.string "The berries in my garden here tend to\n"
	.string "grow up so healthy.$"

KinoVillageGardener_Text_1:
	.string "In fact they're so impressive that\n"
	.string "people actually pay me for the soil.\p"
	.string "Can you believe that?$"

KinoVillageGardener_Text_2:
	.string "How about it? I'll sell you a Peat Block\nfor ¥1000.$"

KinoVillageGardener_Text_3:
	.string "Here you go!\n"
	.string "Hope you enjoy it!$"

KinoVillageGardener_Text_4:
	.string "Hey! You can't scam me! Come back with\n"
	.string "more cash!$"

KinoVillageGardener_Text_5:
	.string "I see...\n"
	.string "Well come back if you want some\l"
	.string "delicious dirt!$"

KinoVillageGameboy_Text_0:
	.string "Hey, have you ever played this cool\ngame called Fire Emblem?$"

KinoVillageGameboy_Text_1:
	.string "It's cool, right?\n"
	.string "Tiki is the best!$"

KinoVillageGameboy_Text_2:
	.string "No? That's lame.\nYou're lame.$"

KinoVillageArtist_Text_0:
	.string "Kino Village is pretty spectacular,\n"
	.string "wouldn't you agree?$"

KinoVillageBoy_Text_0:
	.string "The city is nice and all, but a quaint\n"
	.string "village like this has its charm too!$"

KinoVillage_sign1_Text_0:
	.string "Kino Village: The secret forest\n"
	.string "retreat.$"

KinoVillage_sign2_Text_0:
	.string "Trainer Tips:$"

KinoVillage_sign3_Text_0:
	.string "-Kino Village Rest Center-$"

KinoVillage_gym_sign_Text_0:
	.string "Kino Gym - Lead by Aiza the Beauty\n"
	.string "Queen!$"
