//
// Created by nick on 12.05.19.
//

#include "MazeCommands/MazeCommands.h"
#include "SlotCommands/SlotMerge.h"
#include "BaseCommands/BuyBaseUnits.h"
#include "ParseKey.h"

void ParseKey::execute() {
    int key = getch();
    cbreak();
    if (key == int('m')) {
        Command *c = new SlotMerge(game);
        c->execute();
    } else if (key == int('b')) {
        Command *c = new BuyBaseUnits(game);
        c->execute();
    } else if (key == int('w') || key == int('s') || key == int('a') || key == int('d')) {
        MazeCell::Direction d;
        if (key == int('w')) {
            d = MazeCell::Direction::up;
        } else if (key == int('s')) {
            d = MazeCell::Direction::down;
        } else if (key == int('a')) {
            d = MazeCell::Direction::left;
        } else {
            d = MazeCell::Direction::right;
        }
        try {
            game->move(d);
        } catch (GoingToWall &e) {
            //nothing
        }
    }
    halfdelay(1);
    game->update_time(time(NULL));
}