#include "global.h"
#include "battle.h"
#include "item.h"
#include "overworld.h"
#include "pokedex_plus_hgss.h"
#include "pokemon.h"
#include "region_map.h"
#include "string_util.h"
#include "test/test.h"
#include "constants/abilities.h"
#include "constants/form_change_types.h"
#include "constants/pokemon.h"
#include "constants/rtc.h"

// Credit to Hedara

TEST("Print mons")
{
    u32 endVal = NUM_SPECIES;
    DebugPrintf("[");
    for (u32 i = 1; i < endVal; i++)
    {
        const struct SpeciesInfo *currSpecies = &gSpeciesInfo[i];

        //  Detect if species has data
        if (currSpecies->baseHP == 0)
            continue;
        
        const u8 sText_Mega[] = _("Mega ");
        const u8 sText_X[] = _(" X");
        const u8 sText_Y[] = _(" Y");
        const u8 sText_Primal[] = _("Primal ");
        const u8 sText_Ultra[] = _("Ultra ");
        const u8 sText_Gigantamax[] = _("Gigantamax ");
        const u8 sText_Tera[] = _("Tera ");
        const u8 sText_Alolan[] = _("Alolan ");
        const u8 sText_Galarian[] = _("Galarian ");
        const u8 sText_Hisuian[] = _("Hisuian ");
        const u8 sText_Paldean[] = _("Paldean ");
        const u8 sText_Empty[] = _("");

        if (currSpecies->isMegaEvolution)
            StringCopy(gStringVar1, sText_Mega);
        else if (currSpecies->isPrimalReversion)
            StringCopy(gStringVar1, sText_Primal);
        else if (currSpecies->isUltraBurst)
            StringCopy(gStringVar1, sText_Ultra);
        else if (currSpecies->isGigantamax)
            StringCopy(gStringVar1, sText_Gigantamax);
        else if (currSpecies->isTeraForm)
            StringCopy(gStringVar1, sText_Tera);
        else if (currSpecies->isAlolanForm)
            StringCopy(gStringVar1, sText_Alolan);
        else if (currSpecies->isGalarianForm)
            StringCopy(gStringVar1, sText_Galarian);
        else if (currSpecies->isHisuianForm)
            StringCopy(gStringVar1, sText_Hisuian);
        else if (currSpecies->isPaldeanForm)
            StringCopy(gStringVar1, sText_Paldean);
        else
            StringCopy(gStringVar1, sText_Empty);

        StringAppend(gStringVar1, currSpecies->speciesName);

        // Special handling for Mega X/Y
        if (currSpecies->isMegaEvolution)
        {
            if (i == SPECIES_CHARIZARD_MEGA_X || i == SPECIES_MEWTWO_MEGA_X)
                StringAppend(gStringVar1, sText_X);
            else if (i == SPECIES_CHARIZARD_MEGA_Y || i == SPECIES_MEWTWO_MEGA_Y)
                StringAppend(gStringVar1, sText_Y);
        }

        //  Start printing species data
        DebugPrintf("    {");
        //  Print species name
        DebugPrintf("        \"speciesName\": \"%S\",", gStringVar1);

        //  Print types
        if (currSpecies->types[0] != currSpecies->types[1])
            DebugPrintf("        \"types\": [\"%S\", \"%S\"],", gTypesInfo[currSpecies->types[0]].name, gTypesInfo[currSpecies->types[1]].name);
        else
            DebugPrintf("        \"types\": [\"%S\"],", gTypesInfo[currSpecies->types[0]].name);

        //  Print stats
        DebugPrintf("        \"stats\": {");
        DebugPrintf("            \"hp\": %u,", currSpecies->baseHP);
        DebugPrintf("            \"attack\": %u,", currSpecies->baseAttack);
        DebugPrintf("            \"defense\": %u,", currSpecies->baseDefense);
        DebugPrintf("            \"spAttack\": %u,", currSpecies->baseSpAttack);
        DebugPrintf("            \"spDefense\": %u,", currSpecies->baseSpDefense);
        DebugPrintf("            \"speed\": %u", currSpecies->baseSpeed);
        DebugPrintf("        },");

        //  Print abilities
        if (currSpecies->abilities[0] != currSpecies->abilities[1] && currSpecies->abilities[1] != ABILITY_NONE)
            DebugPrintf("        \"Abilities\": [\"%S\", \"%S\"],", gAbilitiesInfo[currSpecies->abilities[0]].name, gAbilitiesInfo[currSpecies->abilities[1]].name);
        else
            DebugPrintf("        \"Abilities\": [\"%S\"],", gAbilitiesInfo[currSpecies->abilities[0]].name);
        if (currSpecies->abilities[2] != ABILITY_NONE)
            DebugPrintf("        \"Hidden Ability\": \"%S\",", gAbilitiesInfo[currSpecies->abilities[2]].name);

        //  Print moves
        //  Level up moves
        DebugPrintf("        \"levelUpMoves\": [");
        bool32 shouldContinue = TRUE;
        u32 moveIndex = 0;
        const struct LevelUpMove *levelUpLearnset = currSpecies->levelUpLearnset;
        while (shouldContinue)
        {
            DebugPrintf("            {");
            DebugPrintf("                \"level\": %u,", levelUpLearnset[moveIndex].level);
            DebugPrintf("                \"move\": \"%S\"", gMovesInfo[levelUpLearnset[moveIndex].move].name);
            moveIndex++;
            if (levelUpLearnset[moveIndex].move == LEVEL_UP_MOVE_END)
            {
                shouldContinue = FALSE;
                DebugPrintf("            }");
            }
            else
            {
                DebugPrintf("            },");
            }
        }
        DebugPrintf("        ],");

        //  Teachable moves
        shouldContinue = TRUE;
        moveIndex = 0;
        const u16 *teachableLearnset = currSpecies->teachableLearnset;
        if (teachableLearnset[moveIndex] != MOVE_UNAVAILABLE)
        {
            DebugPrintf("        \"teachableLearnset\": [");
            while (shouldContinue)
            {
                if (teachableLearnset[moveIndex + 1] != MOVE_UNAVAILABLE)
                {
                    DebugPrintf("            \"%S\",", gMovesInfo[teachableLearnset[moveIndex]].name);
                }
                else
                {
                    DebugPrintf("            \"%S\"", gMovesInfo[teachableLearnset[moveIndex]].name);
                    shouldContinue = FALSE;
                }
                moveIndex++;
            }
            DebugPrintf("        ],");
        }

        //  Egg moves
        shouldContinue = TRUE;
        moveIndex = 0;
        u16 preSpecies = i;
        const u16 *eggMoves = NULL;
        while (preSpecies != SPECIES_NONE)
        {
            eggMoves = GetSpeciesEggMoves(preSpecies);
            preSpecies = GetSpeciesPreEvolution(preSpecies);
        }
        if (eggMoves[moveIndex] != MOVE_UNAVAILABLE)
        {
            DebugPrintf("        \"eggMoves\": [");
            while (shouldContinue)
            {
                if (eggMoves[moveIndex + 1] != MOVE_UNAVAILABLE)
                {
                    DebugPrintf("            \"%S\",", gMovesInfo[eggMoves[moveIndex]].name);
                }
                else
                {
                    DebugPrintf("            \"%S\"", gMovesInfo[eggMoves[moveIndex]].name);
                    shouldContinue = FALSE;
                }
                moveIndex++;
            }
            DebugPrintf("        ],");
        }

        //  Various data
        DebugPrintf("        \"catchRate\": %u,", currSpecies->catchRate);
        DebugPrintf("        \"expYield\": %u,", currSpecies->expYield);
        if (currSpecies->evYield_HP)
            DebugPrintf("        \"evYield_HP\": %u,", currSpecies->evYield_HP);
        if (currSpecies->evYield_Attack)
            DebugPrintf("        \"evYield_Attack\": %u,", currSpecies->evYield_Attack);
        if (currSpecies->evYield_Defense)
            DebugPrintf("        \"evYield_Defense\": %u,", currSpecies->evYield_Defense);
        if (currSpecies->evYield_SpAttack)
            DebugPrintf("        \"evYield_SpAttack\": %u,", currSpecies->evYield_SpAttack);
        if (currSpecies->evYield_SpDefense)
            DebugPrintf("        \"evYield_SpDefense\": %u,", currSpecies->evYield_SpDefense);
        if (currSpecies->evYield_Speed)
            DebugPrintf("        \"evYield_Speed\": %u,", currSpecies->evYield_Speed);
        DebugPrintf("        \"height\": \"%u.%u m\",",  currSpecies->height / 10,  currSpecies->height % 10);
        DebugPrintf("        \"weight\": \"%u.%u kg\",",  currSpecies->weight / 10,  currSpecies->weight % 10);
        if (currSpecies->itemCommon)
            DebugPrintf("        \"itemCommon\": \"%S\",", GetItemName(currSpecies->itemCommon));
        if (currSpecies->itemRare)
            DebugPrintf("        \"itemRare\": \"%S\",", GetItemName(currSpecies->itemRare));
        DebugPrintf("        \"eggCycles\": %u,", currSpecies->eggCycles);
        DebugPrintf("        \"monCategory\": \"%S\",", currSpecies->categoryName);
        DebugPrintf("        \"natDexNum\": %u,", currSpecies->natDexNum);
        DebugPrintf("        \"internalId\": %u,", i);

        // EVOLUTIONS
        if (currSpecies->evolutions != NULL)
        {
            u8 times = 0;
            u32 arg;

            for (u8 j = 0; currSpecies->evolutions[j].method != EVOLUTIONS_END; j++)
                times++;

            if (times > 9 && i == SPECIES_MILCERY)
                times = 9;
            else if (times > 10)
                times = 10;

            DebugPrintf("        \"evolutions\": [");
            for (u32 j = 0; j < times; j++)
            {
                u32 targetSpecies = currSpecies->evolutions[j].targetSpecies;
                bool32 isAlcremie = IsSpeciesAlcremie(targetSpecies);

                DebugPrintf("            {");
                
                DebugPrintf("                \"targetSpecies\": \"%S\",", GetSpeciesName(targetSpecies));

                StringCopy(gStringVar1, sText_Empty);
                switch ((enum EvolutionMethods)currSpecies->evolutions[j].method)
                {
                case EVO_SCRIPT_TRIGGER:
                case EVO_NONE:
                    StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("Unknown"));
                    break;
                case EVO_LEVEL:
                case EVO_LEVEL_BATTLE_ONLY:
                    StringCopy(gStringVar1, COMPOUND_STRING("Level"));
                    if (currSpecies->evolutions[j].param > 1)
                    {
                        ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].param, STR_CONV_MODE_LEFT_ALIGN, EVO_SCREEN_LVL_DIGITS);
                        StringAppend(gStringVar1, COMPOUND_STRING(" "));
                        StringAppend(gStringVar1, gStringVar2);
                    }
                    if ((enum EvolutionMethods)currSpecies->evolutions[j].method == EVO_LEVEL_BATTLE_ONLY)
                        StringAppend(gStringVar1, COMPOUND_STRING(" in battle"));
                    break;
                case EVO_TRADE:
                    StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("Trading"));
                    break;
                case EVO_ITEM:
                    CopyItemName(currSpecies->evolutions[j].param, gStringVar2);
                    StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("{STR_VAR_2}"));
                    break;
                case EVO_SPLIT_FROM_EVO:
                    StringCopy(gStringVar1, COMPOUND_STRING("Splits from "));
                    StringAppend(gStringVar1, GetSpeciesName(currSpecies->evolutions[j].param));
                    break;
                case EVO_BATTLE_END:
                    StringExpandPlaceholders(gStringVar1, COMPOUND_STRING("End battle"));
                    break;
                case EVO_SPIN:
                    StringCopy(gStringVar1, COMPOUND_STRING("Spin "));
                    if (currSpecies->evolutions[j].param == SPIN_CW_SHORT)
                        StringAppend(gStringVar1, COMPOUND_STRING("CW <5s"));
                    else if (currSpecies->evolutions[j].param == SPIN_CW_LONG)
                        StringAppend(gStringVar1, COMPOUND_STRING("CW >5s"));
                    else if (currSpecies->evolutions[j].param == SPIN_CCW_SHORT)
                        StringAppend(gStringVar1, COMPOUND_STRING("CCW <5s"));
                    else if (currSpecies->evolutions[j].param == SPIN_CCW_LONG)
                        StringAppend(gStringVar1, COMPOUND_STRING("CCW >5s"));
                    else
                        StringAppend(gStringVar1, COMPOUND_STRING("CW/CCW >10s"));
                    break;
                }
                DebugPrintf("                \"method\": \"%S\",", gStringVar1);

                StringCopy(gStringVar1, sText_Empty);
                if (currSpecies->evolutions[j].params != NULL && currSpecies->evolutions[j].params[0].condition != CONDITIONS_END)
                {
                    for (u32 k = 0; currSpecies->evolutions[j].params[k].condition != CONDITIONS_END; k++)
                    {
                        if (k > 0)
                            StringAppend(gStringVar1, COMPOUND_STRING(", "));

                        switch((enum EvolutionConditions)currSpecies->evolutions[j].params[k].condition)
                        {
                        case IF_GENDER:
                            switch(currSpecies->evolutions[j].params[k].arg1)
                            {
                                case MON_MALE:   StringAppend(gStringVar1, COMPOUND_STRING("Male"));   break;
                                case MON_FEMALE: StringAppend(gStringVar1, COMPOUND_STRING("Female")); break;
                            }
                            break;
                        case IF_MIN_FRIENDSHIP:
                            StringAppend(gStringVar1, COMPOUND_STRING("High friendship"));
                            break;
                        case IF_ATK_GT_DEF:
                            StringAppend(gStringVar1, COMPOUND_STRING("Atk > Def"));
                            break;
                        case IF_ATK_EQ_DEF:
                            StringAppend(gStringVar1, COMPOUND_STRING("Atk = Def"));
                            break;
                        case IF_ATK_LT_DEF:
                            StringAppend(gStringVar1, COMPOUND_STRING("Atk < Def"));
                            break;
                        case IF_TIME:
                            switch(currSpecies->evolutions[j].params[k].arg1)
                            {
                            case TIME_MORNING: StringAppend(gStringVar1, COMPOUND_STRING("Morning")); break;
                            case TIME_DAY:     StringAppend(gStringVar1, COMPOUND_STRING("Day"));     break;
                            case TIME_EVENING: StringAppend(gStringVar1, COMPOUND_STRING("Evening")); break;
                            case TIME_NIGHT:   StringAppend(gStringVar1, COMPOUND_STRING("Night"));   break;
                            }
                            break;
                        case IF_NOT_TIME:
                            switch(currSpecies->evolutions[j].params[k].arg1)
                            {
                            case TIME_MORNING: StringAppend(gStringVar1, COMPOUND_STRING("NOT Morning")); break;
                            case TIME_DAY:     StringAppend(gStringVar1, COMPOUND_STRING("NOT Day"));     break;
                            case TIME_EVENING: StringAppend(gStringVar1, COMPOUND_STRING("NOT Evening")); break;
                            case TIME_NIGHT:   StringAppend(gStringVar1, COMPOUND_STRING("Day"));         break;
                            }
                            break;
                        case IF_HOLD_ITEM:
                            StringAppend(gStringVar1, COMPOUND_STRING("Holds "));
                            if (isAlcremie && IsItemSweet(currSpecies->evolutions[j].params[k].arg1))
                                StringAppend(gStringVar1, COMPOUND_STRING("Sweet"));
                            else
                            {
                                CopyItemName(currSpecies->evolutions[j].params[k].arg1, gStringVar2);
                                StringAppend(gStringVar1, gStringVar2);
                            }
                            break;
                        case IF_PID_UPPER_MODULO_10_GT:
                        case IF_PID_UPPER_MODULO_10_EQ:
                        case IF_PID_UPPER_MODULO_10_LT:
                            arg = currSpecies->evolutions[j].params[k].arg1;
                            if ((enum EvolutionConditions)currSpecies->evolutions[j].params[k].condition == IF_PID_UPPER_MODULO_10_GT && arg < 10 && arg >= 0)
                                arg = 9 - arg;
                            else if ((enum EvolutionConditions)currSpecies->evolutions[j].params[k].condition == IF_PID_UPPER_MODULO_10_EQ && arg < 10 && arg >= 0)
                                arg = 1;
                            ConvertIntToDecimalStringN(gStringVar2, arg * 10, STR_CONV_MODE_LEFT_ALIGN, 3);
                            StringAppend(gStringVar1, COMPOUND_STRING("Random "));
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING("%"));
                            break;
                        case IF_MIN_BEAUTY:
                            StringAppend(gStringVar1, COMPOUND_STRING("High beauty"));
                            break;
                        case IF_MIN_COOLNESS:
                            StringAppend(gStringVar1, COMPOUND_STRING("High coolness"));
                            break;
                        case IF_MIN_SMARTNESS:
                            StringAppend(gStringVar1, COMPOUND_STRING("High smartness"));
                            break;
                        case IF_MIN_TOUGHNESS:
                            StringAppend(gStringVar1, COMPOUND_STRING("High toughness"));
                            break;
                        case IF_MIN_CUTENESS:
                            StringAppend(gStringVar1, COMPOUND_STRING("High cuteness"));
                            break;
                        case IF_SPECIES_IN_PARTY:
                            StringAppend(gStringVar1, GetSpeciesName(currSpecies->evolutions[j].params[k].arg1));
                            StringAppend(gStringVar1, COMPOUND_STRING(" in party"));
                            break;
                        case IF_IN_MAPSEC:
                            StringAppend(gStringVar1, COMPOUND_STRING("In "));
                            StringCopy(gStringVar2, gRegionMapEntries[currSpecies->evolutions[j].params[k].arg1].name);
                            StringAppend(gStringVar1, gStringVar2);
                            break;
                        case IF_IN_MAP:
                            StringAppend(gStringVar1, COMPOUND_STRING("In "));
                            GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(currSpecies->evolutions[j].params[k].arg1 >> 8, currSpecies->evolutions[j].params[k].arg1 & 0xFF)->regionMapSectionId, 0);
                            StringAppend(gStringVar1, gStringVar2);
                            break;
                        case IF_KNOWS_MOVE:
                            StringAppend(gStringVar1, COMPOUND_STRING("Knows "));
                            StringAppend(gStringVar1, GetMoveName(currSpecies->evolutions[j].params[k].arg1));
                            break;
                        case IF_TRADE_PARTNER_SPECIES:
                            StringAppend(gStringVar1, COMPOUND_STRING("Traded with "));
                            StringAppend(gStringVar1, GetSpeciesName(currSpecies->evolutions[j].params[k].arg1));
                            break;
                        case IF_TYPE_IN_PARTY:
                            StringAppend(gStringVar1, gTypesInfo[currSpecies->evolutions[j].params[k].arg1].name);
                            StringAppend(gStringVar1, COMPOUND_STRING("-type in party"));
                            break;
                        case IF_WEATHER:
                            StringAppend(gStringVar1, COMPOUND_STRING("Weather "));
                            StringAppend(gStringVar1, GetWeatherName(currSpecies->evolutions[j].params[k].arg1));
                            break;
                        case IF_KNOWS_MOVE_TYPE:
                            StringAppend(gStringVar1, gTypesInfo[currSpecies->evolutions[j].params[k].arg1].name);
                            StringAppend(gStringVar1, COMPOUND_STRING(" move"));
                            break;
                        case IF_NATURE:
                            StringCopy(gStringVar2, gNaturesInfo[currSpecies->evolutions[j].params[k].arg1].name);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" nature"));
                            break;
                        case IF_AMPED_NATURE:
                            StringAppend(gStringVar1, COMPOUND_STRING("Amped natures"));
                            break;
                        case IF_LOW_KEY_NATURE:
                            StringAppend(gStringVar1, COMPOUND_STRING("Low-Key natures"));
                            break;
                        case IF_RECOIL_DAMAGE_GE:
                            StringAppend(gStringVar1, COMPOUND_STRING("Takes >= "));
                            ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].params[k].arg1, STR_CONV_MODE_LEFT_ALIGN, 3);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" recoil dmg"));
                            break;
                        case IF_CURRENT_DAMAGE_GE:
                            ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].params[k].arg1, STR_CONV_MODE_LEFT_ALIGN, 3);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" current dmg"));
                            break;
                        case IF_CRITICAL_HITS_GE:
                            ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].params[k].arg1, STR_CONV_MODE_LEFT_ALIGN, 2);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" critical hits"));
                            break;
                        case IF_USED_MOVE_X_TIMES:
                            StringAppend(gStringVar1, COMPOUND_STRING("Use move "));
                            StringAppend(gStringVar1, GetMoveName(currSpecies->evolutions[j].params[k].arg1));
                            StringAppend(gStringVar1, COMPOUND_STRING(" "));
                            ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].params[k].arg2, STR_CONV_MODE_LEFT_ALIGN, 3);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" times"));
                            break;
                        case IF_DEFEAT_X_WITH_ITEMS:
                            StringAppend(gStringVar1, COMPOUND_STRING("Defeat "));
                            ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].params[k].arg3, STR_CONV_MODE_LEFT_ALIGN, 3);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" "));
                            StringAppend(gStringVar1, GetSpeciesName(currSpecies->evolutions[j].params[k].arg1));
                            StringAppend(gStringVar1, COMPOUND_STRING(" that hold "));
                            CopyItemName(currSpecies->evolutions[j].params[k].arg2, gStringVar2);
                            StringAppend(gStringVar1, gStringVar2);
                            break;
                        case IF_PID_MODULO_100_GT:
                        case IF_PID_MODULO_100_EQ:
                        case IF_PID_MODULO_100_LT:
                            arg = currSpecies->evolutions[j].params[k].arg1;
                            if ((enum EvolutionConditions)currSpecies->evolutions[j].params[k].condition == IF_PID_MODULO_100_GT && arg < 100 && arg >= 0)
                                arg = 99 - arg;
                            else if ((enum EvolutionConditions)currSpecies->evolutions[j].params[k].condition == IF_PID_MODULO_100_EQ && arg < 100 && arg >= 0)
                                arg = 1;
                            ConvertIntToDecimalStringN(gStringVar2, arg, STR_CONV_MODE_LEFT_ALIGN, 3);
                            StringAppend(gStringVar1, COMPOUND_STRING("Random "));
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING("%"));
                            break;
                        case IF_MIN_OVERWORLD_STEPS:
                            StringAppend(gStringVar1, COMPOUND_STRING("After "));
                            ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].params[k].arg1, STR_CONV_MODE_LEFT_ALIGN, 4);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" steps"));
                            break;
                        case IF_BAG_ITEM_COUNT:
                            ConvertIntToDecimalStringN(gStringVar2, currSpecies->evolutions[j].params[k].arg2, STR_CONV_MODE_LEFT_ALIGN, 3);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" "));
                            CopyItemNameHandlePlural(currSpecies->evolutions[j].params[k].arg1, gStringVar2, currSpecies->evolutions[j].params[k].arg2);
                            StringAppend(gStringVar1, gStringVar2);
                            StringAppend(gStringVar1, COMPOUND_STRING(" in bag"));
                            break;
                        case CONDITIONS_END:
                            break;
                        }
                    }
                }
                else
                {
                    StringAppend(gStringVar1, COMPOUND_STRING("None"));
                }
                DebugPrintf("                \"conditions\": \"%S\"", gStringVar1);

                if (j != times - 1)
                    DebugPrintf("            },");
                else
                    DebugPrintf("            }");
            }
            DebugPrintf("        ],");
        }

        // FORM CHANGES
        if (currSpecies->formSpeciesIdTable != NULL)
        {
            const struct FormChange *formChanges = GetSpeciesFormChanges(i);
            
            if (formChanges != NULL)
            {
                u8 times = 0;
                for (u8 j = 0; formChanges[j].method != FORM_CHANGE_TERMINATOR; j++)
                    times++;

                DebugPrintf("        \"formChanges\": [");
                for (u32 j = 0; j < times; j++)
                {
                    DebugPrintf("            {");

                    switch ((enum FormChanges)formChanges[j].method)
                    {
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM:
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE:
                        StringCopy(gStringVar1, sText_Mega);
                        break;
                    case FORM_CHANGE_BATTLE_PRIMAL_REVERSION:
                        StringCopy(gStringVar1, sText_Primal);
                        break;
                    case FORM_CHANGE_BATTLE_ULTRA_BURST:
                        StringCopy(gStringVar1, sText_Ultra);
                        break;
                    case FORM_CHANGE_BATTLE_GIGANTAMAX:
                        StringCopy(gStringVar1, sText_Gigantamax);
                        break;
                    default:
                        break;
                    }

                    StringAppend(gStringVar1, currSpecies->speciesName);

                    // Special handling for Mega X/Y
                    if (formChanges[j].method == FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM)
                    {
                        if (formChanges[j].targetSpecies == SPECIES_CHARIZARD_MEGA_X || formChanges[j].targetSpecies == SPECIES_MEWTWO_MEGA_X)
                            StringAppend(gStringVar1, sText_X);
                        else if (formChanges[j].targetSpecies == SPECIES_CHARIZARD_MEGA_Y || formChanges[j].targetSpecies == SPECIES_MEWTWO_MEGA_Y)
                            StringAppend(gStringVar1, sText_Y);
                    }

                    DebugPrintf("                \"targetSpecies\": \"%S\",", gStringVar1);

                    StringCopy(gStringVar1, sText_Empty);
                    switch ((enum FormChanges)formChanges[j].method)
                    {
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM:
                        StringCopy(gStringVar1, COMPOUND_STRING("Mega Evolution Item"));
                        break;
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE:
                        StringCopy(gStringVar1, COMPOUND_STRING("Mega Evolution Move"));
                        break;
                    case FORM_CHANGE_BATTLE_PRIMAL_REVERSION:
                        StringCopy(gStringVar1, COMPOUND_STRING("Primal Reversion"));
                        break;
                    case FORM_CHANGE_BATTLE_ULTRA_BURST:
                        StringCopy(gStringVar1, COMPOUND_STRING("Ultra Burst"));
                        break;
                    case FORM_CHANGE_BATTLE_GIGANTAMAX:
                        StringCopy(gStringVar1, COMPOUND_STRING("Gigantamax"));
                        break;
                    case FORM_CHANGE_BATTLE_TERASTALLIZATION:
                        StringCopy(gStringVar1, COMPOUND_STRING("Terastallization"));
                        break;
                    case FORM_CHANGE_ITEM_HOLD:
                        StringCopy(gStringVar1, COMPOUND_STRING("Hold Item"));
                        break;
                    case FORM_CHANGE_BEGIN_BATTLE:
                        StringCopy(gStringVar1, COMPOUND_STRING("Begin Battle"));
                        break;
                    case FORM_CHANGE_BATTLE_HP_PERCENT:
                        StringCopy(gStringVar1, COMPOUND_STRING("HP Percent"));
                        break;
                    case FORM_CHANGE_BATTLE_SWITCH:
                        StringCopy(gStringVar1, COMPOUND_STRING("Battle Switch"));
                        break;
                    default:
                        StringCopy(gStringVar1, COMPOUND_STRING("Unknown"));
                        break;
                    }

                    bool32 hasParams = FALSE;
                    switch ((enum FormChanges)formChanges[j].method)
                    {
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM:
                    case FORM_CHANGE_BATTLE_PRIMAL_REVERSION:
                    case FORM_CHANGE_ITEM_HOLD:
                    case FORM_CHANGE_BEGIN_BATTLE:
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE:
                    case FORM_CHANGE_BATTLE_TERASTALLIZATION:
                        hasParams = (formChanges[j].param1 != 0);
                        break;
                    case FORM_CHANGE_BATTLE_HP_PERCENT:
                        hasParams = (formChanges[j].param1 != 0 || formChanges[j].param3 != 0);
                        break;
                    case FORM_CHANGE_BATTLE_SWITCH:
                        hasParams = (formChanges[j].param1 != 0 && formChanges[j].param1 != ABILITY_NONE);
                        break;
                    default:
                        hasParams = FALSE;
                        break;
                    }
                    
                    if (hasParams)
                        DebugPrintf("                \"method\": \"%S\",", gStringVar1);
                    else
                        DebugPrintf("                \"method\": \"%S\"", gStringVar1);
                    

                    switch ((enum FormChanges)formChanges[j].method)
                    {
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM:
                    case FORM_CHANGE_BATTLE_PRIMAL_REVERSION:
                    case FORM_CHANGE_ITEM_HOLD:
                    case FORM_CHANGE_BEGIN_BATTLE:
                        if (formChanges[j].param1 != 0)
                        {
                            CopyItemName(formChanges[j].param1, gStringVar2);
                            DebugPrintf("                \"Item\": \"%S\"", gStringVar2);
                        }
                        break;
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE:
                        if (formChanges[j].param1 != 0)
                        {
                            DebugPrintf("                \"Move\": \"%S\"", GetMoveName(formChanges[j].param1));
                        }
                        break;
                    case FORM_CHANGE_BATTLE_TERASTALLIZATION:
                        if (formChanges[j].param1 != 0)
                        {
                            DebugPrintf("                \"Tera Type\": \"%S\"", gTypesInfo[formChanges[j].param1].name);
                        }
                        break;
                    case FORM_CHANGE_BATTLE_HP_PERCENT:
                        if (formChanges[j].param1 != 0)
                        {
                            DebugPrintf("                \"Ability\": \"%S\"", gAbilitiesInfo[formChanges[j].param1].name);
                        }
                        if (formChanges[j].param3 != 0)
                        {
                            if (formChanges[j].param1 != 0)
                                DebugPrintf(",");
                            ConvertIntToDecimalStringN(gStringVar2, formChanges[j].param3, STR_CONV_MODE_LEFT_ALIGN, 3);
                            DebugPrintf("                \"HP Threshold\": \"%S%%\"", gStringVar2);
                        }
                        break;
                    case FORM_CHANGE_BATTLE_SWITCH:
                        if (formChanges[j].param1 != 0 && formChanges[j].param1 != ABILITY_NONE)
                        {
                            DebugPrintf("                \"Ability\": \"%S\"", gAbilitiesInfo[formChanges[j].param1].name);
                        }
                    default:
                        break;
                    }

                    if (j != times - 1)
                        DebugPrintf("            },");
                    else
                        DebugPrintf("            }");
                }
                DebugPrintf("        ],");
            }
        }
        
        //  Print forms
        if (currSpecies->isMegaEvolution)
            DebugPrintf("        \"form\": \"mega\"");
        else if (currSpecies->isPrimalReversion)
            DebugPrintf("        \"form\": \"primal reversion\"");
        else if (currSpecies->isUltraBurst)
            DebugPrintf("        \"form\": \"ultra burst\"");
        else if (currSpecies->isGigantamax)
            DebugPrintf("        \"form\": \"gigantamax\"");
        else if (currSpecies->isTeraForm)
            DebugPrintf("        \"form\": \"tera\"");
        else if (currSpecies->isAlolanForm)
            DebugPrintf("        \"form\": \"alolan\"");
        else if (currSpecies->isGalarianForm)
            DebugPrintf("        \"form\": \"galarian\"");
        else if (currSpecies->isHisuianForm)
            DebugPrintf("        \"form\": \"hisuian\"");
        else if (currSpecies->isPaldeanForm)
            DebugPrintf("        \"form\": \"paldean\"");
        else
            DebugPrintf("        \"form\": \"normal\"");

        if (i != endVal - 1)
            DebugPrintf("    },");
        else
            DebugPrintf("    }");
    }
    DebugPrintf("]");
}
