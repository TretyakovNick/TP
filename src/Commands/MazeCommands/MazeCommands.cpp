//
// Created by nick on 12.05.19.
//

#include <algorithm>
#include "MazeCommands.h"


std::string toString(int value) {
    std::string res = "";
    bool minus = false;
    if (value < 0) {
        minus = true;
        value = -value;
    }
    do {
        res += (char) (value % 10 + '0');
        value /= 10;
    } while (value);
    if (minus) {
        res += '-';
    }
    std::reverse(res.begin(), res.end());
    return res;
}

void MazeCreation::execute() {
    game->maze->generate_random_maze(10, 10);
    game->posx = 0, game->posy = 0;
    game->known.resize(game->maze->get_height(), std::vector<bool>(game->maze->get_width(), false));
    game->known_relax();
}

void MazePrint::execute() {
    clear();
    game->maze->print(game->posx, game->posy, game->known);
    MazeCell *cell = game->maze->get_cell(game->posx, game->posy);
    const int BLOCK_LEN = 20;
    const int BLOCK_HEIGHT = 7;
    std::vector<std::string> slots_output(BLOCK_HEIGHT);
    for (int i = 0; i < CArmy::MAX_SLOTS; i++) {
        slots_output[0] += std::string(BLOCK_LEN, ' ');
        slots_output[0][BLOCK_LEN * i + BLOCK_LEN / 2] = (char) (i + '0');
        if (game->army->get_type(i) != EUnitType::none) {
            std::string count = toString(game->army->get_slot(i)->get_count());
            std::string type;
            if (game->army->get_type(i) == EUnitType::range) {
                type = "range";
            } else if (game->army->get_type(i) == EUnitType::melee) {
                type = "melee";
            } else if (game->army->get_type(i) == EUnitType::mage) {
                type = "mage";
            }
            std::string unit_damage = toString(
                    game->army->get_slot(i)->get_damage() / game->army->get_slot(i)->get_count());
            int hp = game->army->get_slot(i)->get_full_hp();
            std::string full_hp = toString(hp);
            std::string now_hp = toString(game->army->get_slot(i)->get_now_hp());

            std::string full_mana = toString(game->army->get_slot(i)->get_full_mana());
            std::string now_mana = toString(game->army->get_slot(i)->get_now_mana());

            slots_output[1] += "Count: " + count + std::string(BLOCK_LEN - 7 - count.size(), ' ');
            slots_output[2] += "Type: " + type + std::string(BLOCK_LEN - 6 - type.size(), ' ');
            slots_output[3] += "Unit damage: " + unit_damage + std::string(BLOCK_LEN - 13 - unit_damage.size(), ' ');
            slots_output[4] += "Health: " + now_hp + "/" + full_hp + std::string(BLOCK_LEN - 9 - now_hp.size() - full_hp.size(), ' ');
            slots_output[5] += "Mana: " + now_mana + "/" + full_mana + std::string(BLOCK_LEN - 7 - now_mana.size() - full_mana.size(), ' ');
        } else {
            for (int j = 1; j < BLOCK_HEIGHT; j++) {
                slots_output[j] += std::string(BLOCK_LEN, ' ');
            }
        }
    }
    addstr("\nSlots\n");
    for (int i = 0; i < BLOCK_HEIGHT; i++) {
        addstr(slots_output[i].c_str());
        addstr("\n");
    }
    printw("Time: %d\n", game->get_time());
    printw("Coins: %d\n\n", game->army->get_coins());

    if (cell->type == MazeCell::ECellType::base) {
        addstr("BaseMode:\n");
        for (int type = 1; type < 4; type++) {
            int have = game->base_factory->get_now(EUnitType(type));
            int all = game->base_factory->max_units[game->base_factory->get_lvl(EUnitType(type))];
            std::string type_s = EUnitTypeToString(EUnitType(type));
            printw("Available %s units: %d/%d\n", type_s.c_str(), have, all);
        }
    }

}