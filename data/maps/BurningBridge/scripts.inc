BurningBridge_MapScripts::
	.byte 0


YoungsterTimmothy::
	goto_if_unset FLAG_BURNING_BRIDGE_ROCKY_HELMET, YoungsterTimmothy_1
	trainerbattle_single TRAINER_SAWYER_1, TimmothyBadIntro, TimmothyBadLoss
	msgbox PostBattle_TimmothyBad, MSGBOX_AUTOCLOSE
	return

YoungsterTimmothy_1:
	trainerbattle_single TRAINER_SAWYER_1, TimmothyIntro, TimmothyLoss
	msgbox PostBattle_Timmothy, MSGBOX_AUTOCLOSE
	return


HikerWalt::
	goto_if_unset FLAG_BURNING_BRIDGE_ROCKY_HELMET, HikerWalt_1
	trainerbattle_single TRAINER_SAWYER_1, WaltBadIntro, WaltBadLoss
	msgbox PostBattle_WaltBad, MSGBOX_AUTOCLOSE
	return

HikerWalt_1:
	trainerbattle_single TRAINER_SAWYER_1, WaltIntro, WaltLoss
	msgbox PostBattle_Walt, MSGBOX_AUTOCLOSE
	return


BurningBridge_Item_Ball_Rocky_Helmet::
	lockall
	giveitem ITEM_ROCKY_HELMET, [ 1 ]
	setflag FLAG_BURNING_BRIDGE_ROCKY_HELMET
	removeobject 1
	releaseall
	return


DiggerGuy::
	lockall
	faceplayer
	goto_if_unset FLAG_BURNING_BRIDGE_ROCKY_HELMET, DiggerGuy_2
	msgbox DiggerGuy_Text_6
	msgbox DiggerGuy_Text_7
	msgbox DiggerGuy_Text_8
	msgbox DiggerGuy_Text_9
DiggerGuy_1:
	releaseall
	return

DiggerGuy_2:
	msgbox DiggerGuy_Text_0
	msgbox DiggerGuy_Text_1
	msgbox DiggerGuy_Text_2
	msgbox DiggerGuy_Text_3
	msgbox DiggerGuy_Text_4
	msgbox DiggerGuy_Text_5
	goto DiggerGuy_1


DiggerGuy_Text_0:
	.string "I'm in charge of digging the tunnel from\n"
	.string "Route 1 to Tenou Village.$"

DiggerGuy_Text_1:
	.string "We call it the Burning Bridge 'cause, I\n"
	.string "mean just look at it!$"

DiggerGuy_Text_2:
	.string "If you insist on playing in a\n"
	.string "construction site just make sure to\l"
	.string "watch your step.$"

DiggerGuy_Text_3:
	.string "It shouldn't surprise you; but lava\n"
	.string "isn't very forgiving. Don't wanna\l"
	.string "became charcoal now, do you?$"

DiggerGuy_Text_4:
	.string "Anyway, run along now. I've got work to\n"
	.string "do.$"

DiggerGuy_Text_5:
	.string "Oh, and don't take that Rocky Helmet\n"
	.string "over there. It was a late friends. I\l"
	.string "keep it close.$"

DiggerGuy_Text_6:
	.string "Did you take that Rocky Helmet!?\n"
	.string "I'll have you know it was worn by my late\l"
	.string "friend.$"

DiggerGuy_Text_7:
	.string "Bah. Whatever. You may as well keep it\n"
	.string "now.$"

DiggerGuy_Text_8:
	.string "Possessions are fleeting anyway.\n"
	.string "My memories of her are forever.$"

DiggerGuy_Text_9:
	.string "...$"

TimmothyIntro::
	.string "Why aren't Lava types a thing?\nWouldn't that be cool?$"

TimmothyLoss::
	.string "My Lava types!$"

PostBattle_Timmothy::
	.string "I'll just catch better Lava types!\nThen you'll see!$"

TimmothyBadIntro::
	.string "Woah. You actually stole that helmet?\nNot cool, man. Not cool.$"

TimmothyBadLoss::
	.string "...$"

PostBattle_TimmothyBad::
	.string "My mom told me not to talk to bad people.$"

WaltIntro::
	.string "Wanna see my rocks roll?$"

WaltLoss::
	.string "I guess you're more of a country person...$"

PostBattle_Walt::
	.string "Wherever there's rocks, I roll!$"

WaltBadIntro::
	.string "I can't believe you.\nHave you no shame?$"

WaltBadLoss::
	.string "You may be good at battles,\nbut you're rotten to the core!$"

PostBattle_WaltBad::
	.string "I don't waste my time with thieves.$"
