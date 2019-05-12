//
// Created by nick on 12.05.19.
//

#ifndef GAME_BUYBASEUNITS_H
#define GAME_BUYBASEUNITS_H


#include "../Command.h"

class BuyBaseUnits : public Command {
public:
    BuyBaseUnits(Game *p) : Command(p) {}
    void execute() override;
};


#endif //GAME_BUYBASEUNITS_H
