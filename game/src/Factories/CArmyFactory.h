//
// Created by nick on 27.03.19.
//

#ifndef GAME_CARMYFACTORY_H
#define GAME_CARMYFACTORY_H

#include "../Units/Unit.h"

class CArmyFactory {
public:
    virtual RangeUnit* create_range() = 0;
    virtual MeleeUnit* create_melee() = 0;
    virtual MageUnit* create_mage() = 0;
    virtual ~CArmyFactory() = default;
};

#endif //GAME_CARMYFACTORY_H
