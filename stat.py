import re

filename = "src/data/battle_frontier/battle_frontier_spreads.h"

with open(filename, 'r') as f:
    lines = f.readlines()

output_lines = []
i = 0
while i < len(lines):
    line = lines[i]
    ivs = {'hp': 0, 'atk': 0, 'def': 0, 'spAtk': 0, 'spDef': 0, 'spd': 0}
    evs = {'hp': 0, 'atk': 0, 'def': 0, 'spAtk': 0, 'spDef': 0, 'spd': 0}
    block_lines = []
    matched = False

    while i < len(lines):
        iv_match = re.match(r'\s*\.(\w+)Iv\s*=\s*(\d+),', lines[i])
        ev_match = re.match(r'\s*\.(\w+)Ev\s*=\s*(\d+),', lines[i])

        if iv_match:
            matched = True
            key = iv_match.group(1)
            val = int(iv_match.group(2))
            ivs[key] = val
            block_lines.append(i)
        elif ev_match:
            matched = True
            key = ev_match.group(1)
            val = int(ev_match.group(2))
            evs[key] = val
            block_lines.append(i)
        else:
            break
        i += 1

    if matched:
        indent = re.match(r'^(\s*)', lines[block_lines[0]]).group(1)
        iv_line = f'{indent}.iv = TRAINER_PARTY_IVS({ivs["hp"]}, {ivs["atk"]}, {ivs["def"]}, {ivs["spd"]}, {ivs["spAtk"]}, {ivs["spDef"]}),\n'
        ev_line = f'{indent}.ev = TRAINER_PARTY_EVS({evs["hp"]}, {evs["atk"]}, {evs["def"]}, {evs["spd"]}, {evs["spAtk"]}, {evs["spDef"]}),\n'
        output_lines.append(iv_line)
        output_lines.append(ev_line)

        # Skip the old IV/EV lines
        for _ in block_lines:
            pass
    else:
        output_lines.append(line)
        i += 1

with open(filename, 'w') as f:
    f.writelines(output_lines)

print("Applied TRAINER_PARTY_EVS/IVS!")
