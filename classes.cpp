#include "dice.hpp"
#include "classes.hpp"

using namespace dnd;

classes::cmap classes::classs= {
          {"FIGHTER", {"FIGHTER",d10,
          {{{1}, {1,2,{"Fighting Style","Second Wind"}}},
          {{2}, {2,2, {"Action Surge (x1)"}}},
          {{3}, {3,2, {"Martial Archetype"}}},
          {{4}, {4,2, {"ABILITY SCORE IMPROVEMENT"}}},
          {{5}, {5,3, {"Extra Attack (x1)"}}},
          {{6}, {6,3, {"ABILITY SCORE IMPROVEMENT"}}},
          {{7}, {7,3, {"Martial Archetype feature"}}},
          {{8}, {8,3, {"ABILITY SCORE IMPROVEMENT"}}},
          {{9}, {9,4, {"Indomitable (x1)"}}},
          {{10}, {10,4, {"Martial Archetype feature"}}},
          {{11}, {11,4, {"Extra Attack (x2)"}}},
          {{12}, {12,4, {"ABILITY SCORE IMPROVEMENT"}}},
          {{13}, {13,5, {"Indomitable (x2)"}}},
          {{14}, {14,5, {"ABILITY SCORE IMPROVEMENT"}}},
          {{15}, {15,5, {"Martial Archetype feature"}}},
          {{16}, {16,5, {"ABILITY SCORE IMPROVEMENT"}}},
          {{17}, {17,6, {"Action Surge (x2)", "Indomitable (x3)"}}},
          {{18}, {18,6, {"Martial Archetype feature"}}},
          {{19}, {19,6, {"ABILITY SCORE IMPROVEMENT"}}},
          {{20}, {20,6, {"Extra Attack (x3)"}}}  },
          {
          {"DARKVISION", "Accustomed to life underground, you have superior vision in dark and dim conditions. You can see in dim light within 60 feet of you as if it were bright light, and in darkness as if it were dim light. You can<E2><80><99>t discern color in darkness, only shades of gray."},
          {"DWARVEN RESILIENCE", "You have advantage on saving throws against poison, and you have resistance against poison damage."},
          {"STONECUNNING", "Whenever you make an Intelligence (History) check related to the origin of stonework, you are considered proficient in the History skill and add double your proficiency bonus to the check, instead of your normal proficiency bonus."}},
          {"FISTS","CLUB","DAGGER","GREATCLUB","HANDAXE","JAVELIN","LIGHT HAMMER","MACE","QUARTERSTAFF","QUARTERSTAFF+","SICKLE","SPEAR","SPEAR+","LIGHT CROSSBOW","DART","SHORTBOW","SLING","BATTLEAXE","BATTLEAXE+","FLAIL","GLAIVE","GREATAXE","GREATSWORD","HALBERD","LANCE","LONGSWORD","LONGSWORD+","MAUL","MORNINGSTAR","PIKE","RAPIER","SCIMITAR","SHORTSWORD","TRIDENT","TRIDENT+","WAR PICK","WARHAMMER","WARHAMMER+","WHIP","BLOWGUN","HAND CROSSBOW","HEAVY CROSSBOW","LONGBOW","NET",    "UNARMORED","PADDED","LEATHER","STUDDED LEATHER","HIDE","CHAIN SHIRT","SCALE MAIL","BREASTPLATE","HALF PLATE","RING MAIL","CHAIN MAIL","SPLINT","PLATE"}}}};
