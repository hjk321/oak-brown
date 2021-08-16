# CONFIG
# Should we log extra information?
verbose = 0
# First in list takes priority
learnsets = ["ultra-sun-ultra-moon","black-2-white-2","firered-leafgreen"]

# This needs to be run from the pokefirered working directory
# (The same folder you run make in)
# Then, run this command:
# python3 movesets.py >> log.txt
# And that will put all output into a file named log.txt

# -------------- DON'T EDIT BELOW THIS LINE. ---------------

# Get list of valid moves
moves = []
started_moves = 0
print("Reading constants/moves.h for list of valid moves...")
with open("include/constants/moves.h") as move_file:
    for line in move_file:
        split = line.split(" ")
        if len(split) < 2:
            continue
        elif started_moves == 0:
            if split[1] == "MOVE_NONE":
                started_moves = 1
            continue
        elif split[1] == "LAST_MOVE_INDEX":
            break
        else:
            moves.append(split[1].replace("MOVE_", "").lower().replace("_", "-"))
print(str(len(moves)) + " moves found in game.")

# Define Mon related data structures and functions
class Mon:
    def __init__(self):
        self.name = ""
        self.level_up = {}
        self.evolution = ""
mons = []

move_bounties = []

def process_movesets(pkmn, mon, learnset):
    print("Processing movesets for " + mon.name + " with learnset " + learnset + ".")
    if len(mon.level_up) == 0:
        first_learnset = 1
    else:
        first_learnset = 0
    for move in pkmn.moves:
        if (move.move.name not in moves):
            # Move not in game, check if should log bounty
            for version in move.version_group_details:
                if version.version_group.name == learnset:
                    move_bounties.append(move.move.name)
                    # Check if should warn
                    if not verbose:
                        continue
                    if version.move_learn_method.name == "level-up":
                        print("SKIPPING level-up move " + move.move.name + " (lvl " + str(version.level_learned_at) + 
                            ") as it is not in the game")
                    else:
                        print("SKIPPING " + version.move_learn_method.name + " move " + move.move.name + " as it is not in the game")
            continue
        for version in move.version_group_details:
            if not version.version_group.name == learnset:
                continue
            # Move is both in game and in learnset.
            if version.move_learn_method.name == "level-up":
                if version.level_learned_at == 0:
                    # Evolution Move
                    if mon.evolution == "":
                        print("Adding evolution move " + move.move.name)
                    else:
                        print("SKIPPING evolution move " + move.move.name + " as one has already been added")
                    continue
                if move.move.name in mon.level_up and first_learnset == 0:
                    if verbose:
                        print("SKIPPING " + version.move_learn_method.name + " move " + move.move.name + 
                            " (lvl " + str(version.level_learned_at) + ") as it was added in a previous learnset")
                    continue
                print("Adding level-up move " + move.move.name + " (lvl " + str(version.level_learned_at) + ")")
                mon.level_up[move.move.name] = str(version.level_learned_at)
            # TODO Other learnsets
            # elif version.move_learn_method.name == "egg":
            else:
                if verbose:
                    print("SKIPPING move " + move.move.name + 
                        " as it has unsupported learn method " + version.move_learn_method.name)

# Main Pokebase loop
import pokebase as pb
for num in list(range(1, 650)) + list(range(700, 701)):
    print()
    pkmn = pb.pokemon(num)
    mon = Mon()
    mon.name = pkmn.name
    for learnset in learnsets:
        process_movesets(pkmn, mon, learnset)
    mons.append(mon)

# Print bounty list
from collections import Counter
bounties = Counter(move_bounties)
print()
print("MOVE BOUNTIES:")
print("(The ten moves most referenced but are not in the game)")
for bounty in bounties.most_common(10):
    print(bounty[0] + ": " + str(bounty[1]))
