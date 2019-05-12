//
// Created by nick on 12.05.19.
//

#ifndef GAME_PARSEKEY_H
#define GAME_PARSEKEY_H


#include "Command.h"

class ParseKey : public Command {
public:
    explicit ParseKey(Game *p) : Command(p) {}
    void execute() override;
};


#endif //GAME_PARSEKEY_H
