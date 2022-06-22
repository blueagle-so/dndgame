#include "race.hpp"

using namespace dnd;

race::rmap race::races = {
        {"HILL DWARF",         {"HILL DWARF",         {"CON", "WIS", "HP"},                       {2, 1, 1},          'M', 25,
                                       {
                                               {"DARKVISION",
                                                                          "Accustomed to life underground, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can’t discern color in darkness, only shades of gray."},
                                               {"DWARVEN RESILIENCE",
                                                                      "You have advantage on saving throws against poison, and you have resistance against poison damage."},
                                               {"STONECUNNING",
                                                       "Whenever you make an Intelligence (History) check related to the origin of stonework, you are considered proficient in the History skill and add double your proficiency bonus to the check, instead of your normal proficiency bonus."}},
                                       {"BATTLEAXE",  "HANDAXE",   "LIGHT HAMMER", "WARHAMMER", "SMITH'S TOOLS", "BREWER'S SUPPLIES",
                                               "MASON'S TOOLS"}}},

        {"HIGH ELF",           {"HIGH ELF",           {"DEX", "INT"},                             {2, 1},             'M', 30,
                                       {
                                               {"DARKVISION",
                                                                          "Accustomed to twilit forests and the night sky, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can’t discern color in darkness, only shades of gray."},
                                               {"FEY ANCESTRY",
                                                                      "You have advantage on saving throws against being charmed, and magic can’t put you to sleep."},
                                               {"TRANCE",
                                                       "Elves don’t need to sleep. Instead, they meditate deeply, remaining semiconscious, for 4 hours a day. (The Common word for such meditation is “trance.”) While meditating, you can dream after a fashion; such dreams are actually mental exercises that have become reflexive through years of practice. After resting in this way, you gain the same benefit that a human does from 8 hours of sleep."}},
                                       {"PERCEPTION", "LONGSWORD", "SHORTSWORD",   "SHORTBOW",  "LONGBOW"}}},

        {"LIGHTFOOT HALFLING", {"LIGHTFOOT HALFLING", {"DEX", "CHA"},                             {2, 1},             'S', 25,
                                       {
                                               {"LUCKY",
                                                                          "When you roll a 1 on the d20 for an attack roll, ability check, or saving throw, you can reroll the die and must use the new roll."},
                                               {"BRAVE",              "You have advantage on saving throws against being frightened."},
                                               {"HALFLING NIMBLENESS",
                                                       "You can move through the space of any creature that is of a size larger than yours."},
                                               {"NATURALLY STEALTHY",
                                                                     "You can attempt to hide even when you are obscured only by a creature that is at least one size larger than you."}},
                                       {}}},

        {"HUMAN",              {"HUMAN",              {"STR", "DEX", "CON", "WIS", "INT", "CHA"}, {1, 1, 1, 1, 1, 1}, 'M', 30,
                                       {},
                                       {}}},

        {"DRAGONBORN",         {"DRAGONBORN",         {"STR", "CHA"},                             {2, 1},             'M', 30,
                                       {
                                               {"DRACONIC ANCESTRY",
                                                                          "You have draconic ancestry. Choose one type of dragon from the Draconic Ancestry table. Your breath weapon and damage resistance are determined by the dragon type, as shown in the table."},
                                               {"BREATH WEAPON",
                                                                      "You can use your action to exhale destructive energy. Your draconic ancestry determines the size, shape, and damage type of the exhalation. When you use your breath weapon, each creature in the area of the exhalation must make a saving throw, the type of which is determined by your draconic ancestry. The DC for this saving throw equals 8 + your Constitution modifier + your proficiency bonus. A creature takes 2d6 damage on a failed save, and half as much damage on a successful one. The damage increases to 3d6 at 6th level, 4d6 at 11th level, and 5d6 at 16th level. After you use your breath weapon, you can’t use it again until you complete a short or long rest."},
                                               {"DAMAGE RESISTANCE",
                                                       "You have resistance to the damage type associated with your draconic ancestry."}},
                                       {}}},

        {"ROCK GNOME",         {"ROCK GNOME",         {"INT", "CON"},                             {2, 1},             'S', 25,
                                       {
                                               {"DARKVISION",
                                                                          "Accustomed to life underground, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can’t discern color in darkness, only shades of gray."},
                                               {"GNOME CUNNING",
                                                                      "You have advantage on all Intelligence, Wisdom, and Charisma saving throws against magic."},
                                               {"ARTIFICIER'S LORE",
                                                       "Whenever you make an Intelligence (History) check related to magic items, alchemical objects, or technological devices, you can add twice your proficiency bonus, instead of any proficiency bonus you normally apply."},
                                               {"TINKER",
                                                                     "You have proficiency with artisan’s tools (tinker’s tools). Using those tools, you can spend 1 hour and 10 gp worth of materials to construct a Tiny clockwork device (AC 5, 1 hp). The device ceases to function after 24 hours (unless you spend 1 hour repairing it to keep the device functioning), or when you use your action to dismantle it; at that time, you can reclaim the materials used to create it. You can have up to three such devices active at a time. When you create a device, choose one of the following options:"
                                                                     "Clockwork Toy. This toy is a clockwork animal, monster, or person, such as a frog, mouse, bird, dragon, or soldier. When placed on the ground, the toy moves 5 feet across the ground on each of your turns in a random direction. It makes noises as appropriate to the creature it represents."
                                                                     "Fire Starter. The device produces a miniature flame, which you can use to light a candle, torch, or campfire. Using the device requires your action."
                                                                     "Music Box. When opened, this music box plays a single song at a moderate volume. The box stops playing when it reaches the song’s end or when it is closed."}},
                                       {"ARTISAN's TOOLS"}}},

        {"HALF-ELF",           {"HALF-ELF",           {"CHA"},                                    {2},                'M', 30,
                                       {
                                               {"ABILITY SCORE INCREASE", "Two ability scores of your choice increase by 1"},
                                               {"DARKVISION",
                                                                      "Thanks to your elf blood, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can’t discern color in darkness, only shades of gray."},
                                               {"FEY ANCESTRY",
                                                       "You have advantage on saving throws against being charmed, and magic can’t put you to sleep."},
                                               {"SKILL VERSATILITY", "You gain proficiency in two skills of your choice."}},
                                       {}}},

        {"HALF-ORC",           {"HALF-ORC",           {"STR", "CON"},                             {2, 1},             'M', 30,
                                       {
                                               {"DARKVISION",
                                                                          "Thanks to your orc blood, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can’t discern color in darkness, only shades of gray."},
                                               {"RELENTLESS ENDURANCE",
                                                                      "When you are reduced to 0 hit points but not killed outright, you can drop to 1 hit point instead. You can’t use this feature again until you finish a long rest."},
                                               {"SAVAGE ATTACKS",
                                                       "When you score a critical hit with a melee weapon attack, you can roll one of the weapon’s damage dice one additional time and add it to the extra damage of the critical hit."}},
                                       {"INTIMIDATION"}}},

        {"TIEFLING",           {"TIEFLING",           {"INT", "CHA"},                             {1, 2},             'M', 30,
                                       {
                                               {"DARKVISION",
                                                                          "Thanks to your infernal heritage, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can’t discern color in darkness, only shades of gray."},
                                               {"HELLISH RESISTANCE", "You have resistance to fire damage."},
                                               {"INFERNAL LEGACY",
                                                       "You know the thaumaturgy cantrip. When you reach 3rd level, you can cast the hellish rebuke spell as a 2nd-level spell once with this trait and regain the ability to do so when you finish a long rest. When you reach 5th level, you can cast the darkness spell once with this trait and regain the ability to do so when you finish a long rest. Charisma is your spellcasting ability for these spells."}},
                                       {}}},
};

void race::addRace(const std::string &name, Race &stats) {
    races[name] = stats;
}

void race::delRace(const std::string &name) {
    races.erase(name);
}

int race::save(const std::string &file) {
    std::ofstream out;
    out.open(file);

    if (out.good()) {
        std::string delim = "$";
        std::string delim2 = "|";
        std::string mapDelim = "#";

        for (auto const &[key, race] : races) {
            out << key << delim;
            out << race.name << delim;
            for (int i = 0; i < race.abis.size(); ++i) {
                out << race.abis[i];

                if (i != race.abis.size() - 1) {
                    out << delim2;
                }
            }

            out << delim;

            for (int j = 0; j < race.boosts.size(); ++j) {
                out << race.boosts[j];

                if (j != race.boosts.size() - 1) {
                    out << delim2;
                }
            }

            out << delim;

            out << race.size << delim;

            out << race.speed << delim;

            int count = 0;
            for (auto const &[k, v] : race.traits) {
                ++count;

                out << k << mapDelim << v;

                if (count != race.traits.size()) {
                    out << delim2;
                }
            }

            out << delim;

            for (int l = 0; l < race.prof.size(); ++l) {
                out << race.prof[l];

                if (l != race.prof.size() - 1) {
                    out << delim2;
                }
            }

            out << std::endl;
        }

        out << races.size();
        out << "fin";

        out.flush();
        out.close();

        std::cout << "WRITTEN" << std::endl;
        return 1;
    } else {
        out.flush();
        out.close();

        std::cerr << "CAN'T WRITE" << std::endl;
        return 0;
    }
}

int race::load(const std::string &file) {
    std::ifstream fin;
    fin.open(file);

    if (fin.good()) {
        std::string tmp;
        std::string token, mToken;
        std::string delim = "$";
        std::string delim2 = "|";
        std::string mapDelim = "#";
        size_t pos, mPos;
        std::vector<std::string> mapper;

        std::vector<std::string> a, p;
        std::vector<unsigned short> b;
        std::map<std::string, std::string> t;

        races.clear();

        while (getline(fin, tmp)) {
            if (tmp.substr(tmp.size() - 3, 3) == "fin") {
                if (races.size() != std::stoi(tmp.substr(0, tmp.size() - 3))) {
                    fin.close();

                    std::cerr << "ERROR WHEN READING" << std::endl;
                    return 0;
                } else {
                    break;
                }
            }

            mapper.clear();
            while ((pos = tmp.find(delim)) != std::string::npos) {
                token = tmp.substr(0, pos);
                mapper.push_back(token);
                tmp.erase(0, pos + delim.size());
            }
            mapper.push_back(tmp);

            a.clear();
            while ((pos = mapper[2].find(delim2)) != std::string::npos) {
                token = mapper[2].substr(0, pos);
                a.push_back(token);
                mapper[2].erase(0, pos + delim.size());
            }
            a.push_back(mapper[1]);

            b.clear();
            while ((pos = mapper[3].find(delim2)) != std::string::npos) {
                token = mapper[3].substr(0, pos);
                b.push_back(static_cast<unsigned short>(std::stoi(token))); //TODO Fix for empty numbers
                mapper[3].erase(0, pos + delim.size());
            }
            b.push_back(static_cast<unsigned short>(std::stoi(mapper[3])));

            t.clear();
            while ((pos = mapper[6].find((delim2))) != std::string::npos) {
                token = mapper[6].substr(0, pos);

                while ((mPos = token.find(mapDelim)) != std::string::npos) {
                    mToken = token.substr(0, mPos);
                    token.erase(0, mPos + mapDelim.size());

                    t[mToken] = {token};
                }

                mapper[6].erase(0, pos + delim2.size());
            }

            while ((pos = mapper[6].find(mapDelim)) != std::string::npos) {
                token = mapper[6].substr(0, pos);
                mapper[6].erase(0, pos + mapDelim.size());

                t[token] = {mapper[6]};
            }

            p.clear();
            while ((pos = mapper[7].find(delim2)) != std::string::npos) {
                token = mapper[7].substr(0, pos);
                p.push_back(token);
                mapper[7].erase(0, pos + delim.size());
            }
            p.push_back(mapper[7]);

            races[mapper[0]] = {
                    mapper[1],
                    a,
                    b,
                    mapper[4][0],
                    static_cast<unsigned int>(std::stoi(mapper[5])),
                    t,
                    p
            };

            tmp.clear();
        }
        fin.close();

        std::cout << "READ" << std::endl;
        return 1;
    } else {
        fin.close();

        std::cerr << "CAN'T READ" << std::endl;
        return 0;
    }
}
