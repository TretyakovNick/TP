//
// Created by nick on 27.03.19.
//

#ifndef GAME_HUMANFACTORY_H
#define GAME_HUMANFACTORY_H

#include "CArmyFactory.h"

class HumanFactory : CArmyFactory {
public:
    RangeUnit *create_range();
    MeleeUnit *create_melee();
    MageUnit *create_mage();
};

#endif //GAME_HUMANFACTORY_H