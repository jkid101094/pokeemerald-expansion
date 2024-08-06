TenouInterior_MapScripts::
	.byte 0


TrainerRandolph::
	trainerbattle_single TRAINER_SAWYER_1, RandolphIntro, RandolphLoss
	msgbox PostBattle_Randolph, MSGBOX_AUTOCLOSE
	waitmessage
	return


Tenou_Interior_Item_Ball_Nugget::
	lockall
	giveitem ITEM_NUGGET, [ 1 ]
	setflag FLAG_TENOU_INTERIOR_NUGGET
	removeobject 3
	releaseall
	return


Tenou_Interior_Item_Ball_Ether::
	lockall
	giveitem ITEM_ETHER, [ 1 ]
	setflag FLAG_TENOU_INTERIOR_ETHER
	removeobject 2
	releaseall
	return


RandolphIntro::
	.string "Hey, you're getting in the way of my\nresearch! Get lost!$"

RandolphLoss::
	.string "Ugh... Fine!\nI guess you can stay.$"

PostBattle_Randolph::
	.string "Just stay out of my way, OK?\nDon't make me ask nicely.$"
