Route1_MapScripts::
	.byte 0


route1_sign1::
	lockall
	msgbox route1_sign1_Text_0
	releaseall
	return


route1_sign2::
	lockall
	msgbox route1_sign2_Text_0
	releaseall
	return


route1_sign3::
	lockall
	msgbox route1_sign3_Text_0
	releaseall
	return


Route1_Mart_Employee::
	lockall
	faceplayer
	goto_if_unset FLAG_ROUTE1_POTION, Route1_Mart_Employee_2
	msgbox Route1_Mart_Employee_Text_4
Route1_Mart_Employee_1:
	releaseall
	return

Route1_Mart_Employee_2:
	msgbox Route1_Mart_Employee_Text_0
	msgbox Route1_Mart_Employee_Text_1
	msgbox Route1_Mart_Employee_Text_2
	giveitem ITEM_POTION [ 1 ]
	msgbox Route1_Mart_Employee_Text_3
	setflag FLAG_ROUTE1_POTION
	goto Route1_Mart_Employee_1


Route1_Jogger::
	lockall
	faceplayer
	msgbox Route1_Jogger_Text_0
	releaseall
	return


Route1_Item_Ball_Rare_Candy::
	lockall
	giveitem ITEM_RARE_CANDY, [ 1 ]
	setflag FLAG_ROUTE1_RARE_CANDY
	removeobject 1
	releaseall
	return


Route1_Item_Ball_TM26::
	lockall
	giveitem ITEM_TM26, [ 1 ]
	setflag FLAG_ROUTE1_TM26
	removeobject 4
	releaseall
	return


TrainerRikki::
	trainerbattle_single TRAINER_SAWYER_1, RikkiIntro, RikkiLoss
	msgbox PostBattle_Rikki, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerStanley::
	trainerbattle_single TRAINER_SAWYER_1, StanleyIntro, StanleyLoss
	msgbox PostBattle_Stanley, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerBart::
	trainerbattle_single TRAINER_SAWYER_1, BartIntro, BartLoss
	msgbox PostBattle_Bart, MSGBOX_AUTOCLOSE
	waitmessage
	return


TrainerAustin::
	trainerbattle_single TRAINER_SAWYER_1, AustinIntro, AustinLoss
	msgbox PostBattle_Austin, MSGBOX_AUTOCLOSE
	waitmessage
	return


route1_sign1_Text_0:
	.string "-ROUTE 1-\nNORTH: MT. TENOU\lEAST: KINO GROVE\lSOUTH: USAGI BAY$"

route1_sign2_Text_0:
	.string "NOTICE: Please be on the lookout for lost\nitems.\pIf found please return to the Usagi Bay\nlost and found.\pThank you and watch your step!$"

route1_sign3_Text_0:
	.string "KINO GROVE: Beware of bugs!$"

Route1_Mart_Employee_Text_0:
	.string "Hello there!\nI see you're taking your first steps on\lyour grand adventure!$"

Route1_Mart_Employee_Text_1:
	.string "I represent your local PokéMart and boy\n"
	.string "do I have a surprise for you!\p"
	.string "All budding trainers are entitled to ONE\n"
	.string "FREE POTION!\p"
	.string "Yes! An entire potion FOR FREE!$"

Route1_Mart_Employee_Text_2:
	.string "What are you waiting for! Take it! Take\n"
	.string "it! TAKE IT!$"

Route1_Mart_Employee_Text_3:
	.string "Thank you for continuing to shop at your\nlocal PokéMart!$"

Route1_Mart_Employee_Text_4:
	.string "Hey hey hey! How's my favorite newbie?\nSorry! I can't give you another potion!\lCompany policy and all.\pBut hey, cheer up!\nThere's always more at your local\lPokéMart!$"

Route1_Jogger_Text_0:
	.string "Nothing like getting in a good workout\nat the beach!\pOw!\nI stubbed my toe on a rock!$"

RikkiIntro::
	.string "Are you a beginner too?\nWant to see my Pokémon?$"

RikkiLoss::
	.string "You didn't even look!$"

PostBattle_Rikki::
	.string "Maybe I'm just not cut out for this...$"

StanleyIntro::
	.string "You're after that item over there, huh?\nGuess you'll have to beat me first!$"

StanleyLoss::
	.string "Wait a second!\nI didn't think you'd actually win!$"

PostBattle_Stanley::
	.string "Truth be told I don't even know what it is.\nI never checked!$"

BartIntro::
	.string "You'll make great EXP for my nuzlocke!$"

BartLoss::
	.string "What? No! My Pokémon!$"

PostBattle_Bart::
	.string "I love nuzlocking, but man...\nI hate releasing my Pokémon...$"

AustinIntro::
	.string "Bwwah! Did I scare ya?$"

AustinLoss::
	.string "I'm spooked!$"

PostBattle_Austin::
	.string "I need to work on my pranks.$"
