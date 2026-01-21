LittleRootGym_MapScripts::
	.byte 0

Littleroot_Gym_EventScript_Ash::
	trainerbattle_single TRAINER_ASH, Littleroot_Gym_Text_AshIntro, Littleroot_Gym_Text_AshDefeat
	msgbox Littleroot_Gym_Text_AshPostBattle, MSGBOX_AUTOCLOSE
	end
	
	Littleroot_Gym_Text_AshIntro:
	.string "I need to make rent, so\n"
	.string "I took a job here.$"

Littleroot_Gym_Text_AshDefeat:
	.string "I never did pass Trainer\n"
	.string "school…$"

Littleroot_Gym_Text_AshPostBattle:
	.string "I'll probably be fired now…\p"
	.string "Look for the red hat$"

Littleroot_Gym_EventScript_Carson::
	trainerbattle_single TRAINER_CARSON, Littleroot_Gym_Text_CarsonIntro, Littleroot_Gym_Text_CarsonDefeat
	msgbox Littleroot_Gym_Text_CarsonPostBattle, MSGBOX_AUTOCLOSE
	end
	
Littleroot_Gym_Text_CarsonIntro:
	.string "Trainers used to start their adventures\n"
	.string "in this town, and now it's a dump$"

Littleroot_Gym_Text_CarsonDefeat:
	.string "I'm heading to Dewford tomorrow\n"
	.string "to find work$"

Littleroot_Gym_Text_CarsonPostBattle:
	.string "If raising Pokemon doesn't work out…\p"
	.string "Try getting a job in Dewford. This gym won't last long$"
	.string "Regardless, I'll open the first door for you$"


Littleroot_Gym_EventScript_Mason::
	trainerbattle_single TRAINER_MASON, Littleroot_Gym_Text_MasonIntro, Littleroot_Gym_Text_MasonDefeat
	msgbox Littleroot_Gym_Text_MasonPostBattle, MSGBOX_AUTOCLOSE
	end
	
	Littleroot_Gym_Text_MasonIntro:
	.string "I used to work with Prof.\n"
	.string "Birch here.$"

Littleroot_Gym_Text_MasonDefeat:
	.string "I guess I was better\n"
	.string "suited for research...$"

Littleroot_Gym_Text_MasonPostBattle:
	.string "I never found out what happened to Prof. Birch...\p"
	.string "I'll open the third door for you. Be careful out there.$"


Littleroot_Gym_EventScript_Anna::
	trainerbattle_single TRAINER_ANNA, Littleroot_Gym_Text_AnnaIntro, Littleroot_Gym_Text_AnnaDefeat
	msgbox Littleroot_Gym_Text_AnnaPostBattle, MSGBOX_AUTOCLOSE
	end
	
	Littleroot_Gym_Text_AnnaIntro:
	.string "One day I'll be a Gym Leader!\n"
	

	Littleroot_Gym_Text_AnnaDefeat:
	.string "I've got more training\p"
	.string "to do...$"

	Littleroot_Gym_Text_AnnaPostBattle:
	.string "Even though battling was illegal for\p"
	.string "a long time, I will never give up on my dream$"
	.string "of becoming a Gym Leader.$"
	.string "Look for a person with glasses.$"

	Littleroot_Gym_EventScript_Frank::
	trainerbattle_single TRAINER_FRANK, Littleroot_Gym_Text_FrankIntro, Littleroot_Gym_Text_FrankDefeat
	msgbox Littleroot_Gym_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	end
	
	Littleroot_Gym_Text_FrankIntro:
	.string "My mom made me get a job as a trainer here...\n"
	

	Littleroot_Gym_Text_FrankDefeat:
	.string "I don't even wanna battle.\n"

	Littleroot_Gym_Text_FrankPostBattle:
	.string "My parents think Maxie is great\p"
	.string "and thought I could earn money since$"
	.string "he's letting us battle again.$"
	.string "I don't care and just want to go play video games.$"
	.string "Go fight the weird bald dude in the corner.$"

	Littleroot_Gym_EventScript_Hiram::
	trainerbattle_single TRAINER_HIRAM, Littleroot_Gym_Text_HiramIntro, Littleroot_Gym_Text_HiramDefeat
	msgbox Littleroot_Gym_Text_HiramPostBattle, MSGBOX_AUTOCLOSE
	end
	
	Littleroot_Gym_Text_HiramIntro:
	.string "I hail from the Kanto region,\n"
	.string "and I was among the first generation$"
	.string "of Gym challengers!$"

	Littleroot_Gym_Text_HiramDefeat:
	.string "It seems the younger generation\n"
	.string "is on the rise.$"

	Littleroot_Gym_Text_HiramPostBattle:
	.string "I'll open the final door for you\p"
	.string "I never much agreed with Maxie, but$"
	.string "I'm too old to take him head on.$"
	.string "Hopefully a young, strong trainer like yourself will.$"

Littleroot_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_NORMAN_6, Littleroot_Gym_Text_LeaderIntro, Littleroot_Gym_Text_LeaderDefeat
	msgbox Littleroot_Gym_Text_LeaderPostBattle, MSGBOX_AUTOCLOSE
	end
	
Littleroot_Gym_Text_LeaderIntro:
	.string "It's been a long time since I last battled…\n"
	.string "But I won't lose here!.$"

Littleroot_Gym_Text_LeaderDefeat:
	.string "I haven't felt that alive in a decade!\n"

Littleroot_Gym_Text_LeaderPostBattle:
	.string "You remind me of my son...\p"
	.string "If you ever need my help,$"
	.string "don't hesitate to ask.$"