TenouTown_MapScripts::
	.byte 0


TenouScientist::
	lock
	faceplayer
	msgbox TenouScientist_Text_0
	msgbox TenouScientist_Text_1
	msgbox TenouScientist_Text_2
	msgbox TenouScientist_Text_3
	release
	return


TenouHiker::
	lock
	faceplayer
	msgbox TenouHiker_Text_0
	msgbox TenouHiker_Text_1
	msgbox TenouHiker_Text_2
	msgbox TenouHiker_Text_3
	msgbox TenouHiker_Text_4
	release
	return


Tenou_Town_Item_Ball_Ether::
	lockall
	giveitem ITEM_ETHER, [ 1 ]
	setflag FLAG_TENOU_TOWN_ETHER
	removeobject 3
	releaseall
	return


Tenou_Town_Item_HM11::
	lockall
	giveitem ITEM_TM11, [ 1 ]
	setflag FLAG_TENOU_TOWN_HM11
	removeobject 4
	releaseall
	return


TenouControlPanel::
	lock
	msgbox TenouControlPanel_Text_0
	msgbox TenouControlPanel_Text_1
	release
	return


TenouScientist_Text_0:
	.string "This machine helps regulate the magma\n"
	.string "chambers of Mt. Tenou.$"

TenouScientist_Text_1:
	.string "By managing air and magma buildup, we\n"
	.string "can decrease the chance of erruption\l"
	.string "by roughly 30%!$"

TenouScientist_Text_2:
	.string "Of course, no system is perfect, and\n"
	.string "building our homes so close to the lava\l"
	.string "will always be dangerous.$"

TenouScientist_Text_3:
	.string "It's quite risky business!$"

TenouHiker_Text_0:
	.string "The cable car leads down to Route 2.$"

TenouHiker_Text_1:
	.string "Route 2 connects Tenou Town and Kino\n"
	.string "Village to Shingo City.$"

TenouHiker_Text_2:
	.string "While you're here though, why not visit\n"
	.string "the gym? It's a real world class\l"
	.string "resteraunt.$"

TenouHiker_Text_3:
	.string "Of course, you're free to proceed as\n"
	.string "you will.$"

TenouHiker_Text_4:
	.string "Be careful, though. Once you step onto\n"
	.string "Route 2 you can't backtrack, so make\l"
	.string "sure you've done everything here you\l"
	.string "need to.$"

TenouControlPanel_Text_0:
	.string "-MT. TENOU MAGMA REGULATION TERMINAL-$"

TenouControlPanel_Text_1:
	.string "It's displaying numbers and other\nthings you can't understand...$"
