//
// Created by nick on 12.05.19.
//

#ifndef GAME_SLOTMERGE_H
#define GAME_SLOTMERGE_H


#include "../Command.h"

class SlotMerge : public Command {
public:
    explicit SlotMerge(Game *p) : Command(p) {}
    void execute() override;
};


#endif //GAME_SLOTMERGE_H
