DrenchedCave_MapScripts::
	.byte 0


ManaphyEgg::
	lockall
	goto_if_unset FLAG_MANAPHY_EGG_RECIEVED, ManaphyEgg_2
ManaphyEgg_1:
	releaseall
	return

ManaphyEgg_2:
	msgbox ManaphyEgg_Text_0
	giveegg SPECIES_MANAPHY
	goto ManaphyEgg_1


ManaphyEgg_Text_0:
	.string "You recieved Mystery Egg!$"
