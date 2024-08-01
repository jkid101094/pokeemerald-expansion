KinoGrove::
	.byte 0


KinoGroveRunner::
	lockall
	faceplayer
	msgbox KinoGroveRunner_Text_0
	releaseall
	return


KinoFatMan::
	lockall
	faceplayer
	msgbox KinoFatMan_Text_0
	releaseall
	return


KinoSign::
	lockall
	msgbox KinoSign_Text_0
	releaseall
	return


KinoGroveRunner_Text_0:
	.string "Kino Grove is great for exercise!\nThe air here is so fresh!$"

KinoFatMan_Text_0:
	.string "The woods are full of all types of Pokémon!\nI think I saw a Petilil in there!$"

KinoSign_Text_0:
	.string "-Kino Woods-$"
