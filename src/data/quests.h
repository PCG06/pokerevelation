#include "constants/quests.h"

static const u8 sText_Done[] = _("Done");
static const u8 sText_Revelation[] = _("REVELATION");
static const u8 sText_JakesGym[] = _("Jake's Gym, REVELATION");
static const u8 sText_ReevesGym[] = _("Reeve's Gym, REVELATION");
static const u8 sText_PremsGym[] = _("Prem's Gym, REVELATION");
static const u8 sText_JaisonsGym[] = _("Jaison's Gym, REVELATION");
static const u8 sText_PrajithsGym[] = _("Prajith's Gym, REVELATION");
static const u8 sText_VarunsGym[] = _("Varun's Gym, REVELATION");
static const u8 sText_SnehalsGym[] = _("Snehal's Gym, REVELATION");
static const u8 sText_RajeshsGym[] = _("Rajesh's Gym, REVELATION");
static const u8 sText_ChallengersArena[] = _("Challengers' Arena, REVELATION");

///////////////////////////////////////////////////////////////////////////////
////////////////////////BEGIN QUEST CUSTOMIZATION//////////////////////////////

//Declaration of side quest structures. Edits to quests are made here.
const struct SideQuest sSideQuests[QUEST_COUNT] =
{
    [QUEST_1_BEAT_GYM_JAKE] =
    {
        .name = COMPOUND_STRING("Beat Jake's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Prajesh, Jake and Pawan!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 1 by defeating\n"
                    "Prajesh, Jake and Pawan!"),
        .map = sText_JakesGym,
        .sprite = OBJ_EVENT_GFX_ROXANNE,
        .spritetype = OBJECT,
        .subquests = sSubQuests1,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_2_BEAT_GYM_REEVE] =
    {
        .name = COMPOUND_STRING("Beat Reeve's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Premal, Reeve and Hanston!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 2 by defeating\n"
                    "Premal, Reeve and Hanston!"),
        .map = sText_ReevesGym,
        .sprite = OBJ_EVENT_GFX_BRAWLY,
        .spritetype = OBJECT,
        .subquests = sSubQuests2,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_3_BEAT_GYM_PREM] =
    {
        .name = COMPOUND_STRING("Beat Prem's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Don, Prem and Rashel!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 3 by defeating\n"
                    "Don, Prem and Rashel!"),
        .map = sText_PremsGym,
        .sprite = OBJ_EVENT_GFX_WATTSON,
        .spritetype = OBJECT,
        .subquests = sSubQuests3,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_4_BEAT_GYM_JAISON] =
    {
        .name = COMPOUND_STRING("Beat Jaison's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Dara, Jaison and Akshara!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 4 by defeating\n"
                    "Dara, Jaison and Akshara!"),
        .map = sText_JaisonsGym,
        .sprite = OBJ_EVENT_GFX_FLANNERY,
        .spritetype = OBJECT,
        .subquests = sSubQuests4,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_5_BEAT_GYM_PRAJITH] =
    {
        .name = COMPOUND_STRING("Beat Prajith's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Delson, Prajith and Gilston!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 5 by defeating\n"
                    "Delson, Prajith and Gilston!"),
        .map = sText_PrajithsGym,
        .sprite = OBJ_EVENT_GFX_NORMAN,
        .spritetype = OBJECT,
        .subquests = sSubQuests5,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_6_BEAT_GYM_VARUN] =
    {
        .name = COMPOUND_STRING("Beat Varun's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Darwin, Varun and Monvish!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 6 by defeating\n"
                    "Darwin, Varun and Monvish!"),
        .map = sText_VarunsGym,
        .sprite = OBJ_EVENT_GFX_WINONA,
        .spritetype = OBJECT,
        .subquests = sSubQuests6,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_7_BEAT_GYM_SNEHAL] =
    {
        .name = COMPOUND_STRING("Beat Snehal's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Handam, Snehal and Adithya!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 7 by defeating\n"
                    "Handam, Snehal and Adithya!"),
        .map = sText_SnehalsGym,
        .sprite = OBJ_EVENT_GFX_TATE,
        .spritetype = OBJECT,
        .subquests = sSubQuests7,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_8_BEAT_GYM_RAJESH] =
    {
        .name = COMPOUND_STRING("Beat Rajesh's Gym"),
        .desc = COMPOUND_STRING(
                    "Secure your badge by defeating\n"
                    "Deon, Rajesh and Rion!"),
        .donedesc = COMPOUND_STRING(
                    "Secured Badge 8 by defeating\n"
                    "Deon, Rajesh and Rion!"),
        .map = sText_RajeshsGym,
        .sprite = OBJ_EVENT_GFX_JUAN,
        .spritetype = OBJECT,
        .subquests = sSubQuests8,
        .numSubquests = GYM_SUBQUESTS_COUNT
    },

    [QUEST_9_BEAT_CHALLENGERS_ARENA] =
    {
        .name = COMPOUND_STRING("Beat the Challengers"),
        .desc = COMPOUND_STRING(
                    "Prove your might by overcoming\n"
                    "every rival in the arena!"),
        .donedesc = COMPOUND_STRING(
                    "All challengers have fallen before\n"
                    "your strength!"),
        .map = COMPOUND_STRING("Challengers' Arena, REVELATION"),
        .sprite = OBJ_EVENT_GFX_MAN_3,
        .spritetype = OBJECT,
        .subquests = sSubQuests9,
        .numSubquests = CHALLENGERS_SUBQUEST_COUNT
    },

    [QUEST_10_THE_REVELATION_CHAMPION] =
    {
        .name = COMPOUND_STRING("The Revelation Champion"),
        .desc = COMPOUND_STRING(
                    "Defeat every Gym and the\n"
                    "Challengers to claim your title!"),
        .donedesc = COMPOUND_STRING(
                    "Defeated all Gyms and Challengers\n"
                    "crowned the Revelation Champion!\n"),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_WALLACE,
        .spritetype = OBJECT,
        .subquests = NULL,
        .numSubquests = 0
    },

    [QUEST_11_THE_MONOTYPE_MASOCHIST] =
    {
        .name = COMPOUND_STRING("The Monotype Masochist"),
        .desc = COMPOUND_STRING(
                    "Defeat the Revelation Tournament \n"
                    "with Pokémon of a specific type."),
        .donedesc = COMPOUND_STRING(
                    "Defeated the Revelation Tournament \n"
                    "with Pokémon of a specific type."),
        .map = sText_Revelation,
        .sprite = ITEM_TM01,
        .spritetype = ITEM,
        .subquests = sSubQuests11,
        .numSubquests = MONOTYPE_SUBQUEST_COUNT
    },

    [QUEST_12_THE_REGIONAL_REGAL] =
    {
        .name = COMPOUND_STRING("The Regional Regal"),
        .desc = COMPOUND_STRING(
                    "Defeat the Revelation Tournament\n"
                    "with Pokémon from a specific\n"
                    "region."),
        .donedesc = COMPOUND_STRING(
                    "Defeated the Revelation Tournament\n"
                    "with Pokémon from a specific\n"
                    "region."),
        .map = sText_Revelation,
        .sprite = ITEM_TM01,
        .spritetype = ITEM,
        .subquests = sSubQuests12,
        .numSubquests = MONOREGION_SUBQUEST_COUNT
    }
};
////////////////////////END QUEST CUSTOMIZATION////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
//////////////////////BEGIN SUBQUEST CUSTOMIZATION/////////////////////////////

//Declaration of subquest structures. Edits to subquests are made here.
const struct SubQuest sSubQuests1[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_1_BEAT_PRAJESH + QUEST_1_OFFSET,
        .name = COMPOUND_STRING("Beat Prajesh"),
        .desc = COMPOUND_STRING(
                    "Defeated the Grass-type specialist\n"
                    "guarding Jake's Gym entrance."),
        .map = sText_JakesGym,
        .sprite = OBJ_EVENT_GFX_CAMPER,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_1_BEAT_JAKE + QUEST_1_OFFSET,
        .name = COMPOUND_STRING("Beat Jake"),
        .desc = COMPOUND_STRING(
                    "Defeated the Rock-type Gym Leader\n"
                    "to earn the Badge."),
        .map = sText_JakesGym,
        .sprite = OBJ_EVENT_GFX_ROXANNE,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_1_BEAT_PAWAN + QUEST_1_OFFSET,
        .name = COMPOUND_STRING("Beat Pawan"),
        .desc = COMPOUND_STRING(
                    "Defeated the Bug-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_BUG_CATCHER,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests2[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_2_BEAT_PREMAL + QUEST_2_OFFSET,
        .name = COMPOUND_STRING("Beat Premal"),
        .desc = COMPOUND_STRING(
                    "Defeated the Dark-type specialist\n"
                    "at Reeve's Gym entrance."),
        .map = sText_ReevesGym,
        .sprite = OBJ_EVENT_GFX_BURGLAR,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_2_BEAT_REEVE + QUEST_2_OFFSET,
        .name = COMPOUND_STRING("Beat Reeve"),
        .desc = COMPOUND_STRING(
                    "Defeated the Dark-type Gym Leader\n"
                    "to earn the Badge."),
        .map = sText_ReevesGym,
        .sprite = OBJ_EVENT_GFX_BRAWLY,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_2_BEAT_HANSTON + QUEST_2_OFFSET,
        .name = COMPOUND_STRING("Beat Hanston"),
        .desc = COMPOUND_STRING(
                    "Defeated the Steel-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_SUPER_NERD,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests3[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_3_BEAT_DON + QUEST_3_OFFSET,
        .name = COMPOUND_STRING("Beat Don"),
        .desc = COMPOUND_STRING(
                    "Defeated the Ghost-type specialist\n"
                    "at Prem's Gym entrance."),
        .map = sText_PremsGym,
        .sprite = OBJ_EVENT_GFX_PSYCHIC_M,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_3_BEAT_PREM + QUEST_3_OFFSET,
        .name = COMPOUND_STRING("Beat Prem"),
        .desc = COMPOUND_STRING(
                    "Defeated the Ghost-type Gym Leader\n"
                    "to earn the Badge."),
        .map = sText_PremsGym,
        .sprite = OBJ_EVENT_GFX_WATTSON,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_3_BEAT_RASHEL + QUEST_3_OFFSET,
        .name = COMPOUND_STRING("Beat Rashel"),
        .desc = COMPOUND_STRING(
                    "Defeated the Psychic-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_HEX_MANIAC,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests4[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_4_BEAT_DARA + QUEST_4_OFFSET,
        .name = COMPOUND_STRING("Beat Dara"),
        .desc = COMPOUND_STRING(
                    "Defeated the Fairy-type specialist\n"
                    "at Jaison's Gym entrance."),
        .map = sText_JaisonsGym,
        .sprite = OBJ_EVENT_GFX_SCHOOL_KID_F,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_4_BEAT_JAISON + QUEST_4_OFFSET,
        .name = COMPOUND_STRING("Beat Jaison"),
        .desc = COMPOUND_STRING(
                    "Defeated the Fairy-type Gym Leader\n"
                    "to earn the Badge."),
        .map = sText_JaisonsGym,
        .sprite = OBJ_EVENT_GFX_FLANNERY,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_4_BEAT_AKSHARA + QUEST_4_OFFSET,
        .name = COMPOUND_STRING("Beat Akshara"),
        .desc = COMPOUND_STRING(
                    "Defeated the Ice-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_WOMAN_2,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests5[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_5_BEAT_DELSON + QUEST_5_OFFSET,
        .name = COMPOUND_STRING("Beat Delson"),
        .desc = COMPOUND_STRING(
                    "Defeated the Fire-type specialist\n"
                    "at Prajith's Gym entrance."),
        .map = sText_PrajithsGym,
        .sprite = OBJ_EVENT_GFX_KINDLER,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_5_BEAT_PRAJITH + QUEST_5_OFFSET,
        .name = COMPOUND_STRING("Beat Prajith"),
        .desc = COMPOUND_STRING(
                    "Defeated the Fire-type Gym Leader\n"
                    "to earn the Badge."),
        .map = sText_PrajithsGym,
        .sprite = OBJ_EVENT_GFX_NORMAN,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_5_BEAT_GILSTON + QUEST_5_OFFSET,
        .name = COMPOUND_STRING("Beat Gilston"),
        .desc = COMPOUND_STRING(
                    "Defeated the Fighting-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_BLACK_BELT,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests6[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_6_BEAT_DARWIN + QUEST_6_OFFSET,
        .name = COMPOUND_STRING("Beat Darwin"),
        .desc = COMPOUND_STRING(
                    "Defeated the Poison-type expert\n"
                    "at Varun's Gym entrance."),
        .map = sText_VarunsGym,
        .sprite = OBJ_EVENT_GFX_SCIENTIST_2,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_6_BEAT_VARUN + QUEST_6_OFFSET,
        .name = COMPOUND_STRING("Beat Varun"),
        .desc = COMPOUND_STRING(
                    "Defeated the Electric-type Leader\n"
                    "to earn the Badge."),
        .map = sText_VarunsGym,
        .sprite = OBJ_EVENT_GFX_WINONA,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_6_BEAT_MONVISH + QUEST_6_OFFSET,
        .name = COMPOUND_STRING("Beat Monvish"),
        .desc = COMPOUND_STRING(
                    "Defeated the Normal-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_GUITARIST,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests7[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_7_BEAT_HANDAM + QUEST_7_OFFSET,
        .name = COMPOUND_STRING("Beat Handam"),
        .desc = COMPOUND_STRING(
                    "Defeated the Flying-type expert\n"
                    "at Snehal's Gym entrance."),
        .map = sText_SnehalsGym,
        .sprite = OBJ_EVENT_GFX_BIRD_KEEPER,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_7_BEAT_SNEHAL + QUEST_7_OFFSET,
        .name = COMPOUND_STRING("Beat Snehal"),
        .desc = COMPOUND_STRING(
                    "Defeated the Flying-type Leader\n"
                    "to earn the Badge."),
        .map = sText_SnehalsGym,
        .sprite = OBJ_EVENT_GFX_TATE,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_7_BEAT_ADITHYA + QUEST_7_OFFSET,
        .name = COMPOUND_STRING("Beat Adithya"),
        .desc = COMPOUND_STRING(
                    "Defeated the Water-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_FISHERMAN,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests8[GYM_SUBQUESTS_COUNT] =
{
    {
        .id = SUB_QUEST_8_BEAT_DEON + QUEST_8_OFFSET,
        .name = COMPOUND_STRING("Beat Deon"),
        .desc = COMPOUND_STRING(
                    "Defeated the Dragon-type expert\n"
                    "at Rajesh's Gym entrance."),
        .map = sText_RajeshsGym,
        .sprite = OBJ_EVENT_GFX_DRAGON_TAMER,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_8_BEAT_RAJESH + QUEST_8_OFFSET,
        .name = COMPOUND_STRING("Beat Rajesh"),
        .desc = COMPOUND_STRING(
                    "Defeated the Dragon-type Leader\n"
                    "to earn the Badge."),
        .map = sText_RajeshsGym,
        .sprite = OBJ_EVENT_GFX_JUAN,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_8_BEAT_RION + QUEST_8_OFFSET,
        .name = COMPOUND_STRING("Beat Rion"),
        .desc = COMPOUND_STRING(
                    "Defeated the Ground-type Trainer\n"
                    "in the Revelation area."),
        .map = sText_Revelation,
        .sprite = OBJ_EVENT_GFX_EXPERT_M,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests9[CHALLENGERS_SUBQUEST_COUNT] =
{
    {
        .id = SUB_QUEST_9_BEAT_MANVITHA + QUEST_9_OFFSET,
        .name = COMPOUND_STRING("Beat Manvitha"),
        .desc = COMPOUND_STRING(
                    "Defeated the sun team specialist\n"
                    "with solar-powered strategies."),
        .map = sText_ChallengersArena,
        .sprite = OBJ_EVENT_GFX_WOMAN_5,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_9_BEAT_KEVIN + QUEST_9_OFFSET,
        .name = COMPOUND_STRING("Beat Kevin"),
        .desc = COMPOUND_STRING(
                    "Defeated the rain team specialist\n"
                    "with torrential tactics."),
        .map = sText_ChallengersArena,
        .sprite = OBJ_EVENT_GFX_MAN_3,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_9_BEAT_LOHITH + QUEST_9_OFFSET,
        .name = COMPOUND_STRING("Beat Lohith"),
        .desc = COMPOUND_STRING(
                    "Defeated the modern offense team\n"
                    "with relentless aggression."),
        .map = sText_ChallengersArena,
        .sprite = OBJ_EVENT_GFX_MAN_3,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_9_BEAT_ANMOL + QUEST_9_OFFSET,
        .name = COMPOUND_STRING("Beat Anmol"),
        .desc = COMPOUND_STRING(
                    "Defeated the defensive specialist\n"
                    "with impenetrable strategies."),
        .map = sText_ChallengersArena,
        .sprite = OBJ_EVENT_GFX_MAN_3,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_9_BEAT_ARSHAD + QUEST_9_OFFSET,
        .name = COMPOUND_STRING("Beat Arshad"),
        .desc = COMPOUND_STRING(
                    "Defeated the classic offense team\n"
                    "with proven aggressive tactics."),
        .map = sText_ChallengersArena,
        .sprite = OBJ_EVENT_GFX_MAN_3,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_9_BEAT_MELWIN + QUEST_9_OFFSET,
        .name = COMPOUND_STRING("Beat Melwin"),
        .desc = COMPOUND_STRING(
                    "Defeated the tricky offense team\n"
                    "with unpredictable strategies."),
        .map = sText_ChallengersArena,
        .sprite = OBJ_EVENT_GFX_MAN_3,
        .spritetype = OBJECT,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_9_BEAT_YASHAS + QUEST_9_OFFSET,
        .name = COMPOUND_STRING("Beat Yashas"),
        .desc = COMPOUND_STRING(
                    "Defeated the Revelation expert\n"
                    "with exclusive regional team."),
        .map = sText_ChallengersArena,
        .sprite = OBJ_EVENT_GFX_WALLACE,
        .spritetype = OBJECT,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests11[MONOTYPE_SUBQUEST_COUNT] =
{
    {
        .id = SUB_QUEST_11_MONOTYPE_NORMAL + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Normal"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Normal-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_NORMAL_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_FIGHTING + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Fighting"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Fighting-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_FIGHTING_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_FLYING + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Flying"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Flying-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_FLYING_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_POISON + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Poison"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Poison-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_POISON_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_GROUND + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Ground"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Ground-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_GROUND_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_ROCK + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Rock"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Rock-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_ROCK_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_BUG + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Bug"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Bug-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_BUG_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_GHOST + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Ghost"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Ghost-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_GHOST_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_STEEL + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Steel"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Steel-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_STEEL_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_FIRE + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Fire"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Fire-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_FIRE_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_WATER + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Water"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Water-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_WATER_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_GRASS + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Grass"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Grass-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_GRASS_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_ELECTRIC + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Electric"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Electric-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_ELECTRIC_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_PSYCHIC + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Psychic"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Psychic-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_PSYCHIC_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_ICE + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Ice"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Ice-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_ICE_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_DRAGON + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Dragon"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Dragon-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_DRAGON_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_DARK + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Dark"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Dark-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_DARK_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_11_MONOTYPE_FAIRY + QUEST_11_OFFSET,
        .name = COMPOUND_STRING("Fairy"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Fairy-type Pokémon."),
        .map = sText_Revelation,
        .sprite = ITEM_FAIRY_GEM,
        .spritetype = ITEM,
        .type = sText_Done
    }
};

const struct SubQuest sSubQuests12[MONOREGION_SUBQUEST_COUNT] =
{
    {
        .id = SUB_QUEST_12_REGION_KANTO + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Kanto"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Kanto region."),
        .map = sText_Revelation,
        .sprite = ITEM_PEWTER_CRUNCHIES,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_JOHTO + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Johto"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Johto region."),
        .map = sText_Revelation,
        .sprite = ITEM_RAGE_CANDY_BAR,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_HOENN + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Hoenn"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Hoenn region."),
        .map = sText_Revelation,
        .sprite = ITEM_LAVA_COOKIE,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_SINNOH + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Sinnoh"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Sinnoh region."),
        .map = sText_Revelation,
        .sprite = ITEM_OLD_GATEAU,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_UNOVA + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Unova"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Unova region."),
        .map = sText_Revelation,
        .sprite = ITEM_CASTELIACONE,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_KALOS + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Kalos"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Kalos region."),
        .map = sText_Revelation,
        .sprite = ITEM_LUMIOSE_GALETTE,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_ALOLA + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Alola"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Alola region."),
        .map = sText_Revelation,
        .sprite = ITEM_BIG_MALASADA,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_GALAR + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Galar"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Galar region."),
        .map = sText_Revelation,
        .sprite = ITEM_MAX_MUSHROOMS,
        .spritetype = ITEM,
        .type = sText_Done
    },

    {
        .id = SUB_QUEST_12_REGION_PALDEA + QUEST_12_OFFSET,
        .name = COMPOUND_STRING("Paldea"),
        .desc = COMPOUND_STRING(
                    "Won the Revelation Tournament by\n"
                    "only using Pokémon native to the\n"
                    "Paldea region."),
        .map = sText_Revelation,
        .sprite = ITEM_FRESH_START_MOCHI,
        .spritetype = ITEM,
        .type = sText_Done
    }
};


////////////////////////END SUBQUEST CUSTOMIZATION/////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/*
TRAINER_PAWAN                         1 // Bug-type
TRAINER_PRAJESH                       2 // Grass-type
TRAINER_HANSTON                       3 // Steel-type
TRAINER_PREMAL                        4 // Dark-type
TRAINER_RASHEL                        5 // Psychic-type
TRAINER_DON                           6 // Ghost-type
TRAINER_AKSHARA                       7 // Ice-type
TRAINER_DARA                          8 // Fairy-type
TRAINER_GILSTON                       9 // Fighting-type
TRAINER_DELSON                       11 // Fire-type
TRAINER_MONVISH                      12 // Normal-type
TRAINER_DARWIN                       13 // Poison-type
TRAINER_ADITHYA                      14 // Water-type
TRAINER_HANDAM                       15 // Flying-type
TRAINER_RION                         16 // Ground-type
TRAINER_DEON                         17 // Dragon-type

TRAINER_JAKE                        265 // Rock-type
TRAINER_REEVE                       266 // Dark-type
TRAINER_PREM                        267 // Ghost-type
TRAINER_JAISON                      268 // Fairy-type
TRAINER_PRAJITH                     269 // Fire-type
TRAINER_VARUN                       270 // Electric-type
TRAINER_SNEHAL                      271 // Flying-type
TRAINER_RAJESH                      272 // Dragon-type
*/