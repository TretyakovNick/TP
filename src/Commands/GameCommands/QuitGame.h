//
// Created by nick on 12.05.19.
//

#ifndef GAME_QUITGAME_H
#define GAME_QUITGAME_H


#include "../Command.h"

class QuitGame : public Command {
public:
    QuitGame(Game *p) : Command(p) {}
    void execute() override;
};


#endif //GAME_QUITGAME_H
