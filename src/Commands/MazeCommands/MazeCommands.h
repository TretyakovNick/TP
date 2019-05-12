//
// Created by nick on 12.05.19.
//

#ifndef GAME_MAZECOMMANDS_H
#define GAME_MAZECOMMANDS_H

#include "../Command.h"

class MazeCreation : public Command {
public:
    explicit MazeCreation(Game *p) : Command(p) {}
    void execute() override;
};

class MazePrint : public Command {
public:
    explicit MazePrint(Game *p) : Command(p) {}
    void execute() override;
};

#endif //GAME_MAZECOMMANDS_H
