//
// Created by nick on 12.05.19.
//

#ifndef GAME_COMMAND_H
#define GAME_COMMAND_H

#include <ncurses.h>
#include "../Game.h"

class WrongKey : std::exception {};

class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
protected:
    explicit Command(Game *p) : game(p) {}
    Game *game;
};


#endif //GAME_COMMAND_H
