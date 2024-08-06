.set LOCALID_NURSE, 1

OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_TENOU_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "Hmm? Oh, a trainer.\n"
	.string "If you're looking for advice, I have\l"
	.string "none.\p"
	.string "Sorry.$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "The Pokémon Wireless Club...\n"
    .string "Does it even work anymore...?\p"
    .string "I guess all you can do is try!$"

MichaelAfton::
	lock
	faceplayer
	msgbox MichaelAfton_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MichaelAfton_2
	msgbox MichaelAfton_Text_2
MichaelAfton_1:
	release
	return

MichaelAfton_2:
	msgbox MichaelAfton_Text_1
	trainerbattle_no_intro TRAINER_SAWYER_1, MichaelLoss
	msgbox PostBattle_Michael, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	delay 20
	playse SE_DOOR
	special HealPlayerParty
	setflag FLAG_MICHAEL1_DEFEATED
	removeobject 3
	delay 40
	fadescreen FADE_FROM_BLACK
	goto MichaelAfton_1


MichaelAfton_Text_0:
	.string "I'm training to face my father.\nWould you like to train with me?$"

MichaelAfton_Text_1:
	.string "Alright then.\nCome and face your fears!$"

MichaelAfton_Text_2:
	.string "I see...\nThat's too bad.\pPerhaps another time, then.$"

MichaelLoss::
	.string "I see...\nI still have a long road ahead of me.$"

PostBattle_Michael::
	.string "Even if I defeat my father he'll come\nback.\lHe ALWAYS comes back...$"
