//
// Created by nick on 12.05.19.
//

#include "BuyBaseUnits.h"

void BuyBaseUnits::execute() {
    if (game->maze->get_cell(game->posx, game->posy)->type != MazeCell::ECellType::base) {
        return;
    }
    clear();
    addstr("What do you want to get? Press 1 to melee, 2 to range, 3 to mage\n");
    int type = getch() - int('0');
    if (type < 1 || type > 3) {
        addstr("Incorrect key, press any key to continue..\n");
        int key = getch();
        return;
    }
    int have = game->base_factory->get_now(EUnitType(type));
    try {
        game->base_factory->get_units(game->army, have, EUnitType(type));
    } catch (std::exception &e) {
        addstr("Oops, unsuccessful, press any key to continue..\n");
        int key = getch();
        return;
    }
    addstr("Successful, press any key to continue..\n");
    int key = getch();
}