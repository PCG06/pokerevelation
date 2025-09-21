#ifndef GUARD_POKEDEX_PLUS_HGSS_H
#define GUARD_POKEDEX_PLUS_HGSS_H

void CB2_OpenPokedexPlusHGSS(void);
void Task_DisplayCaughtMonDexPageHGSS(u8);

bool32 IsSpeciesAlcremie(u32 targetSpecies);
bool32 IsItemSweet(u32 item);

#define EVO_SCREEN_LVL_DIGITS 2
#define EVO_SCREEN_CRITS_DIGITS 1
#define EVO_SCREEN_DMG_DIGITS 2

#endif // GUARD_POKEDEX_PLUS_HGSS_H
