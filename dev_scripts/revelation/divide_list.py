import os

# Create directory garbodor if it doesn't exist
os.makedirs("garbodor", exist_ok=True)

output_file = "garbodor/pokemon_groups.txt"

pokemon = [
    "Absol", "Aegislash", "Aerodactyl", "Altaria", "Ambipom", "Annihilape", "Araquanid", "Archaludon",
    "Armarouge", "Azumarill", "Barraskewda", "Basculegion", "Basculegion Female", "Baxcalibur", "Bellibolt",
    "Bronzong", "Camerupt", "Ceruledge", "Clawitzer", "Corviknight", "Crawdaunt", "Dondozo", "Dragapult",
    "Dragonite", "Dudunsparce", "Electivire", "Espeon", "Excadrill", "Farigiraf", "Ferrothorn", "Flareon",
    "Froslass", "Garchomp", "Gengar", "Gholdengo", "Glaceon", "Glalie", "Gliscor", "Gogoat", "Golurk",
    "Goodra", "Goodra Hisuian", "Grimmsnarl", "Gyarados", "Hatterene", "Hawlucha", "Hitmonchan", "Hitmonlee",
    "Hitmontop", "Houndstone", "Hydreigon", "Illumise", "Jolteon", "Jynx", "Kingambit", "Kingdra", "Kleavor",
    "Kommo-o", "Krookodile", "Lanturn", "Leafeon", "Lilligant", "Lilligant Hisuian", "Linoone", "Lokix",
    "Lucario", "Ludicolo", "Luxray", "Lycanroc", "Lycanroc Dusk", "Lycanroc Midnight", "Magmortar",
    "Magnezone", "Malamar", "Mamoswine", "Mantine", "Mawile", "Metagross", "Mew", "Milotic", "Mimikyu",
    "Nidoking", "Nidoqueen", "Noivern", "Obstagoon", "Palossand", "Perrserker", "Persian", "Persian Alolan",
    "Pidgeot", "Politoed", "Poliwrath", "Raichu", "Raichu Alolan", "Roserade", "Rotom", "Rotom Fan",
    "Rotom Frost", "Rotom Heat", "Rotom Mow", "Rotom Wash", "Sableye", "Salamence", "Salazzle", "Scizor",
    "Sharpedo", "Shiftry", "Shuckle", "Skarmory", "Slowbro", "Slowbro Galarian", "Slowking", "Slowking Galarian",
    "Sneasler", "Snorlax", "Staraptor", "Sudowoodo", "Swellow", "Sylveon", "Talonflame", "Tatsugiri",
    "Togekiss", "Torkoal", "Toxtricity", "Toxtricity Low Key", "Tyranitar", "Tyrantrum", "Umbreon", "Unown",
    "Ursaluna", "Ursaluna Bloodmoon", "Vaporeon", "Volbeat", "Volcarona", "Wailord", "Weavile", "Whimsicott",
    "Wyrdeer", "Zoroark", "Zoroark Hisuian"
]

num_groups = 5
group_size = len(pokemon) // num_groups
remainder = len(pokemon) % num_groups

start = 0
groups = []

for i in range(num_groups):
    end = start + group_size + (1 if i < remainder else 0)
    groups.append(pokemon[start:end])
    start = end

with open(output_file, 'w', newline='', encoding='utf-8') as outfile:
    for i, group in enumerate(groups, 1):
        outfile.write(f"Group {i}:\n")
        for name in group:
            outfile.write(f"  {name}\n")
        if i < len(groups):
            outfile.write("\n")
