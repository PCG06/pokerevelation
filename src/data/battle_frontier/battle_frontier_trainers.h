static const u16 sUniversalMonSet[] =
    {UNIVERSAL_TRAINER_POOL};

const struct BattleFrontierTrainer gBattleFrontierTrainers[FRONTIER_TRAINERS_COUNT] =
{
    [FRONTIER_TRAINER_BRADY] =
    {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADY"),
        .speechBefore = COMPOUND_STRING("I am never going to lose!"),
        .speechWin = COMPOUND_STRING("I am strong aren't I?"),
        .speechLose = COMPOUND_STRING("What? But how?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CONNER] =
    {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("CONNER"),
        .speechBefore = COMPOUND_STRING("Losing doesn't bug me."),
        .speechWin = COMPOUND_STRING("A win is just awesome."),
        .speechLose = COMPOUND_STRING("Darn… Losing does bug me."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRADLEY] =
    {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADLEY"),
        .speechBefore = COMPOUND_STRING("Hey there! You're my opponent today."),
        .speechWin = COMPOUND_STRING("Hahaha! See ya later!"),
        .speechLose = COMPOUND_STRING("Tomorrow is when we really battle."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CYBIL] =
    {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("CYBIL"),
        .speechBefore = COMPOUND_STRING("You're really not very scary at all."),
        .speechWin = COMPOUND_STRING("It's sad to see you struggle."),
        .speechLose = COMPOUND_STRING("This can't be happening to me!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RODETTE] =
    {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("RODETTE"),
        .speechBefore = COMPOUND_STRING("Oh this is so exciting!"),
        .speechWin = COMPOUND_STRING("It's incredible how strong I am!"),
        .speechLose = COMPOUND_STRING("Oh, dear… I am just no good."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PEGGY] =
    {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("PEGGY"),
        .speechBefore = COMPOUND_STRING("Get ready to be destroyed!"),
        .speechWin = COMPOUND_STRING("Hahaha!! I am lolling!"),
        .speechLose = COMPOUND_STRING("I am feeling sad thanks to you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KEITH] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("KEITH"),
        .speechBefore = COMPOUND_STRING("I don't just study you know."),
        .speechWin = COMPOUND_STRING("You don't study enough…"),
        .speechLose = COMPOUND_STRING("I need to study more…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GRAYSON] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GRAYSON"),
        .speechBefore = COMPOUND_STRING("A Pokémon battle isn't child's play!"),
        .speechWin = COMPOUND_STRING("You're done aren't you?"),
        .speechLose = COMPOUND_STRING("We were like toys to you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GLENN] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GLENN"),
        .speechBefore = COMPOUND_STRING("I would be cool if I win."),
        .speechWin = COMPOUND_STRING("Cool! That's what I am."),
        .speechLose = COMPOUND_STRING("I am not going to be cool."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LILIANA] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("LILIANA"),
        .speechBefore = COMPOUND_STRING("I won't give up until I win."),
        .speechWin = COMPOUND_STRING("There is no surrender in me."),
        .speechLose = COMPOUND_STRING("That's it… I give up…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ELISE] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ELISE"),
        .speechBefore = COMPOUND_STRING("My strategy is from my father."),
        .speechWin = COMPOUND_STRING("I win! Father I've won."),
        .speechLose = COMPOUND_STRING("Forgive me father for I've lost."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ZOEY] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ZOEY"),
        .speechBefore = COMPOUND_STRING("Please battle like you mean it."),
        .speechWin = COMPOUND_STRING("Thank you!! Thank you so much."),
        .speechLose = COMPOUND_STRING("Were you really being serious?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MANUEL] =
    {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("MANUEL"),
        .speechBefore = COMPOUND_STRING("Me lose? That's preposterous!"),
        .speechWin = COMPOUND_STRING("Naturally I win."),
        .speechLose = COMPOUND_STRING("Waaah! I lost mother."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RUSS] =
    {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("RUSS"),
        .speechBefore = COMPOUND_STRING("They all want my fabulous Pokémon."),
        .speechWin = COMPOUND_STRING("I will have a Pokémon party."),
        .speechLose = COMPOUND_STRING("How could you do that?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DUSTIN] =
    {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("DUSTIN"),
        .speechBefore = COMPOUND_STRING("I really like cool Pokémon."),
        .speechWin = COMPOUND_STRING("I like myself when I win!"),
        .speechLose = COMPOUND_STRING("I like myself if I lose too."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TINA] =
    {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("TINA"),
        .speechBefore = COMPOUND_STRING("If I win you can have a sweet kiss."),
        .speechWin = COMPOUND_STRING("Here it is your sweet kiss from my Jynx."),
        .speechLose = COMPOUND_STRING("You want a swift mega kick instead."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GILLIAN1] =
    {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("GILLIAN"),
        .speechBefore = COMPOUND_STRING("The gourmet thing is so yesterday."),
        .speechWin = COMPOUND_STRING("Pokémon never go out of fashion."),
        .speechLose = COMPOUND_STRING("Losing doesn't disappoint me."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ZOE] =
    {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ZOE"),
        .speechBefore = COMPOUND_STRING("I haven't a worry at all."),
        .speechWin = COMPOUND_STRING("Life is always good to me."),
        .speechLose = COMPOUND_STRING("I worry about my Pokémon skill."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CHEN] =
    {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("CHEN"),
        .speechBefore = COMPOUND_STRING("I am totally ready to rock today."),
        .speechWin = COMPOUND_STRING("I am ready to go on!"),
        .speechLose = COMPOUND_STRING("I've lost my focus energy and toughness."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AL] =
    {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("AL"),
        .speechBefore = COMPOUND_STRING("Your look says you're really tough."),
        .speechWin = COMPOUND_STRING("It's me who is really tough."),
        .speechLose = COMPOUND_STRING("I am right! You're really tough."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MITCH] =
    {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("MITCH"),
        .speechBefore = COMPOUND_STRING("Mother nature is my ally!"),
        .speechWin = COMPOUND_STRING("Was that enough for you?"),
        .speechLose = COMPOUND_STRING("Mother nature didn't let me win?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ANNE] =
    {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ANNE"),
        .speechBefore = COMPOUND_STRING("I can't wait let's battle now."),
        .speechWin = COMPOUND_STRING("My happiness is overwhelming!"),
        .speechLose = COMPOUND_STRING("You've destroyed my happiness…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALIZE] =
    {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ALIZE"),
        .speechBefore = COMPOUND_STRING("Cute and awfully strong that's me."),
        .speechWin = COMPOUND_STRING("Yup I am cute and awfully strong."),
        .speechLose = COMPOUND_STRING("I am weak… But I am cute."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LAUREN] =
    {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("LAUREN"),
        .speechBefore = COMPOUND_STRING("I am old but I am also good."),
        .speechWin = COMPOUND_STRING("I said I was old but good."),
        .speechLose = COMPOUND_STRING("What a weird dream that was!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KIPP] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("KIPP"),
        .speechBefore = COMPOUND_STRING("If I win I am going to go surf."),
        .speechWin = COMPOUND_STRING("Yeah! I am off to surf."),
        .speechLose = COMPOUND_STRING("Oh no! A whirlpool!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JASON] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JASON"),
        .speechBefore = COMPOUND_STRING("Teach me a good strategy."),
        .speechWin = COMPOUND_STRING("That was your good strategy?!"),
        .speechLose = COMPOUND_STRING("Wow that is an awesome strategy."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JOHN] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JOHN"),
        .speechBefore = COMPOUND_STRING("I am a pretty new trainer."),
        .speechWin = COMPOUND_STRING("I am new but I won!"),
        .speechLose = COMPOUND_STRING("I am new so what if I lose?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ANN] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ANN"),
        .speechBefore = COMPOUND_STRING("It's so exciting it really is."),
        .speechWin = COMPOUND_STRING("I am so happy I can cry."),
        .speechLose = COMPOUND_STRING("I am so sad I will cry."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EILEEN] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("EILEEN"),
        .speechBefore = COMPOUND_STRING("Let's pretend I am an adult ok ques."),
        .speechWin = COMPOUND_STRING("So this is an adult feeling."),
        .speechLose = COMPOUND_STRING("An adult can't beat you?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CARLIE] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("CARLIE"),
        .speechBefore = COMPOUND_STRING("My summer vacation is for Pokémon."),
        .speechWin = COMPOUND_STRING("My summer vacation will be awesome."),
        .speechLose = COMPOUND_STRING("I can't win like this…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GORDON] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("GORDON"),
        .speechBefore = COMPOUND_STRING("Victory will come to me!"),
        .speechWin = COMPOUND_STRING("Oh, yeah! I really won."),
        .speechLose = COMPOUND_STRING("Nothing is working out for me."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AYDEN] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("AYDEN"),
        .speechBefore = COMPOUND_STRING("Come on I need a hot battle."),
        .speechWin = COMPOUND_STRING("I need water to cool down."),
        .speechLose = COMPOUND_STRING("You have me feeling ice cold."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MARCO] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("MARCO"),
        .speechBefore = COMPOUND_STRING("I surf in the winter too."),
        .speechWin = COMPOUND_STRING("I will go surf right now."),
        .speechLose = COMPOUND_STRING("I will beat up my surf board."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CIERRA] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("CIERRA"),
        .speechBefore = COMPOUND_STRING("I like to synchronize my swift swim."),
        .speechWin = COMPOUND_STRING("My Pokémon synchronize with me."),
        .speechLose = COMPOUND_STRING("I need to synchronize better…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MARCY] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("MARCY"),
        .speechBefore = COMPOUND_STRING("I am a knockout you can't win!"),
        .speechWin = COMPOUND_STRING("After all I am a knockout!"),
        .speechLose = COMPOUND_STRING("That's not the knockout I mean."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KATHY] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("KATHY"),
        .speechBefore = COMPOUND_STRING("I've won every match today!"),
        .speechWin = COMPOUND_STRING("It's so great to win!"),
        .speechLose = COMPOUND_STRING("Huh ques I should not have lost."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PEYTON] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("PEYTON"),
        .speechBefore = COMPOUND_STRING("I am never disappointed with my Pokémon."),
        .speechWin = COMPOUND_STRING("I am happy if we win together."),
        .speechLose = COMPOUND_STRING("I adore my Pokémon more if I lose."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JULIAN] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("JULIAN"),
        .speechBefore = COMPOUND_STRING("You adore your Pokémon right?"),
        .speechWin = COMPOUND_STRING("You're totally out of the question."),
        .speechLose = COMPOUND_STRING("You do adore your Pokémon!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_QUINN] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("QUINN"),
        .speechBefore = COMPOUND_STRING("My Pokémon are but a dream."),
        .speechWin = COMPOUND_STRING("This is a beautiful dream!"),
        .speechLose = COMPOUND_STRING("This is an awful nightmare!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HAYLEE] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("HAYLEE"),
        .speechBefore = COMPOUND_STRING("I don't know how I am feeling."),
        .speechWin = COMPOUND_STRING("I am feeling overwhelming joy over this."),
        .speechLose = COMPOUND_STRING("Destroyed is the way I am feeling."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AMANDA] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("AMANDA"),
        .speechBefore = COMPOUND_STRING("I come from a trainer family."),
        .speechWin = COMPOUND_STRING("I will treasure this win."),
        .speechLose = COMPOUND_STRING("I want to go home right now."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_STACY] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("STACY"),
        .speechBefore = COMPOUND_STRING("All Pokémon have their own cute charm."),
        .speechWin = COMPOUND_STRING("You see what I mean?"),
        .speechLose = COMPOUND_STRING("Should I not adore Pokémon?"),
        .monSet = sUniversalMonSet,
    },
    // The below 6 are the early Pkmn Breeder class trainers, which use groups from other general classes
    [FRONTIER_TRAINER_RAFAEL] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("RAFAEL"),
        .speechBefore = COMPOUND_STRING("Come on! Let's see some spirit."),
        .speechWin = COMPOUND_STRING("That's it excl that's the spirit!"),
        .speechLose = COMPOUND_STRING("Well so much for our spirit."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_OLIVER] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OLIVER"),
        .speechBefore = COMPOUND_STRING("A genius that's what I am!"),
        .speechWin = COMPOUND_STRING("That's how a genius works!"),
        .speechLose = COMPOUND_STRING("You're more a genius than I am."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PAYTON] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("PAYTON"),
        .speechBefore = COMPOUND_STRING("I train from the egg up."),
        .speechWin = COMPOUND_STRING("Well done!"),
        .speechLose = COMPOUND_STRING("That was a soft boiled loss…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PAMELA] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("PAMELA"),
        .speechBefore = COMPOUND_STRING("All Pokémon adore a kind trainer."),
        .speechWin = COMPOUND_STRING("It's too bad you lost."),
        .speechLose = COMPOUND_STRING("You're kind and you're also strong."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ELIZA] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("ELIZA"),
        .speechBefore = COMPOUND_STRING("I adore Pokémon like my children."),
        .speechWin = COMPOUND_STRING("I am so happy for my Pokémon."),
        .speechLose = COMPOUND_STRING("Oh, dear I am so sorry about this."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MARISA] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("MARISA"),
        .speechBefore = COMPOUND_STRING("I promise to battle seriously."),
        .speechWin = COMPOUND_STRING("Promise me you will do better."),
        .speechLose = COMPOUND_STRING("Promise me another battle please!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LEWIS] =
    {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LEWIS"),
        .speechBefore = COMPOUND_STRING("A little bug is scary? Hahaha."),
        .speechWin = COMPOUND_STRING("Look look! A scary bug."),
        .speechLose = COMPOUND_STRING("Oh a bug isn't scary…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_YOSHI] =
    {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("YOSHI"),
        .speechBefore = COMPOUND_STRING("Bug Pokémon make me feeling lovey dovey."),
        .speechWin = COMPOUND_STRING("Bug Pokémon are the best!"),
        .speechLose = COMPOUND_STRING("You're ignorant about bug Pokémon."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DESTIN] =
    {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("DESTIN"),
        .speechBefore = COMPOUND_STRING("It's way too hot here."),
        .speechWin = COMPOUND_STRING("I am about to overheat."),
        .speechLose = COMPOUND_STRING("Please I need some water."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KEON] =
    {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("KEON"),
        .speechBefore = COMPOUND_STRING("Forgive me but here I come!"),
        .speechWin = COMPOUND_STRING("Forgive me for my overwhelming power."),
        .speechLose = COMPOUND_STRING("I am sorry…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_STUART] =
    {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("STUART"),
        .speechBefore = COMPOUND_STRING("I promise you a hot battle."),
        .speechWin = COMPOUND_STRING("The master of cool that's me."),
        .speechLose = COMPOUND_STRING("I see I am not so cool."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_NESTOR] =
    {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("NESTOR"),
        .speechBefore = COMPOUND_STRING("Show me a really smooth move."),
        .speechWin = COMPOUND_STRING("There was nothing smooth about that."),
        .speechLose = COMPOUND_STRING("You really are smooth!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DERRICK] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("DERRICK"),
        .speechBefore = COMPOUND_STRING("Let's see you meditate like me."),
        .speechWin = COMPOUND_STRING("How I meditate is just beautiful."),
        .speechLose = COMPOUND_STRING("I will meditate for a calm mind."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRYSON] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BRYSON"),
        .speechBefore = COMPOUND_STRING("Poison powder is in our cotton spore move."),
        .speechWin = COMPOUND_STRING("How do you like our poison powder?"),
        .speechLose = COMPOUND_STRING("My cotton spore was useless."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CLAYTON] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("CLAYTON"),
        .speechBefore = COMPOUND_STRING("Huh ques where is it ques."),
        .speechWin = COMPOUND_STRING("Where is it ques I've lost my pokenav."),
        .speechLose = COMPOUND_STRING("Where is it ques I've lost my sense."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TRENTON] =
    {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("TRENTON"),
        .speechBefore = COMPOUND_STRING("Come over for some tasty water."),
        .speechWin = COMPOUND_STRING("Mmm do you want some?"),
        .speechLose = COMPOUND_STRING("I got this tasty water shopping."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JENSON] =
    {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("JENSON"),
        .speechBefore = COMPOUND_STRING("My Pokémon will make you downcast."),
        .speechWin = COMPOUND_STRING("Your Pokémon don't make the cut."),
        .speechLose = COMPOUND_STRING("I am the trainer who is feeling downcast."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_WESLEY] =
    {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("WESLEY"),
        .speechBefore = COMPOUND_STRING("Mew Mew is how I cry."),
        .speechWin = COMPOUND_STRING("Yes I know I am cute!"),
        .speechLose = COMPOUND_STRING("Mew Mew! Mew!!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ANTON] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ANTON"),
        .speechBefore = COMPOUND_STRING("Get ready for me to thrash."),
        .speechWin = COMPOUND_STRING("Wahahaha! Sorry about that!"),
        .speechLose = COMPOUND_STRING("It's a tough loss to swallow."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LAWSON] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("LAWSON"),
        .speechBefore = COMPOUND_STRING("I am young at heart!"),
        .speechWin = COMPOUND_STRING("Not cool! Not at all."),
        .speechLose = COMPOUND_STRING("I am old and feeling shaky…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SAMMY] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("SAMMY"),
        .speechBefore = COMPOUND_STRING("My party is ready to rock."),
        .speechWin = COMPOUND_STRING("My party is just incredible!"),
        .speechLose = COMPOUND_STRING("I cry for my party…"),
        .monSet = sUniversalMonSet,
    },
    // The below 3 are the early Collector class trainers, which use groups from other general classes
    [FRONTIER_TRAINER_ARNIE] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ARNIE"),
        .speechBefore = COMPOUND_STRING("I am no 1 I have no rival."),
        .speechWin = COMPOUND_STRING("You see? I can't lose."),
        .speechLose = COMPOUND_STRING("No! I won't accept this."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ADRIAN] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ADRIAN"),
        .speechBefore = COMPOUND_STRING("Yahoo! Yahoo!!"),
        .speechWin = COMPOUND_STRING("Thank you! Thank you!!"),
        .speechLose = COMPOUND_STRING("Good bye! Good bye!!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TRISTAN] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTAN"),
        .speechBefore = COMPOUND_STRING("Confused? I am a genius."),
        .speechWin = COMPOUND_STRING("See? I am a genius."),
        .speechLose = COMPOUND_STRING("I am not a genius in battle."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JULIANA] =
    {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("JULIANA"),
        .speechBefore = COMPOUND_STRING("I think I am shopping too much."),
        .speechWin = COMPOUND_STRING("But I want a Pokémon plush doll."),
        .speechLose = COMPOUND_STRING("I so want another Pokémon plush doll."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RYLEE] =
    {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("RYLEE"),
        .speechBefore = COMPOUND_STRING("Show me that you have guts."),
        .speechWin = COMPOUND_STRING("Bye bye! You have no guts."),
        .speechLose = COMPOUND_STRING("That was gutsy… You're quite super."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CHELSEA] =
    {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("CHELSEA"),
        .speechBefore = COMPOUND_STRING("I seriously mean to win!"),
        .speechWin = COMPOUND_STRING("That was my will to win."),
        .speechLose = COMPOUND_STRING("You're far too strong for me."),
        .monSet = sUniversalMonSet,
    },
    // The below 3 are the early Beauty class trainers, which use groups from other general classes
    [FRONTIER_TRAINER_DANELA] =
    {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DANELA"),
        .speechBefore = COMPOUND_STRING("You must be my opponent now!"),
        .speechWin = COMPOUND_STRING("Oh, dear too weak! Don't give up!"),
        .speechLose = COMPOUND_STRING("That was good and this is good bye."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LIZBETH] =
    {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("LIZBETH"),
        .speechBefore = COMPOUND_STRING("If I lose you can have a present."),
        .speechWin = COMPOUND_STRING("Here it is a little praise as your present."),
        .speechLose = COMPOUND_STRING("Your present?! Here it is a double slap."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AMELIA] =
    {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("AMELIA"),
        .speechBefore = COMPOUND_STRING("I believe in cute fashion appeal."),
        .speechWin = COMPOUND_STRING("Your fashion sense is a disaster."),
        .speechLose = COMPOUND_STRING("That was awful! I am going home."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JILLIAN] =
    {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("JILLIAN"),
        .speechBefore = COMPOUND_STRING("What is that I smell?"),
        .speechWin = COMPOUND_STRING("It's the sweet scent of tasty water."),
        .speechLose = COMPOUND_STRING("It's your offensive stench that's what."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ABBIE] =
    {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBIE"),
        .speechBefore = COMPOUND_STRING("You try my secret aromatherapy ok ques."),
        .speechWin = COMPOUND_STRING("My aromatherapy is terrible for you."),
        .speechLose = COMPOUND_STRING("Didn't you smell a thing?!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRIANA] =
    {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("BRIANA"),
        .speechBefore = COMPOUND_STRING("My boy friend works too much."),
        .speechWin = COMPOUND_STRING("I only miss him more…"),
        .speechLose = COMPOUND_STRING("I am so lonesome without him…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ANTONIO] =
    {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("ANTONIO"),
        .speechBefore = COMPOUND_STRING("I know how to go go."),
        .speechWin = COMPOUND_STRING("But I don't like to dance."),
        .speechLose = COMPOUND_STRING("Go go… Just flail about."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JADEN] =
    {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("JADEN"),
        .speechBefore = COMPOUND_STRING("Hello I think I adore you."),
        .speechWin = COMPOUND_STRING("You make me thrash in frustration."),
        .speechLose = COMPOUND_STRING("This is it excl good bye forever!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DAKOTA] =
    {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("DAKOTA"),
        .speechBefore = COMPOUND_STRING("You have to dance with power."),
        .speechWin = COMPOUND_STRING("Got it? Dance with power."),
        .speechLose = COMPOUND_STRING("Okay you understand all right!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRAYDEN] =
    {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("BRAYDEN"),
        .speechBefore = COMPOUND_STRING("Color change version toys are useless!"),
        .speechWin = COMPOUND_STRING("I only collect normal version toys."),
        .speechLose = COMPOUND_STRING("I attract color change version toys…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CORSON] =
    {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("CORSON"),
        .speechBefore = COMPOUND_STRING("I get to beat up on you."),
        .speechWin = COMPOUND_STRING("Too easy! I am so cool."),
        .speechLose = COMPOUND_STRING("Why?! I curse you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TREVIN] =
    {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("TREVIN"),
        .speechBefore = COMPOUND_STRING("There is none better than me."),
        .speechWin = COMPOUND_STRING("Yes sir excl I am the best."),
        .speechLose = COMPOUND_STRING("Serious?!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PATRICK] =
    {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PATRICK"),
        .speechBefore = COMPOUND_STRING("I am perfect! Give up now."),
        .speechWin = COMPOUND_STRING("Don't be disappointed I am perfect."),
        .speechLose = COMPOUND_STRING("But how? I am perfect…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KADEN] =
    {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("KADEN"),
        .speechBefore = COMPOUND_STRING("What are you up to?"),
        .speechWin = COMPOUND_STRING("You were a surprise to me!"),
        .speechLose = COMPOUND_STRING("I don't know who I am…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MAXWELL] =
    {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("MAXWELL"),
        .speechBefore = COMPOUND_STRING("Hey there who is your rival?"),
        .speechWin = COMPOUND_STRING("My rival is my girl friend."),
        .speechLose = COMPOUND_STRING("I am making you my rival."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DARYL] =
    {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DARYL"),
        .speechBefore = COMPOUND_STRING("I only know how to charge."),
        .speechWin = COMPOUND_STRING("Am I overwhelming or what?"),
        .speechLose = COMPOUND_STRING("You're going to a legend!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KENNETH] =
    {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("KENNETH"),
        .speechBefore = COMPOUND_STRING("You better not slack off with me."),
        .speechWin = COMPOUND_STRING("Did my taunt intimidate you?"),
        .speechLose = COMPOUND_STRING("I am sorry…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RICH] =
    {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("RICH"),
        .speechBefore = COMPOUND_STRING("Your facade doesn't trick me."),
        .speechWin = COMPOUND_STRING("Seriously are you really ok ques."),
        .speechLose = COMPOUND_STRING("That was really tough on me."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CADEN] =
    {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("CADEN"),
        .speechBefore = COMPOUND_STRING("I can't be defeated!"),
        .speechWin = COMPOUND_STRING("Fire! Fire!!"),
        .speechLose = COMPOUND_STRING("I am tired… It's so hot."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MARLON] =
    {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("MARLON"),
        .speechBefore = COMPOUND_STRING("A pokedex is a little radio?"),
        .speechWin = COMPOUND_STRING("A little radio huh ques that's totally cool."),
        .speechLose = COMPOUND_STRING("It's not? Is pokenav?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_NASH] =
    {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("NASH"),
        .speechBefore = COMPOUND_STRING("I am on fire baby!"),
        .speechWin = COMPOUND_STRING("I left you just an ember."),
        .speechLose = COMPOUND_STRING("Aiyeeh!! No water please."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ROBBY] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ROBBY"),
        .speechBefore = COMPOUND_STRING("Hahaha! Happy to meet you!"),
        .speechWin = COMPOUND_STRING("I am the leader with refreshing serene grace."),
        .speechLose = COMPOUND_STRING("I will thrash my toys!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_REECE] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("REECE"),
        .speechBefore = COMPOUND_STRING("My quick attack can beat a teleport."),
        .speechWin = COMPOUND_STRING("Like I said I am darn fast."),
        .speechLose = COMPOUND_STRING("I was kidding about that teleport thing."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KATHRYN] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("KATHRYN"),
        .speechBefore = COMPOUND_STRING("I don't train good enough?"),
        .speechWin = COMPOUND_STRING("Don't taunt me like that ok ques."),
        .speechLose = COMPOUND_STRING("Why couldn't I win this?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ELLEN] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("ELLEN"),
        .speechBefore = COMPOUND_STRING("Crush you like an egg!"),
        .speechWin = COMPOUND_STRING("That was a tasty victory for me."),
        .speechLose = COMPOUND_STRING("Too tough to crush!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RAMON] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("RAMON"),
        .speechBefore = COMPOUND_STRING("Okay! This is perfection."),
        .speechWin = COMPOUND_STRING("I am happy that I won!"),
        .speechLose = COMPOUND_STRING("It's a secret why I am happy."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ARTHUR] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ARTHUR"),
        .speechBefore = COMPOUND_STRING("Here I come feeling ready for it all."),
        .speechWin = COMPOUND_STRING("That's it excl that was fabulous!"),
        .speechLose = COMPOUND_STRING("That was not what I need."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALONDRA] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALONDRA"),
        .speechBefore = COMPOUND_STRING("Every day is a great day."),
        .speechWin = COMPOUND_STRING("My dive will be a legend."),
        .speechLose = COMPOUND_STRING("My dive left me cold…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ADRIANA] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ADRIANA"),
        .speechBefore = COMPOUND_STRING("Come see an incredible swift swim!"),
        .speechWin = COMPOUND_STRING("I make it look so easy."),
        .speechLose = COMPOUND_STRING("I am feeling beat up and tired."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MALIK] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("MALIK"),
        .speechBefore = COMPOUND_STRING("Oh not another battle please…"),
        .speechWin = COMPOUND_STRING("I finally won… I am tired."),
        .speechLose = COMPOUND_STRING("I finally lost… I am tired."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JILL] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("JILL"),
        .speechBefore = COMPOUND_STRING("I am the quick attack trainer!"),
        .speechWin = COMPOUND_STRING("The quick attack trainer wins!"),
        .speechLose = COMPOUND_STRING("The quick attack trainer gives up!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ERIK] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ERIK"),
        .speechBefore = COMPOUND_STRING("I am the speed boost hero!"),
        .speechWin = COMPOUND_STRING("Thank you from the speed boost hero!"),
        .speechLose = COMPOUND_STRING("Waaah!! No no!!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_YAZMIN] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("YAZMIN"),
        .speechBefore = COMPOUND_STRING("I would rather run than bike."),
        .speechWin = COMPOUND_STRING("Yes I would much rather run."),
        .speechLose = COMPOUND_STRING("Bye bye! I am going to run away."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JAMAL] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("JAMAL"),
        .speechBefore = COMPOUND_STRING("I am going to be a father."),
        .speechWin = COMPOUND_STRING("I can't wait for my baby."),
        .speechLose = COMPOUND_STRING("My baby will be totally awesome."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LESLIE] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("LESLIE"),
        .speechBefore = COMPOUND_STRING("I am going to be a mother."),
        .speechWin = COMPOUND_STRING("A baby will be a little challenge."),
        .speechLose = COMPOUND_STRING("I am too happy to be angry."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DAVE] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("DAVE"),
        .speechBefore = COMPOUND_STRING("What should I do today?"),
        .speechWin = COMPOUND_STRING("I should enjoy some sports!"),
        .speechLose = COMPOUND_STRING("I will go play a game."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CARLO] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("CARLO"),
        .speechBefore = COMPOUND_STRING("Hah!! Yeah!!"),
        .speechWin = COMPOUND_STRING("I do things at extreme speed!"),
        .speechLose = COMPOUND_STRING("I lost at extreme speed…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EMILIA] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("EMILIA"),
        .speechBefore = COMPOUND_STRING("Me worry? I have none."),
        .speechWin = COMPOUND_STRING("Ahaha see? That was fantastic!"),
        .speechLose = COMPOUND_STRING("Ahaha see? That was entertaining!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DALIA] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("DALIA"),
        .speechBefore = COMPOUND_STRING("My bike is very expensive."),
        .speechWin = COMPOUND_STRING("Don't come near my bike!"),
        .speechLose = COMPOUND_STRING("My bike is my best friend."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HITOMI] =
    {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("HITOMI"),
        .speechBefore = COMPOUND_STRING("Yeah!! Hah!!"),
        .speechWin = COMPOUND_STRING("What?! I won?!"),
        .speechLose = COMPOUND_STRING("Aiyeeh!! I am sorry!!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RICARDO] =
    {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RICARDO"),
        .speechBefore = COMPOUND_STRING("Come on! Play time is over."),
        .speechWin = COMPOUND_STRING("You're out of here!"),
        .speechLose = COMPOUND_STRING("Please don't hit me!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SHIZUKA] =
    {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("SHIZUKA"),
        .speechBefore = COMPOUND_STRING("Show me that you're serious!"),
        .speechWin = COMPOUND_STRING("I won't forget about you."),
        .speechLose = COMPOUND_STRING("You're perfect in every way!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JOANA] =
    {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("JOANA"),
        .speechBefore = COMPOUND_STRING("You're going to lose right away."),
        .speechWin = COMPOUND_STRING("I am the winner hear me roar."),
        .speechLose = COMPOUND_STRING("I refuse to accept that outrage."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KELLY] =
    {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KELLY"),
        .speechBefore = COMPOUND_STRING("My night school is really scary."),
        .speechWin = COMPOUND_STRING("A lady ghost appears there."),
        .speechLose = COMPOUND_STRING("The home work is awfully scary."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RAYNA] =
    {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("RAYNA"),
        .speechBefore = COMPOUND_STRING("I am no 1 when it's about power."),
        .speechWin = COMPOUND_STRING("Understand my power now?"),
        .speechLose = COMPOUND_STRING("Terrible… I am terrible…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EVAN] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("EVAN"),
        .speechBefore = COMPOUND_STRING("Every battle has a smell."),
        .speechWin = COMPOUND_STRING("Oh! The sweet scent of victory."),
        .speechLose = COMPOUND_STRING("The awful stench of a loss."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JORDAN] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JORDAN"),
        .speechBefore = COMPOUND_STRING("Good! Come on!!"),
        .speechWin = COMPOUND_STRING("You can't beat me!"),
        .speechLose = COMPOUND_STRING("What?! But how?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JOEL] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JOEL"),
        .speechBefore = COMPOUND_STRING("Fufufu…"),
        .speechWin = COMPOUND_STRING("Giggle…"),
        .speechLose = COMPOUND_STRING("Hahaha…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KRISTEN] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("KRISTEN"),
        .speechBefore = COMPOUND_STRING("Hahaha… A kid…"),
        .speechWin = COMPOUND_STRING("Just a little kid after all!"),
        .speechLose = COMPOUND_STRING("A tough kid huh ques humph!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SELPHY] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("SELPHY"),
        .speechBefore = COMPOUND_STRING("Huh ques what is it ques."),
        .speechWin = COMPOUND_STRING("Oh yes! Why not?"),
        .speechLose = COMPOUND_STRING("Oh no! Why not?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CHLOE] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("CHLOE"),
        .speechBefore = COMPOUND_STRING("Come we will do battle now."),
        .speechWin = COMPOUND_STRING("More! Another battle!"),
        .speechLose = COMPOUND_STRING("Oh! Strong you are."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_NORTON] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("NORTON"),
        .speechBefore = COMPOUND_STRING("I know only you."),
        .speechWin = COMPOUND_STRING("Excuse me but you're a pushover!"),
        .speechLose = COMPOUND_STRING("You're some kind of awesome!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LUKAS] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("LUKAS"),
        .speechBefore = COMPOUND_STRING("My joking is pretty terrible…"),
        .speechWin = COMPOUND_STRING("Your rock head exists to shine!"),
        .speechLose = COMPOUND_STRING("Your rock head come to shine."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ZACH] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ZACH"),
        .speechBefore = COMPOUND_STRING("I am an excellent mimic of Pokémon."),
        .speechWin = COMPOUND_STRING("I am happy like a little Togepi!"),
        .speechLose = COMPOUND_STRING("I am angry like a Mankey!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KAITLYN] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KAITLYN"),
        .speechBefore = COMPOUND_STRING("I crush things with psychic power."),
        .speechWin = COMPOUND_STRING("My victory will make the news."),
        .speechLose = COMPOUND_STRING("No no… This won't do."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BREANNA] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("BREANNA"),
        .speechBefore = COMPOUND_STRING("My Pokémon will crush you!"),
        .speechWin = COMPOUND_STRING("Have some more of this!"),
        .speechLose = COMPOUND_STRING("You have guts and skill."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KENDRA] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KENDRA"),
        .speechBefore = COMPOUND_STRING("If you're smart stop right now."),
        .speechWin = COMPOUND_STRING("I said that you should stop."),
        .speechLose = COMPOUND_STRING("Why didn't you stop?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MOLLY] =
    {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("MOLLY"),
        .speechBefore = COMPOUND_STRING("Will my cute charm attract you?"),
        .speechWin = COMPOUND_STRING("Your Pokémon are my toys now."),
        .speechLose = COMPOUND_STRING("Oh how could you?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JAZMIN] =
    {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("JAZMIN"),
        .speechBefore = COMPOUND_STRING("I forecast terrible things for you."),
        .speechWin = COMPOUND_STRING("There wasn't my forecast right?"),
        .speechLose = COMPOUND_STRING("My foresight didn't show me this."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KELSEY] =
    {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("KELSEY"),
        .speechBefore = COMPOUND_STRING("I haven't slept in days…"),
        .speechWin = COMPOUND_STRING("My sleep will be excellent now."),
        .speechLose = COMPOUND_STRING("You have destroyed my sleep…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JALEN] =
    {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("JALEN"),
        .speechBefore = COMPOUND_STRING("I don't allow Pokémon to thrash."),
        .speechWin = COMPOUND_STRING("Hahaha! Are you angry?"),
        .speechLose = COMPOUND_STRING("Why is this so hard?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GRIFFEN] =
    {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("GRIFFEN"),
        .speechBefore = COMPOUND_STRING("I swallow sludge to transform myself."),
        .speechWin = COMPOUND_STRING("I have a growth of acid armor."),
        .speechLose = COMPOUND_STRING("I have a growth of suction cups."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_XANDER] =
    {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("XANDER"),
        .speechBefore = COMPOUND_STRING("I got my Pokémon on rental."),
        .speechWin = COMPOUND_STRING("It's incredible my rental Pokémon won."),
        .speechLose = COMPOUND_STRING("Rental Pokémon aren't up to scratch."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MARVIN] =
    {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("MARVIN"),
        .speechBefore = COMPOUND_STRING("You're up to the challenge?"),
        .speechWin = COMPOUND_STRING("I didn't think you're good enough."),
        .speechLose = COMPOUND_STRING("I am feeling perfect thank you so much."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRENNAN] =
    {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BRENNAN"),
        .speechBefore = COMPOUND_STRING("I wish to see the news."),
        .speechWin = COMPOUND_STRING("Comics get damp from drizzle?"),
        .speechLose = COMPOUND_STRING("The tight money living channel?!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BALEY] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BALEY"),
        .speechBefore = COMPOUND_STRING("Screech is like music to me!"),
        .speechWin = COMPOUND_STRING("My screech strategy is the best."),
        .speechLose = COMPOUND_STRING("You're soundproof?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ZACKARY] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ZACKARY"),
        .speechBefore = COMPOUND_STRING("Can you dig it yo?"),
        .speechWin = COMPOUND_STRING("Take down take a dive yo yo."),
        .speechLose = COMPOUND_STRING("Break down dive time for me."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GABRIEL] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GABRIEL"),
        .speechBefore = COMPOUND_STRING("Pound the thick fat on my belly drum."),
        .speechWin = COMPOUND_STRING("Pound my belly drum pound my belly drum."),
        .speechLose = COMPOUND_STRING("My belly drum was too weak…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EMILY] =
    {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("EMILY"),
        .speechBefore = COMPOUND_STRING("How about a tiny bit of hypnosis?"),
        .speechWin = COMPOUND_STRING("My hypnosis strategy works to perfection."),
        .speechLose = COMPOUND_STRING("My hypnosis strategy went badly…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JORDYN] =
    {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("JORDYN"),
        .speechBefore = COMPOUND_STRING("You don't know my secret…"),
        .speechWin = COMPOUND_STRING("I am not as I appear…"),
        .speechLose = COMPOUND_STRING("But how did you know?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SOFIA] =
    {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("SOFIA"),
        .speechBefore = COMPOUND_STRING("Loudred probably has a sweet scent."),
        .speechWin = COMPOUND_STRING("That's the feeling that I get."),
        .speechLose = COMPOUND_STRING("I work at the dept store."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRADEN] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRADEN"),
        .speechBefore = COMPOUND_STRING("I choose you! This is it excl."),
        .speechWin = COMPOUND_STRING("I am feeling pretty awesome about myself."),
        .speechLose = COMPOUND_STRING("All right! I surrender!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KAYDEN] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("KAYDEN"),
        .speechBefore = COMPOUND_STRING("They overdo that gourmet thing…"),
        .speechWin = COMPOUND_STRING("That gourmet thing isn't for me."),
        .speechLose = COMPOUND_STRING("Hey this is pretty tasty."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_COOPER] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("COOPER"),
        .speechBefore = COMPOUND_STRING("This should absolutely be a pushover."),
        .speechWin = COMPOUND_STRING("That was too exciting for me…"),
        .speechLose = COMPOUND_STRING("Please! Sorry I am sorry."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JULIA] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("JULIA"),
        .speechBefore = COMPOUND_STRING("Spirit alone won't make you win."),
        .speechWin = COMPOUND_STRING("You should accept this with serene grace."),
        .speechLose = COMPOUND_STRING("For now good bye but it's not over."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AMARA] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AMARA"),
        .speechBefore = COMPOUND_STRING("Wroooaar!!! I am so ready!!"),
        .speechWin = COMPOUND_STRING("I lose myself if it's exciting."),
        .speechLose = COMPOUND_STRING("That's too much to tackle!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LYNN] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("LYNN"),
        .speechBefore = COMPOUND_STRING("Your secret can't be hidden forever."),
        .speechWin = COMPOUND_STRING("I know your secret now!"),
        .speechLose = COMPOUND_STRING("You can't safeguard your own secret."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JOVAN] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("JOVAN"),
        .speechBefore = COMPOUND_STRING("Your battle sense is sadly lacking."),
        .speechWin = COMPOUND_STRING("My battle sense is cool isn't it ques."),
        .speechLose = COMPOUND_STRING("I was minus my normal power today."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DOMINIC] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("DOMINIC"),
        .speechBefore = COMPOUND_STRING("I have this excellent camera."),
        .speechWin = COMPOUND_STRING("My camera was awfully expensive."),
        .speechLose = COMPOUND_STRING("My camera doesn't miss a thing."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_NIKOLAS] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NIKOLAS"),
        .speechBefore = COMPOUND_STRING("I mimic Pokémon after every battle."),
        .speechWin = COMPOUND_STRING("If I win I pretend I am a Tauros."),
        .speechLose = COMPOUND_STRING("If I lose I pretend I am a Miltank."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_VALERIA] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("VALERIA"),
        .speechBefore = COMPOUND_STRING("I wish you would not glare."),
        .speechWin = COMPOUND_STRING("You're mean! I mean really."),
        .speechLose = COMPOUND_STRING("You have a really scary face!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DELANEY] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DELANEY"),
        .speechBefore = COMPOUND_STRING("School is over time to play."),
        .speechWin = COMPOUND_STRING("My boy friend is from school."),
        .speechLose = COMPOUND_STRING("I have to work next week."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MEGHAN] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("MEGHAN"),
        .speechBefore = COMPOUND_STRING("School is out time to play."),
        .speechWin = COMPOUND_STRING("My boy friend likes comics."),
        .speechLose = COMPOUND_STRING("It's back to school soon."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ROBERTO] =
    {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("ROBERTO"),
        .speechBefore = COMPOUND_STRING("Dragon Pokémon are invincible!"),
        .speechWin = COMPOUND_STRING("You weren't bad I was just better."),
        .speechLose = COMPOUND_STRING("Aren't you satisfied yet?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DAMIAN] =
    {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAMIAN"),
        .speechBefore = COMPOUND_STRING("My pure power is machine like!"),
        .speechWin = COMPOUND_STRING("My mach punch will make a brick break."),
        .speechLose = COMPOUND_STRING("Arrgh! No!!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRODY] =
    {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("BRODY"),
        .speechBefore = COMPOUND_STRING("My fashion sense seems Oddish?"),
        .speechWin = COMPOUND_STRING("It's my family stay at home look!"),
        .speechLose = COMPOUND_STRING("I question your fashion sense seriously."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GRAHAM] =
    {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("GRAHAM"),
        .speechBefore = COMPOUND_STRING("Yeah! Yeah yeah!!"),
        .speechWin = COMPOUND_STRING("Wahahaha wahahaha! Wahahaha wahahaha!!"),
        .speechLose = COMPOUND_STRING("I am sorry… It's my bad."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TYLOR] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TYLOR"),
        .speechBefore = COMPOUND_STRING("Are you feeling my heat wave?"),
        .speechWin = COMPOUND_STRING("Yes I am on fire!"),
        .speechLose = COMPOUND_STRING("But I was on fire for you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JAREN] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("JAREN"),
        .speechBefore = COMPOUND_STRING("Fighting spirit? Me?"),
        .speechWin = COMPOUND_STRING("I want more cute Pokémon."),
        .speechLose = COMPOUND_STRING("Your Pokémon look quite cute."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CORDELL] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("CORDELL"),
        .speechBefore = COMPOUND_STRING("A battle is decided on spirit."),
        .speechWin = COMPOUND_STRING("Can't you accept that?"),
        .speechLose = COMPOUND_STRING("I will be on my way."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JAZLYN] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("JAZLYN"),
        .speechBefore = COMPOUND_STRING("Is your pokedex really awesome?"),
        .speechWin = COMPOUND_STRING("Oh, yeah wow your pokedex is super."),
        .speechLose = COMPOUND_STRING("An avant garde pokedex would be awesome."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ZACHERY] =
    {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("ZACHERY"),
        .speechBefore = COMPOUND_STRING("I have my own place yeehaw excl."),
        .speechWin = COMPOUND_STRING("It's an exciting time for me."),
        .speechLose = COMPOUND_STRING("You can't flatten my happiness!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JOHAN] =
    {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JOHAN"),
        .speechBefore = COMPOUND_STRING("Winter will soon be here."),
        .speechWin = COMPOUND_STRING("My allowance could use a helping hand."),
        .speechLose = COMPOUND_STRING("I always use my allowance up."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SHEA] =
    {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("SHEA"),
        .speechBefore = COMPOUND_STRING("Do you battle with beauty?"),
        .speechWin = COMPOUND_STRING("You battle in an ugly way."),
        .speechLose = COMPOUND_STRING("What is beauty to you?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KAILA] =
    {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("KAILA"),
        .speechBefore = COMPOUND_STRING("I am feeling thirsty right now…"),
        .speechWin = COMPOUND_STRING("I could use a cold drink."),
        .speechLose = COMPOUND_STRING("That loss is hard to swallow."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ISIAH] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("ISIAH"),
        .speechBefore = COMPOUND_STRING("I pretend to study a lot."),
        .speechWin = COMPOUND_STRING("I trick mother for my allowance."),
        .speechLose = COMPOUND_STRING("I don't want to study more."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GARRETT] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GARRETT"),
        .speechBefore = COMPOUND_STRING("I enjoy comics and this game."),
        .speechWin = COMPOUND_STRING("I like this music idol too."),
        .speechLose = COMPOUND_STRING("But I have to study more."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HAYLIE] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("HAYLIE"),
        .speechBefore = COMPOUND_STRING("I worry too much to sleep."),
        .speechWin = COMPOUND_STRING("A win gives me a calm mind."),
        .speechLose = COMPOUND_STRING("My insomnia will get bad…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MEGAN] =
    {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("MEGAN"),
        .speechBefore = COMPOUND_STRING("I believe in an aromatherapy bath."),
        .speechWin = COMPOUND_STRING("I want a healthy clear body."),
        .speechLose = COMPOUND_STRING("If only aromatherapy were less expensive."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ISSAC] =
    {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("ISSAC"),
        .speechBefore = COMPOUND_STRING("My hobby?"),
        .speechWin = COMPOUND_STRING("I like any kind of water sport."),
        .speechLose = COMPOUND_STRING("I dislike any kind of mud sport."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_QUINTON] =
    {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("QUINTON"),
        .speechBefore = COMPOUND_STRING("I am sad cause I am too weak."),
        .speechWin = COMPOUND_STRING("You aren't too strong for me."),
        .speechLose = COMPOUND_STRING("Hey what did I do?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SALMA] =
    {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("SALMA"),
        .speechBefore = COMPOUND_STRING("You've got your hustle on!"),
        .speechWin = COMPOUND_STRING("I win you hustle on out."),
        .speechLose = COMPOUND_STRING("I don't get how I lost."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ANSLEY] =
    {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ANSLEY"),
        .speechBefore = COMPOUND_STRING("I am bored… Dance for me."),
        .speechWin = COMPOUND_STRING("You've bored me some more."),
        .speechLose = COMPOUND_STRING("Take your frustration some other place."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HOLDEN] =
    {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("HOLDEN"),
        .speechBefore = COMPOUND_STRING("Let's commemorate my coolness in battle."),
        .speechWin = COMPOUND_STRING("You're too weak for any praise."),
        .speechLose = COMPOUND_STRING("Your battle sense is amusing."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LUCA] =
    {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LUCA"),
        .speechBefore = COMPOUND_STRING("We will have a cool battle."),
        .speechWin = COMPOUND_STRING("I won in a cool way."),
        .speechLose = COMPOUND_STRING("Hello? I am just a kid."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JAMISON] =
    {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("JAMISON"),
        .speechBefore = COMPOUND_STRING("My secret power is overwhelming to Pokémon."),
        .speechWin = COMPOUND_STRING("Did you see that?"),
        .speechLose = COMPOUND_STRING("I will use smokescreen to escape."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GUNNAR] =
    {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("GUNNAR"),
        .speechBefore = COMPOUND_STRING("I cut down every opponent."),
        .speechWin = COMPOUND_STRING("Don't grudge me for your loss."),
        .speechLose = COMPOUND_STRING("Please lose that scary face of yours."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CRAIG] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("CRAIG"),
        .speechBefore = COMPOUND_STRING("I can't wait for my train."),
        .speechWin = COMPOUND_STRING("My train isn't here yet…"),
        .speechLose = COMPOUND_STRING("Here it is my train see ya!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PIERCE] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("PIERCE"),
        .speechBefore = COMPOUND_STRING("There was a heat wave last week."),
        .speechWin = COMPOUND_STRING("I can't take a heat wave."),
        .speechLose = COMPOUND_STRING("Didn't it hail too?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_REGINA] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("REGINA"),
        .speechBefore = COMPOUND_STRING("I like to play in water."),
        .speechWin = COMPOUND_STRING("I refuse to come out."),
        .speechLose = COMPOUND_STRING("You're not much good in water."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALISON] =
    {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ALISON"),
        .speechBefore = COMPOUND_STRING("This kindergarten magazine is too much."),
        .speechWin = COMPOUND_STRING("How to bug your teacher?"),
        .speechLose = COMPOUND_STRING("Enjoy a tasty school diet?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HANK] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("HANK"),
        .speechBefore = COMPOUND_STRING("There is a bug event soon."),
        .speechWin = COMPOUND_STRING("It's a bug fashion show!"),
        .speechLose = COMPOUND_STRING("Don't you like bug Pokémon?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EARL] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("EARL"),
        .speechBefore = COMPOUND_STRING("The invincible bug trainer is here."),
        .speechWin = COMPOUND_STRING("The invincible bug trainer am I."),
        .speechLose = COMPOUND_STRING("See how fast I run away!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RAMIRO] =
    {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("RAMIRO"),
        .speechBefore = COMPOUND_STRING("I went to a fishing school."),
        .speechWin = COMPOUND_STRING("Seriously I am in the fishing hall of fame."),
        .speechLose = COMPOUND_STRING("I want to go back…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HUNTER] =
    {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("HUNTER"),
        .speechBefore = COMPOUND_STRING("Show me a totally cool cross chop."),
        .speechWin = COMPOUND_STRING("You're too weak to do a cross chop."),
        .speechLose = COMPOUND_STRING("Was it a mistake?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AIDEN] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("AIDEN"),
        .speechBefore = COMPOUND_STRING("My work is making me healthy."),
        .speechWin = COMPOUND_STRING("You see? I am healthy!"),
        .speechLose = COMPOUND_STRING("You're more healthy than I am…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_XAVIER] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("XAVIER"),
        .speechBefore = COMPOUND_STRING("Hey there! Look look!!"),
        .speechWin = COMPOUND_STRING("Good bye and thank you that was funny."),
        .speechLose = COMPOUND_STRING("Wowee! No no!!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CLINTON] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("CLINTON"),
        .speechBefore = COMPOUND_STRING("Want to see my hypnosis?"),
        .speechWin = COMPOUND_STRING("Your fury swipes your strength young trainer."),
        .speechLose = COMPOUND_STRING("Tch… I am too weak…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JESSE] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("JESSE"),
        .speechBefore = COMPOUND_STRING("This battle is for my mother."),
        .speechWin = COMPOUND_STRING("Mother will be happy for me."),
        .speechLose = COMPOUND_STRING("I want my mother!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EDUARDO] =
    {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("EDUARDO"),
        .speechBefore = COMPOUND_STRING("Our music will play all night."),
        .speechWin = COMPOUND_STRING("Nighttime is when I play best."),
        .speechLose = COMPOUND_STRING("Let's party until the morning sun!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HAL] =
    {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("HAL"),
        .speechBefore = COMPOUND_STRING("I am trendy aren't I?"),
        .speechWin = COMPOUND_STRING("I am feeling hip and happening oh, yeah!"),
        .speechLose = COMPOUND_STRING("I am always trendy thank you very much."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GAGE] =
    {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("GAGE"),
        .speechBefore = COMPOUND_STRING("Here it is a flying type hidden move."),
        .speechWin = COMPOUND_STRING("It's a flying type victory!"),
        .speechLose = COMPOUND_STRING("If I lose I just fly away."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ARNOLD] =
    {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("ARNOLD"),
        .speechBefore = COMPOUND_STRING("I am feeling weird from a dream."),
        .speechWin = COMPOUND_STRING("Your scary face was in my dream."),
        .speechLose = COMPOUND_STRING("My incredible dream was so weird."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JARRETT] =
    {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("JARRETT"),
        .speechBefore = COMPOUND_STRING("Come on let's dance like it's yesterday."),
        .speechWin = COMPOUND_STRING("You like how I dance?"),
        .speechLose = COMPOUND_STRING("You don't appreciate how I dance."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GARETT] =
    {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("GARETT"),
        .speechBefore = COMPOUND_STRING("My girl gives me a little sweet kiss."),
        .speechWin = COMPOUND_STRING("My girl friend is my treasure."),
        .speechLose = COMPOUND_STRING("A treasure isn't always about money."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EMANUEL] =
    {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("EMANUEL"),
        .speechBefore = COMPOUND_STRING("Smartness alone won't make you win."),
        .speechWin = COMPOUND_STRING("I am not very smart but I won."),
        .speechLose = COMPOUND_STRING("How did you fake out me?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GUSTAVO] =
    {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("GUSTAVO"),
        .speechBefore = COMPOUND_STRING("Charge! Charge!!"),
        .speechWin = COMPOUND_STRING("Surrender? So soon?"),
        .speechLose = COMPOUND_STRING("You can't make me surrender yet."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KAMERON] =
    {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("KAMERON"),
        .speechBefore = COMPOUND_STRING("Take that! It's my fiery trick."),
        .speechWin = COMPOUND_STRING("Did my fiery trick astonish?"),
        .speechLose = COMPOUND_STRING("You didn't fall for my trick."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALFREDO] =
    {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("ALFREDO"),
        .speechBefore = COMPOUND_STRING("A fiery gourmet am I!"),
        .speechWin = COMPOUND_STRING("It's a tasty gourmet victory!"),
        .speechLose = COMPOUND_STRING("What a disaster that was!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RUBEN] =
    {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("RUBEN"),
        .speechBefore = COMPOUND_STRING("I can't wait to get going."),
        .speechWin = COMPOUND_STRING("Get going! This is good bye."),
        .speechLose = COMPOUND_STRING("I've got to get going."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LAMAR] =
    {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("LAMAR"),
        .speechBefore = COMPOUND_STRING("A present for me?"),
        .speechWin = COMPOUND_STRING("Mmm this is quite tasty…"),
        .speechLose = COMPOUND_STRING("Oh it's a game is it ques."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JAXON] =
    {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JAXON"),
        .speechBefore = COMPOUND_STRING("A shell armor is what I want."),
        .speechWin = COMPOUND_STRING("My father and mother won't accept."),
        .speechLose = COMPOUND_STRING("Please I need a shell armor!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LOGAN] =
    {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("LOGAN"),
        .speechBefore = COMPOUND_STRING("If I lose I will study for school."),
        .speechWin = COMPOUND_STRING("Me study? Not very likely to see."),
        .speechLose = COMPOUND_STRING("No thanks I am going to sleep."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EMILEE] =
    {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("EMILEE"),
        .speechBefore = COMPOUND_STRING("Is this kind of battle ok ques."),
        .speechWin = COMPOUND_STRING("Let's go for an icy wind surf."),
        .speechLose = COMPOUND_STRING("How about a rock slide show?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JOSIE] =
    {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("JOSIE"),
        .speechBefore = COMPOUND_STRING("A Pokémon fashion contest is pretty."),
        .speechWin = COMPOUND_STRING("I really like mode fashion things."),
        .speechLose = COMPOUND_STRING("You're totally lacking in fashion sense."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ARMANDO] =
    {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("ARMANDO"),
        .speechBefore = COMPOUND_STRING("I need more grass type Pokémon."),
        .speechWin = COMPOUND_STRING("Trade me a grass Pokémon please."),
        .speechLose = COMPOUND_STRING("There aren't enough grass type Pokémon."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SKYLER] =
    {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("SKYLER"),
        .speechBefore = COMPOUND_STRING("Ingrain is my choice battle move."),
        .speechWin = COMPOUND_STRING("You can't move me now!"),
        .speechLose = COMPOUND_STRING("You cut me down…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RUTH] =
    {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("RUTH"),
        .speechBefore = COMPOUND_STRING("I want to enjoy this battle."),
        .speechWin = COMPOUND_STRING("That was much too easy!"),
        .speechLose = COMPOUND_STRING("Please stop I don't enjoy this."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MELODY] =
    {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("MELODY"),
        .speechBefore = COMPOUND_STRING("I wish sunday is a sunny day."),
        .speechWin = COMPOUND_STRING("Sunday seems forever to come…"),
        .speechLose = COMPOUND_STRING("The forecast says it will hail."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PEDRO] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("PEDRO"),
        .speechBefore = COMPOUND_STRING("A swift swim will do you good."),
        .speechWin = COMPOUND_STRING("That's how I sink an opponent."),
        .speechLose = COMPOUND_STRING("Uh-oh! A whirlpool!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ERICK] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("ERICK"),
        .speechBefore = COMPOUND_STRING("I will tackle you down!"),
        .speechWin = COMPOUND_STRING("Don't you run away you loser!"),
        .speechLose = COMPOUND_STRING("I didn't think you would counter."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ELAINE] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("ELAINE"),
        .speechBefore = COMPOUND_STRING("My heroine adventure isn't going well."),
        .speechWin = COMPOUND_STRING("Thank you! That's what I need."),
        .speechLose = COMPOUND_STRING("I know I am not a heroine."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JOYCE] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("JOYCE"),
        .speechBefore = COMPOUND_STRING("You make me go ahaha!"),
        .speechWin = COMPOUND_STRING("Lalala no losing for me!"),
        .speechLose = COMPOUND_STRING("Lalala… Huh ques."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TODD] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TODD"),
        .speechBefore = COMPOUND_STRING("You're a lightningrod for my power."),
        .speechWin = COMPOUND_STRING("That's all you could absorb?"),
        .speechLose = COMPOUND_STRING("You reflect my power back?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GAVIN] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("GAVIN"),
        .speechBefore = COMPOUND_STRING("I will bide my time."),
        .speechWin = COMPOUND_STRING("It's over so soon?"),
        .speechLose = COMPOUND_STRING("My mistake was too expensive…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MALORY] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("MALORY"),
        .speechBefore = COMPOUND_STRING("Promise to show me cute Pokémon."),
        .speechWin = COMPOUND_STRING("Giggle… Thank you so much."),
        .speechLose = COMPOUND_STRING("Tch your Pokémon aren't very nice."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ESTHER] =
    {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("ESTHER"),
        .speechBefore = COMPOUND_STRING("I want a nice present…"),
        .speechWin = COMPOUND_STRING("Please get me a Pokémon game."),
        .speechLose = COMPOUND_STRING("Message cards make a weak present."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_OSCAR] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OSCAR"),
        .speechBefore = COMPOUND_STRING("Let's see your power in full."),
        .speechWin = COMPOUND_STRING("That was not your full power!"),
        .speechLose = COMPOUND_STRING("Not funny… You're too strong."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_WILSON] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("WILSON"),
        .speechBefore = COMPOUND_STRING("Work is making me an early bird."),
        .speechWin = COMPOUND_STRING("All work and no play…"),
        .speechLose = COMPOUND_STRING("Endure is all I can do."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CLARE] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("CLARE"),
        .speechBefore = COMPOUND_STRING("Yay! A tough trainer!"),
        .speechWin = COMPOUND_STRING("Aww! A wimpy trainer!"),
        .speechLose = COMPOUND_STRING("Cool! A genius trainer!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TESS] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("TESS"),
        .speechBefore = COMPOUND_STRING("Want some Gulpin design sweets?"),
        .speechWin = COMPOUND_STRING("They're a secret Pokémon gourmet item."),
        .speechLose = COMPOUND_STRING("They're tasty! Refreshing too!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LEON] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("LEON"),
        .speechBefore = COMPOUND_STRING("I am better than any other trainer."),
        .speechWin = COMPOUND_STRING("I did it jump kick for joy."),
        .speechLose = COMPOUND_STRING("Back home I will go…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALONZO] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("ALONZO"),
        .speechBefore = COMPOUND_STRING("I've not lost once yet!"),
        .speechWin = COMPOUND_STRING("Your sad look becomes you."),
        .speechLose = COMPOUND_STRING("I don't believe this…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_VINCE] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("VINCE"),
        .speechBefore = COMPOUND_STRING("The top trainer that's me!"),
        .speechWin = COMPOUND_STRING("The top rank belongs to me!"),
        .speechLose = COMPOUND_STRING("I will appeal this outrage!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRYON] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRYON"),
        .speechBefore = COMPOUND_STRING("My barrage will slam you!"),
        .speechWin = COMPOUND_STRING("You didn't count on any less?"),
        .speechLose = COMPOUND_STRING("I just don't get it…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AVA] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AVA"),
        .speechBefore = COMPOUND_STRING("I am a treasure of this world."),
        .speechWin = COMPOUND_STRING("My world is full of wonder."),
        .speechLose = COMPOUND_STRING("Why are you so terrible?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MIRIAM] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("MIRIAM"),
        .speechBefore = COMPOUND_STRING("Oh a trainer with a scary face."),
        .speechWin = COMPOUND_STRING("Ahaha you only look scary!"),
        .speechLose = COMPOUND_STRING("Aiyeeh! You really are scary."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CARRIE] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("CARRIE"),
        .speechBefore = COMPOUND_STRING("I will show you gutsy!"),
        .speechWin = COMPOUND_STRING("It's all about guts!"),
        .speechLose = COMPOUND_STRING("Oh no… Self destruct mode!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GILLIAN2] =
    {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("GILLIAN"),
        .speechBefore = COMPOUND_STRING("I seek a truly great battle."),
        .speechWin = COMPOUND_STRING("I need a lot better battle…"),
        .speechLose = COMPOUND_STRING("That was a little too much to take."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TYLER] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("TYLER"),
        .speechBefore = COMPOUND_STRING("Yo! Let's go!!"),
        .speechWin = COMPOUND_STRING("Yo! I won yo."),
        .speechLose = COMPOUND_STRING("Yo! I lost yo."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CHAZ] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("CHAZ"),
        .speechBefore = COMPOUND_STRING("My Pokémon have too much power."),
        .speechWin = COMPOUND_STRING("They have more power now!"),
        .speechLose = COMPOUND_STRING("Yeah take down their power a tiny bit please."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_NELSON] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NELSON"),
        .speechBefore = COMPOUND_STRING("Well then will this Pokémon work?"),
        .speechWin = COMPOUND_STRING("I see that it was too strong."),
        .speechLose = COMPOUND_STRING("It didn't match up well I think."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SHANIA] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("SHANIA"),
        .speechBefore = COMPOUND_STRING("All my Pokémon absolutely adore me."),
        .speechWin = COMPOUND_STRING("Happiness is a Pokémon with cute charm."),
        .speechLose = COMPOUND_STRING("You're so mean to cute Pokémon."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_STELLA] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("STELLA"),
        .speechBefore = COMPOUND_STRING("I want to see your Pokémon."),
        .speechWin = COMPOUND_STRING("Well aren't they boring? Ahaha."),
        .speechLose = COMPOUND_STRING("Your Pokémon are something else all right."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DORINE] =
    {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DORINE"),
        .speechBefore = COMPOUND_STRING("I am young and strong!"),
        .speechWin = COMPOUND_STRING("See? Aren't I good?"),
        .speechLose = COMPOUND_STRING("This isn't working out at all."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MADDOX] =
    {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("MADDOX"),
        .speechBefore = COMPOUND_STRING("Dragon Pokémon are my no 1 choice."),
        .speechWin = COMPOUND_STRING("It's no secret dragon Pokémon win."),
        .speechLose = COMPOUND_STRING("Dragon Pokémon should not lose!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DAVIN] =
    {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAVIN"),
        .speechBefore = COMPOUND_STRING("Let's hear you roar!"),
        .speechWin = COMPOUND_STRING("Wroooaar! Victory!!"),
        .speechLose = COMPOUND_STRING("Wroooaar! Why?!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TREVON] =
    {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("TREVON"),
        .speechBefore = COMPOUND_STRING("I am living only with dragon Pokémon."),
        .speechWin = COMPOUND_STRING("The way I am living is perfect."),
        .speechLose = COMPOUND_STRING("You've destroyed the way I am living."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MATEO] =
    {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("MATEO"),
        .speechBefore = COMPOUND_STRING("This should be over soon enough."),
        .speechWin = COMPOUND_STRING("Well that didn't take very much."),
        .speechLose = COMPOUND_STRING("I can't lose so soon!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRET] =
    {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("BRET"),
        .speechBefore = COMPOUND_STRING("I like rock solid Pokémon the best."),
        .speechWin = COMPOUND_STRING("Toughness is the way to go."),
        .speechLose = COMPOUND_STRING("I also have a plush doll collection."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RAUL] =
    {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RAUL"),
        .speechBefore = COMPOUND_STRING("I reject every weak trainer."),
        .speechWin = COMPOUND_STRING("Humph! Another weak trainer…"),
        .speechLose = COMPOUND_STRING("There is nothing weak about you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KAY] =
    {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KAY"),
        .speechBefore = COMPOUND_STRING("And yet another battle?"),
        .speechWin = COMPOUND_STRING("I won but I am tired…"),
        .speechLose = COMPOUND_STRING("Good it's over at last…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ELENA] =
    {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ELENA"),
        .speechBefore = COMPOUND_STRING("A battle girl that's me!"),
        .speechWin = COMPOUND_STRING("Isn't a battle girl awesome?"),
        .speechLose = COMPOUND_STRING("You dislike a battle girl?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALANA] =
    {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ALANA"),
        .speechBefore = COMPOUND_STRING("Eat my invincible attack you!"),
        .speechWin = COMPOUND_STRING("You have much to learn."),
        .speechLose = COMPOUND_STRING("So much for my invincible attack."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALEXAS] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("ALEXAS"),
        .speechBefore = COMPOUND_STRING("Good to meet you young trainer!"),
        .speechWin = COMPOUND_STRING("Wahahaha! Give it up."),
        .speechLose = COMPOUND_STRING("You are a strong trainer kid."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_WESTON] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("WESTON"),
        .speechBefore = COMPOUND_STRING("I don't play down all right?"),
        .speechWin = COMPOUND_STRING("You're far too easy to attack."),
        .speechLose = COMPOUND_STRING("Well well… I surrender…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JASPER] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JASPER"),
        .speechBefore = COMPOUND_STRING("I am not old I am skilled!"),
        .speechWin = COMPOUND_STRING("Skilled that's what I am!"),
        .speechLose = COMPOUND_STRING("I am shocked! Down I go."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_NADIA] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("NADIA"),
        .speechBefore = COMPOUND_STRING("You can't beat me down!"),
        .speechWin = COMPOUND_STRING("Hah! I beat you."),
        .speechLose = COMPOUND_STRING("I am beat up and downcast…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MIRANDA] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("MIRANDA"),
        .speechBefore = COMPOUND_STRING("Well well let's start."),
        .speechWin = COMPOUND_STRING("What? Done so soon?"),
        .speechLose = COMPOUND_STRING("Well I see that I am too weak."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_EMMA] =
    {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("EMMA"),
        .speechBefore = COMPOUND_STRING("I've been hearing about you."),
        .speechWin = COMPOUND_STRING("I think I've misheard things."),
        .speechLose = COMPOUND_STRING("What I've been hearing is right."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ROLANDO] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ROLANDO"),
        .speechBefore = COMPOUND_STRING("I am a super Pokémon hero!"),
        .speechWin = COMPOUND_STRING("Was that enough for you?"),
        .speechLose = COMPOUND_STRING("You should not beat a hero."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_STANLY] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("STANLY"),
        .speechBefore = COMPOUND_STRING("This should be an easy match."),
        .speechWin = COMPOUND_STRING("It really was easy."),
        .speechLose = COMPOUND_STRING("Are you happy now?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DARIO] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("DARIO"),
        .speechBefore = COMPOUND_STRING("My foresight says I will win."),
        .speechWin = COMPOUND_STRING("My foresight has been perfect."),
        .speechLose = COMPOUND_STRING("I didn't see this reversal…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_KARLEE] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KARLEE"),
        .speechBefore = COMPOUND_STRING("Something good will come of this."),
        .speechWin = COMPOUND_STRING("You see? Fantastic!"),
        .speechLose = COMPOUND_STRING("That something good went to you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JAYLIN] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("JAYLIN"),
        .speechBefore = COMPOUND_STRING("Every trainer has been too weak…"),
        .speechWin = COMPOUND_STRING("It's making me yawn that battle."),
        .speechLose = COMPOUND_STRING("I slept and so I lost."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_INGRID] =
    {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("INGRID"),
        .speechBefore = COMPOUND_STRING("I am not a very mean trainer."),
        .speechWin = COMPOUND_STRING("Wasn't that a good match?"),
        .speechLose = COMPOUND_STRING("I lost cause you're mean…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DELILAH] =
    {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("DELILAH"),
        .speechBefore = COMPOUND_STRING("Don't grudge me if I win ok ques."),
        .speechWin = COMPOUND_STRING("I am sorry to see you angry."),
        .speechLose = COMPOUND_STRING("I have a grudge with you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CARLY] =
    {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("CARLY"),
        .speechBefore = COMPOUND_STRING("I will scatter some poison powder about."),
        .speechWin = COMPOUND_STRING("It's scary how my strategy works."),
        .speechLose = COMPOUND_STRING("I dislike you and your Pokémon."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LEXIE] =
    {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("LEXIE"),
        .speechBefore = COMPOUND_STRING("Want to see scary Pokémon?"),
        .speechWin = COMPOUND_STRING("Wasn't that scary eh?"),
        .speechLose = COMPOUND_STRING("You're more scary than my Pokémon."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MILLER] =
    {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MILLER"),
        .speechBefore = COMPOUND_STRING("Hello? Hello?!"),
        .speechWin = COMPOUND_STRING("Hello mother! I won!"),
        .speechLose = COMPOUND_STRING("My phone isn't working…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MARV] =
    {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MARV"),
        .speechBefore = COMPOUND_STRING("You can lose your swagger now."),
        .speechWin = COMPOUND_STRING("There is no swagger left eh?"),
        .speechLose = COMPOUND_STRING("Go on swagger all you want."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LAYTON] =
    {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("LAYTON"),
        .speechBefore = COMPOUND_STRING("I know I am totally cool!"),
        .speechWin = COMPOUND_STRING("You can look up to me."),
        .speechLose = COMPOUND_STRING("You're cool! No really!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BROOKS] =
    {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BROOKS"),
        .speechBefore = COMPOUND_STRING("This is a high level battle."),
        .speechWin = COMPOUND_STRING("That was high level and exciting too."),
        .speechLose = COMPOUND_STRING("You're too high in level…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GREGORY] =
    {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("GREGORY"),
        .speechBefore = COMPOUND_STRING("I am not that old yet."),
        .speechWin = COMPOUND_STRING("Who says I am too old?"),
        .speechLose = COMPOUND_STRING("Please I am really not that old."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_REESE] =
    {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("REESE"),
        .speechBefore = COMPOUND_STRING("I've a couple things."),
        .speechWin = COMPOUND_STRING("Don't diet play sports instead."),
        .speechLose = COMPOUND_STRING("Instead of television get a book."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_MASON] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("MASON"),
        .speechBefore = COMPOUND_STRING("Please don't make this scary."),
        .speechWin = COMPOUND_STRING("Thank you… I am happy now."),
        .speechLose = COMPOUND_STRING("I am disappointed…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TOBY] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("TOBY"),
        .speechBefore = COMPOUND_STRING("Listen up I always win."),
        .speechWin = COMPOUND_STRING("I am a genius or what?"),
        .speechLose = COMPOUND_STRING("I can beat you at smartness."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DOROTHY] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("DOROTHY"),
        .speechBefore = COMPOUND_STRING("The sports world should accept Pokémon."),
        .speechWin = COMPOUND_STRING("Thank you! That win was refreshing."),
        .speechLose = COMPOUND_STRING("Thank you! That loss was refreshing."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PIPER] =
    {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("PIPER"),
        .speechBefore = COMPOUND_STRING("Come on you need a speed boost?"),
        .speechWin = COMPOUND_STRING("You need to show more guts."),
        .speechLose = COMPOUND_STRING("Oh you!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_FINN] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("FINN"),
        .speechBefore = COMPOUND_STRING("Not another trainer battle…"),
        .speechWin = COMPOUND_STRING("Won't this ever end?"),
        .speechLose = COMPOUND_STRING("I finally get to rest a little."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_SAMIR] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SAMIR"),
        .speechBefore = COMPOUND_STRING("I dive below the surf!"),
        .speechWin = COMPOUND_STRING("Yahoo take a dive you!"),
        .speechLose = COMPOUND_STRING("I am going to sink…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_FIONA] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("FIONA"),
        .speechBefore = COMPOUND_STRING("Did you limber up before?"),
        .speechWin = COMPOUND_STRING("You need to be more ready."),
        .speechLose = COMPOUND_STRING("Being limber didn't work for me."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GLORIA] =
    {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("GLORIA"),
        .speechBefore = COMPOUND_STRING("I like to attack with suction cups."),
        .speechWin = COMPOUND_STRING("Giggle… It's over for you."),
        .speechLose = COMPOUND_STRING("I don't get how suction cups work."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_NICO] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("NICO"),
        .speechBefore = COMPOUND_STRING("Like a sonic boom I've arrived."),
        .speechWin = COMPOUND_STRING("Sorry to make you so downcast."),
        .speechLose = COMPOUND_STRING("I am going with a supersonic speed boost."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_JEREMY] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("JEREMY"),
        .speechBefore = COMPOUND_STRING("A Pokémon master that's my dream."),
        .speechWin = COMPOUND_STRING("My dream isn't far off!"),
        .speechLose = COMPOUND_STRING("What I dream isn't happening…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CAITLIN] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("CAITLIN"),
        .speechBefore = COMPOUND_STRING("Don't you think I am cute?"),
        .speechWin = COMPOUND_STRING("There is more to me than cuteness."),
        .speechLose = COMPOUND_STRING("My cute charm doesn't attract you?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_REENA] =
    {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("REENA"),
        .speechBefore = COMPOUND_STRING("I am always happy happy happy!"),
        .speechWin = COMPOUND_STRING("Oh yay! Yahoo for me."),
        .speechLose = COMPOUND_STRING("Yahoo! I am happy for you."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_AVERY] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("AVERY"),
        .speechBefore = COMPOUND_STRING("I've got a lot of bug Pokémon."),
        .speechWin = COMPOUND_STRING("My bug Pokémon are all unbelievable."),
        .speechLose = COMPOUND_STRING("My bug Pokémon are all upside down."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_LIAM] =
    {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("LIAM"),
        .speechBefore = COMPOUND_STRING("We really dislike fire and flying."),
        .speechWin = COMPOUND_STRING("Bug Pokémon aren't bad hey ques."),
        .speechLose = COMPOUND_STRING("You know what we dislike hey ques."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_THEO] =
    {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("THEO"),
        .speechBefore = COMPOUND_STRING("Fishing is my choice in life."),
        .speechWin = COMPOUND_STRING("Water Pokémon attract me without end."),
        .speechLose = COMPOUND_STRING("Don't count on that happening another time."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BAILEY] =
    {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("BAILEY"),
        .speechBefore = COMPOUND_STRING("I am an adult I battle easy."),
        .speechWin = COMPOUND_STRING("I am an adult I swallow joy."),
        .speechLose = COMPOUND_STRING("I am an adult I swallow frustration."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HUGO] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("HUGO"),
        .speechBefore = COMPOUND_STRING("I try the best I can."),
        .speechWin = COMPOUND_STRING("I can win if I try enough."),
        .speechLose = COMPOUND_STRING("I did try didn't I?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_BRYCE] =
    {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("BRYCE"),
        .speechBefore = COMPOUND_STRING("I was on vacation until only yesterday."),
        .speechWin = COMPOUND_STRING("I haven't lost my skill yet."),
        .speechLose = COMPOUND_STRING("That's it… I need sleep."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GIDEON] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GIDEON"),
        .speechBefore = COMPOUND_STRING("What's up ques you think I am scary?"),
        .speechWin = COMPOUND_STRING("I am cool but not scary!"),
        .speechLose = COMPOUND_STRING("Look at my fabulous fashion sense."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_TRISTON] =
    {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTON"),
        .speechBefore = COMPOUND_STRING("I would rather look at Pokémon."),
        .speechWin = COMPOUND_STRING("Huh ques you mean I won?!"),
        .speechLose = COMPOUND_STRING("See? I always lose."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_CHARLES] =
    {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("CHARLES"),
        .speechBefore = COMPOUND_STRING("It's hopeless to struggle with me."),
        .speechWin = COMPOUND_STRING("Submission was your only choice."),
        .speechLose = COMPOUND_STRING("I am going down down down!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_RAYMOND] =
    {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("RAYMOND"),
        .speechBefore = COMPOUND_STRING("Want to hear my song?"),
        .speechWin = COMPOUND_STRING("Satisfied that's what I am!"),
        .speechLose = COMPOUND_STRING("Satisfied is what I can't be."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DIRK] =
    {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("DIRK"),
        .speechBefore = COMPOUND_STRING("Flying Pokémon are above the rest."),
        .speechWin = COMPOUND_STRING("You can't win! Flying Pokémon rule."),
        .speechLose = COMPOUND_STRING("Aren't there more flying Pokémon?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_HAROLD] =
    {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("HAROLD"),
        .speechBefore = COMPOUND_STRING("My Pokémon appeal to you?"),
        .speechWin = COMPOUND_STRING("You do like my Pokémon?"),
        .speechLose = COMPOUND_STRING("So you dislike my Pokémon?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_OMAR] =
    {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("OMAR"),
        .speechBefore = COMPOUND_STRING("Let me win in return for a present."),
        .speechWin = COMPOUND_STRING("Here you are some toxic sweets."),
        .speechLose = COMPOUND_STRING("Your present? What for?!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PETER] =
    {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PETER"),
        .speechBefore = COMPOUND_STRING("I brag about my happiness ok ques."),
        .speechWin = COMPOUND_STRING("You have to listen to me brag."),
        .speechLose = COMPOUND_STRING("I am disappointed you won't listen to me."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DEV] =
    {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DEV"),
        .speechBefore = COMPOUND_STRING("Come on let's get a move on."),
        .speechWin = COMPOUND_STRING("I get to nap after that."),
        .speechLose = COMPOUND_STRING("I need to nap after that."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_COREY] =
    {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("COREY"),
        .speechBefore = COMPOUND_STRING("Let's teach you how tough I am."),
        .speechWin = COMPOUND_STRING("Look at me make a brick break."),
        .speechLose = COMPOUND_STRING("My frustration is close to eruption."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ANDRE] =
    {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("ANDRE"),
        .speechBefore = COMPOUND_STRING("Now this is a perfect flame body."),
        .speechWin = COMPOUND_STRING("Look at my fiery dance!"),
        .speechLose = COMPOUND_STRING("You want an explosion here?"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_FERRIS] =
    {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("FERRIS"),
        .speechBefore = COMPOUND_STRING("I am no 1 in the old class."),
        .speechWin = COMPOUND_STRING("No 1 that's what I am!"),
        .speechLose = COMPOUND_STRING("I am not no 1 any more…"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ALIVIA] =
    {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("ALIVIA"),
        .speechBefore = COMPOUND_STRING("I am feeling giddy so should you."),
        .speechWin = COMPOUND_STRING("It was all together too easy."),
        .speechLose = COMPOUND_STRING("I will giddy up and away."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_PAIGE] =
    {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("PAIGE"),
        .speechBefore = COMPOUND_STRING("Let's enjoy our battle together."),
        .speechWin = COMPOUND_STRING("That's it excl thank you very much."),
        .speechLose = COMPOUND_STRING("That's it excl do go on."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ANYA] =
    {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("ANYA"),
        .speechBefore = COMPOUND_STRING("I dislike oh so pretty fashion."),
        .speechWin = COMPOUND_STRING("Fashion should match the person."),
        .speechLose = COMPOUND_STRING("Pretty could be good."),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_DAWN] =
    {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DAWN"),
        .speechBefore = COMPOUND_STRING("I go all out!"),
        .speechWin = COMPOUND_STRING("Don't be a baby!"),
        .speechLose = COMPOUND_STRING("You won! Move on!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_ABBY] =
    {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBY"),
        .speechBefore = COMPOUND_STRING("I like a trainer that's refreshing."),
        .speechWin = COMPOUND_STRING("Victory has a sweet scent!"),
        .speechLose = COMPOUND_STRING("What an awful stench!"),
        .monSet = sUniversalMonSet,
    },
    [FRONTIER_TRAINER_GRETEL] =
    {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("GRETEL"),
        .speechBefore = COMPOUND_STRING("I cause outrage as a trainer."),
        .speechWin = COMPOUND_STRING("It's only natural see ya bye bye!"),
        .speechLose = COMPOUND_STRING("It's hard to believe but congrats."),
        .monSet = sUniversalMonSet,
    }
};
