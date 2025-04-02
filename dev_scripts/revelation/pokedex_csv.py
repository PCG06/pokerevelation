# This script converts the Pokémon dex from a Markdown format to a CSV format.

import csv

input_file = "docs/revelation/pokedex.md"
output_file = "pokedex.csv"

with open(output_file, 'w', newline='', encoding='utf-8') as outfile:
    writer = csv.writer(outfile)

with open(input_file, 'r', encoding='utf-8') as infile, open(output_file, 'a', newline='', encoding='utf-8') as outfile:
    writer = csv.writer(outfile)

    previous_dex_no = None
    form_counter = 'a'

    for line in infile:
        if '|' not in line or '---' in line:
            continue  # Skip invalid lines

        parts = [p.strip() for p in line.split('|')[1:-1]]  # Remove empty first & last elements
        if len(parts) < 3:
            continue

        dex_no, name, type1, type2 = parts[0], parts[1], parts[2], parts[3] if len(parts) > 3 else ""

        if dex_no:
            previous_dex_no = dex_no
            form_counter = 'a'  # Reset form counter when a new Pokémon is found
        else:
            dex_no = f"{previous_dex_no}{form_counter}"
            form_counter = chr(ord(form_counter) + 1)  # Increment letter for each form

        writer.writerow([dex_no, name, type1, type2])

print(f"Converted {input_file} to {output_file}")
