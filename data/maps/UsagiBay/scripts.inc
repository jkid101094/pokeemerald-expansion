UsagiBay_MapScripts::
	.byte 0


UsagiBay_Artist::
	lockall
	faceplayer
	goto_if_set FLAG_ARTISAN_TRADE, ARTIST_TRADE_COMPLETE
	msgbox UsagiBay_Artist_Text_0
	msgbox UsagiBay_Artist_Text_1
	msgbox UsagiBay_Artist_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq UsagiBay_Artist_2
	msgbox UsagiBay_Artist_Text_4
	releaseall
	end

UsagiBay_Artist_1:
Trade_Declined:
	msgbox UsagiBay_Artist_Text_5
	releaseall
	end
ARTIST_TRADE_COMPLETE:
	msgbox UsagiBay_Artist_Text_6
	releaseall
	end

UsagiBay_Artist_2:
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Trade_Declined
	copyvar VAR_0x8004, VAR_0x8005
	specialvar VAR_RESULT, GetTradeSpecies
	goto_if_ne VAR_RESULT, SPECIES_SMEARGLE, Trade_Declined
	msgbox UsagiBay_Artist_Text_3
	multichoice 25, 5, MULTI_KANTO_STARTER_CHOICE, 1
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq UsagiBay_Artist_5
	compare VAR_RESULT, 1
	goto_if_eq UsagiBay_Artist_6
	compare VAR_RESULT, 2
	goto_if_eq UsagiBay_Artist_7
	goto UsagiBay_Artist_1

UsagiBay_Artist_5:
	setvar VAR_0x8004, INGAME_TRADE_BULBASAUR
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	setflag FLAG_ARTISAN_TRADE
	return
	releaseall
	end

UsagiBay_Artist_6:
	setvar VAR_0x8004, INGAME_TRADE_CHARMANDER
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	setflag FLAG_ARTISAN_TRADE
	return
	releaseall
	end

UsagiBay_Artist_7:
	setvar VAR_0x8004, INGAME_TRADE_SQUIRTLE
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	setflag FLAG_ARTISAN_TRADE
	return
	releaseall
	end


UsagiBay_Woman::
	lockall
	faceplayer
	msgbox UsagiBay_Woman_Text_0
	releaseall
	end


UsagiBay_Sailor::
	lockall
	faceplayer
	msgbox UsagiBay_Sailor_Text_0
	releaseall
	end


UsagiBay_LittleGirl::
	lockall
	faceplayer
	msgbox UsagiBay_LittleGirl_Text_0
	msgbox UsagiBay_LittleGirl_Text_1
	releaseall
	end


UsagiBay_Azurill::
	lockall
	faceplayer
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	showmonpic SPECIES_AZURILL, 10, 3
	msgbox UsagiBay_Azurill_Text_0
	waitmoncry
	hidemonpic
	releaseall
	end


UsagiBay_Ranger::
	lockall
	faceplayer
	msgbox UsagiBay_Ranger_Text_0
	releaseall
	end


UsagiBay_BugCatcher::
	lockall
	faceplayer
	msgbox UsagiBay_BugCatcher_Text_0
	releaseall
	end


HouseSign1::
	lockall
	MSGBOX HouseSign1_Text_0
	releaseall
	return


HouseSign2::
	lockall
	MSGBOX HouseSign2_Text_0
	releaseall
	return


PlazaSign::
	lockall
	MSGBOX PlazaSign_Text_0
	releaseall
	return


CantLeaveTown::
	lockall
	msgbox CantLeaveTown_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, MoveBack
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	return


StoneShop::
	lock
	faceplayer
	message StoneShop_Text_0
	waitmessage
	compare VAR_BADGES_OBTAINED, 0
	goto_if_eq StoneShop_2
	compare VAR_BADGES_OBTAINED, 2
	goto_if_le StoneShop_3
	compare VAR_BADGES_OBTAINED, 4
	goto_if_le StoneShop_4
	compare VAR_BADGES_OBTAINED, 6
	goto_if_le StoneShop_5
	compare VAR_BADGES_OBTAINED, 8
	goto_if_le StoneShop_6
StoneShop_1:
	message StoneShop_Text_1
	waitmessage
	release
	end

StoneShop_2:
	pokemart stoneshop_1
	goto StoneShop_1

StoneShop_3:
	pokemart stoneshop_2
	goto StoneShop_1

StoneShop_4:
	pokemart stoneshop_3
	goto StoneShop_1

StoneShop_5:
	pokemart stoneshop_4
	goto StoneShop_1

StoneShop_6:
	pokemart stoneshop_5
	goto StoneShop_1


.align 2
stoneshop_1::
.2byte ITEM_FIRE_STONE
.2byte ITEM_WATER_STONE
.2byte ITEM_THUNDER_STONE
.2byte ITEM_LEAF_STONE
.2byte ITEM_NONE
release
end

stoneshop_2::
.2byte ITEM_FIRE_STONE
.2byte ITEM_WATER_STONE
.2byte ITEM_THUNDER_STONE
.2byte ITEM_LEAF_STONE
.2byte ITEM_MOON_STONE
.2byte ITEM_SUN_STONE
.2byte ITEM_DAWN_STONE
.2byte ITEM_DUSK_STONE
.2byte ITEM_SHINY_STONE
.2byte ITEM_DRAGON_SCALE
.2byte ITEM_KINGS_ROCK
.2byte ITEM_METAL_COAT
.2byte ITEM_NONE
release
end

stoneshop_3::
.2byte ITEM_FIRE_STONE
.2byte ITEM_WATER_STONE
.2byte ITEM_THUNDER_STONE
.2byte ITEM_LEAF_STONE
.2byte ITEM_MOON_STONE
.2byte ITEM_SUN_STONE
.2byte ITEM_DAWN_STONE
.2byte ITEM_DUSK_STONE
.2byte ITEM_SHINY_STONE
.2byte ITEM_ICE_STONE
.2byte ITEM_MAGMARIZER
.2byte ITEM_ELECTIRIZER
.2byte ITEM_PROTECTOR
.2byte ITEM_REAPER_CLOTH
.2byte ITEM_RAZOR_CLAW
.2byte ITEM_RAZOR_FANG
.2byte ITEM_SWEET_APPLE
.2byte ITEM_TART_APPLE
.2byte ITEM_DRAGON_SCALE
.2byte ITEM_KINGS_ROCK
.2byte ITEM_METAL_COAT
.2byte ITEM_NONE
release
end

stoneshop_4::
.2byte ITEM_FIRE_STONE
.2byte ITEM_WATER_STONE
.2byte ITEM_THUNDER_STONE
.2byte ITEM_LEAF_STONE
.2byte ITEM_MOON_STONE
.2byte ITEM_SUN_STONE
.2byte ITEM_DAWN_STONE
.2byte ITEM_DUSK_STONE
.2byte ITEM_SHINY_STONE
.2byte ITEM_ICE_STONE
.2byte ITEM_MAGMARIZER
.2byte ITEM_ELECTIRIZER
.2byte ITEM_REAPER_CLOTH
.2byte ITEM_RAZOR_CLAW
.2byte ITEM_RAZOR_FANG
.2byte ITEM_SWEET_APPLE
.2byte ITEM_TART_APPLE
.2byte ITEM_DEEP_SEA_SCALE
.2byte ITEM_DEEP_SEA_TOOTH
.2byte ITEM_DRAGON_SCALE
.2byte ITEM_KINGS_ROCK
.2byte ITEM_METAL_COAT
.2byte ITEM_OVAL_STONE
.2byte ITEM_NONE
release
end

stoneshop_5::
.2byte ITEM_FIRE_STONE
.2byte ITEM_WATER_STONE
.2byte ITEM_THUNDER_STONE
.2byte ITEM_LEAF_STONE
.2byte ITEM_MOON_STONE
.2byte ITEM_SUN_STONE
.2byte ITEM_DAWN_STONE
.2byte ITEM_DUSK_STONE
.2byte ITEM_SHINY_STONE
.2byte ITEM_ICE_STONE
.2byte ITEM_MAGMARIZER
.2byte ITEM_ELECTIRIZER
.2byte ITEM_REAPER_CLOTH
.2byte ITEM_RAZOR_CLAW
.2byte ITEM_RAZOR_FANG
.2byte ITEM_SWEET_APPLE
.2byte ITEM_TART_APPLE
.2byte ITEM_DEEP_SEA_SCALE
.2byte ITEM_DEEP_SEA_TOOTH
.2byte ITEM_DRAGON_SCALE
.2byte ITEM_KINGS_ROCK
.2byte ITEM_METAL_COAT
.2byte ITEM_OVAL_STONE
.2byte ITEM_SACHET
.2byte ITEM_WHIPPED_DREAM
.2byte ITEM_UPGRADE
.2byte ITEM_DUBIOUS_DISC
.2byte ITEM_DRAGON_SCALE
.2byte ITEM_KINGS_ROCK
.2byte ITEM_METAL_COAT
.2byte ITEM_STRAWBERRY_SWEET
.2byte ITEM_LOVE_SWEET
.2byte ITEM_BERRY_SWEET
.2byte ITEM_CLOVER_SWEET
.2byte ITEM_FLOWER_SWEET
.2byte ITEM_STAR_SWEET
.2byte ITEM_RIBBON_SWEET
.2byte ITEM_NONE
release
end

BattleShop::
	lock
	faceplayer
	message BattleShop_Text_0
	waitmessage
	compare VAR_BADGES_OBTAINED, 0
	goto_if_eq BattleShop_2
	compare VAR_BADGES_OBTAINED, 2
	goto_if_le BattleShop_3
	compare VAR_BADGES_OBTAINED, 4
	goto_if_le BattleShop_4
	compare VAR_BADGES_OBTAINED, 6
	goto_if_le BattleShop_5
	compare VAR_BADGES_OBTAINED, 8
	goto_if_le BattleShop_6
BattleShop_1:
	message StoneShop_Text_1
	waitmessage
	release
	end

BattleShop_2:
	pokemart battleshop_1
	goto BattleShop_1

BattleShop_3:
	pokemart battleshop_2
	goto BattleShop_1

BattleShop_4:
	pokemart battleshop_3
	goto BattleShop_1

BattleShop_5:
	pokemart battleshop_4
	goto BattleShop_1

BattleShop_6:
	pokemart battleshop_5
	goto BattleShop_1


	.align 2
battleshop_1:
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_NONE

	.align 2
battleshop_2:
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_NONE

	.align 2
battleshop_3:
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_NONE

	.align 2
battleshop_4:
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_NONE

	.align 2
battleshop_5:
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_NONE

BallShop::
	lock
	faceplayer
	message BallShop_Text_0
	waitmessage
	compare VAR_BADGES_OBTAINED, 0
	goto_if_eq BallShop_2
	compare VAR_BADGES_OBTAINED, 2
	goto_if_le BallShop_3
	compare VAR_BADGES_OBTAINED, 4
	goto_if_le BallShop_4
	compare VAR_BADGES_OBTAINED, 6
	goto_if_le BallShop_5
	compare VAR_BADGES_OBTAINED, 8
	goto_if_le BallShop_6
BallShop_1:
	message StoneShop_Text_1
	waitmessage
	release
	end

BallShop_2:
	pokemart ballshop_1
	goto BallShop_1

BallShop_3:
	pokemart ballshop_2
	goto BallShop_1

BallShop_4:
	pokemart ballshop_3
	goto BallShop_1

BallShop_5:
	pokemart ballshop_4
	goto BallShop_1

BallShop_6:
	pokemart ballshop_5
	goto BallShop_1


	.align 2
ballshop_1:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

	.align 2
ballshop_2:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NONE

	.align 2
ballshop_3:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_NONE

	.align 2
ballshop_4:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_NONE

	.align 2
ballshop_5:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_BEAST_BALL
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_NONE

UsagiBay_Artist_Text_0:
	.string "I'm a traveling artist looking for new\n"
	.string "things to paint.$"

UsagiBay_Artist_Text_1:
	.string "Usagi Bay has a wonderful ladscape,\n"
	.string "but I'm looking for something more\l"
	.string "animated.$"

UsagiBay_Artist_Text_2:
	.string "Do you by chance have a Smeargle?\nI'll trade it for a Pokémon from my home\lregion.$"

UsagiBay_Artist_Text_3:
	.string "Excellet!\nWhich Pokemon would you like?$"

UsagiBay_Artist_Text_4:
	.string "Oh... Well if you should change your mind\nyou know where to find me.$"

UsagiBay_Artist_Text_5:
	.string "Oh why must you tease me so?$"

UsagiBay_Artist_Text_6:
	.string "Hello, friend!\nHow is my Pokémon doing?\lYour Smeargle is just fine.$"

UsagiBay_Woman_Text_0:
	.string "The square is so lovely!\nI always come here to do a little\lshopping.$"

UsagiBay_Sailor_Text_0:
	.string "You'd never guess from it's size,\nbut the square is a hub for travelers\lfrom all over the world.\pI'm from Paldea, myself.$"

UsagiBay_LittleGirl_Text_0:
	.string "Mommy left me to play while she does\nsome shopping.$"

UsagiBay_LittleGirl_Text_1:
	.string "I'm perfectly safe as long as Azurill is\nwith me!$"

UsagiBay_Azurill_Text_0:
	.string "Azuuuuurill!$"

UsagiBay_Ranger_Text_0:
	.string "Not just anyone can enter Victory\nRoad, ya know.\pIt takes a hardened trainer like myself\nto trudge through that forest.\pToo bad I can never make it, huh?$"

UsagiBay_BugCatcher_Text_0:
	.string "Keep this between you and me, but I\n"
	.string "hear the square shopkeeps reveal more\l"
	.string "of their inventory to trainers with\l"
	.string "more badges.\p"
	.string "How's that fair, huh?\n"
	.string "I want some Net Balls too!$"

HouseSign1_Text_0:
	.string "Arle's house.$"

HouseSign2_Text_0:
	.string "Someone's house.$"

PlazaSign_Text_0:
	.string "-Usagi Bay Plaza-\nIt's not an A unless it comes from the\lbay!$"

CantLeaveTown_Text_0:
	.string "I shouldn't leave town without a\nPokémon!$"

StoneShop_Text_0:
	.string "Hi and welcome to Steven's Stones.\nHow may I help you?$"

StoneShop_Text_1:
	.string "We hope to see you again!$"

BattleShop_Text_0:
	.string "Hi and welcome to Chansey Supply.\nHow may I help you?$"

BallShop_Text_0:
	.string "Hi and welcome to the Ball Emporium.\nHow may I help you?$"
