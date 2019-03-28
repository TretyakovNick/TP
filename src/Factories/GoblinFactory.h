//
// Created by nick on 27.03.19.
//

#ifndef GAME_GOBLINFACTORY_H
#define GAME_GOBLINFACTORY_H

#include "CArmyFactory.h"

class GoblinFactory : CArmyFactory {
private:
    RangeUnit *create_range();
public:
    MeleeUnit *create_melee();
    MageUnit *create_mage();
};

#endif //GAME_GOBLINFACTORY_H
