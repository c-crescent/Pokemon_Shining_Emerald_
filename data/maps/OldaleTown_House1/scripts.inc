OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	lock
	faceplayer
	msgbox OldaleTown_House1_Text_NatureChange, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OldaleTown_House1_CancelNatureChange
	closemessage
	multichoicegrid 0, 1, MULTI_NATURE_LIST, 4, FALSE
	switch VAR_RESULT
	case 0, Oldale_House_Hardy
	case 1, Oldale_House_Lonely
	case 2, Oldale_House_Brave
	case 3, Oldale_House_Adamant
	case 4, Oldale_House_Naughty
	case 5, Oldale_House_Bold
	case 6, Oldale_House_Docile
	case 7, Oldale_House_Relaxed
	case 8, Oldale_House_Impish
	case 9, Oldale_House_Lax
	case 10, Oldale_House_Timid
	case 11, Oldale_House_Hasty
	case 12, Oldale_House_Serious
	case 13, Oldale_House_Jolly
	case 14, Oldale_House_Naive
	case 15, Oldale_House_Modest
	case 16, Oldale_House_Mild
	case 17, Oldale_House_Quiet
	case 18, Oldale_House_Bashful
	case 19, Oldale_House_Rash
	case 20, Oldale_House_Calm
	case 21, Oldale_House_Gentle
	case 22, Oldale_House_Sassy
	case 23, Oldale_House_Careful
	case 24, Oldale_House_Quirky
	case MULTI_B_PRESSED, OldaleTown_House1_CancelNatureChange
	end

Oldale_House_Hardy::
	setvar VAR_0x8004, 0
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Lonely::
	setvar VAR_0x8004, 1
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Brave::
	setvar VAR_0x8004, 2
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Adamant::
	setvar VAR_0x8004, 3
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Naughty::
	setvar VAR_0x8004, 4
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Bold::
	setvar VAR_0x8004, 5
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Docile::
	setvar VAR_0x8004, 6
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Relaxed::
	setvar VAR_0x8004, 7
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Impish::
	setvar VAR_0x8004, 8
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Lax::
	setvar VAR_0x8004, 9
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Timid::
	setvar VAR_0x8004, 10
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Hasty::
	setvar VAR_0x8004, 11
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Serious::
	setvar VAR_0x8004, 12
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Jolly::
	setvar VAR_0x8004, 13
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Naive::
	setvar VAR_0x8004, 14
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Modest::
	setvar VAR_0x8004, 15
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Mild::
	setvar VAR_0x8004, 16
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Quiet::
	setvar VAR_0x8004, 17
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Bashful::
	setvar VAR_0x8004, 18
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Rash::
	setvar VAR_0x8004, 19
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Calm::
	setvar VAR_0x8004, 20
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Gentle::
	setvar VAR_0x8004, 21
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Sassy::
	setvar VAR_0x8004, 22
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Careful::
	setvar VAR_0x8004, 23
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

Oldale_House_Quirky::
	setvar VAR_0x8004, 24
	special ChangeLeadPokemonNature
	msgbox OldaleTown_House1_Text_NatureChangeSuccess
	closemessage
	end

OldaleTown_House1_CancelNatureChange::
	msgbox OldaleTown_House1_Text_CancelNatureChange, MSGBOX_DEFAULT
	closemessage
	release
	end

OldaleTown_House1_Text_NatureChange:
	.string "Would you like to change the nature\n"
	.string "of your lead POKéMON?$"

OldaleTown_House1_Text_NatureChangeSuccess:
	.string "Your lead POKéMON changed\n"
	.string "its nature successfully.$"

OldaleTown_House1_Text_CancelNatureChange:
	.string "See you around then.$"