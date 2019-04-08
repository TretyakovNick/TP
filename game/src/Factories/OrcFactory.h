//
// Created by nick on 27.03.19.
//

#ifndef GAME_ORCFACTORY_H
#define GAME_ORCFACTORY_H

#include "CArmyFactory.h"

class OrcFactory : CArmyFactory {
private:
    MageUnit *create_mage();
public:
    RangeUnit *create_range();
    MeleeUnit *create_melee();
};

#endif //GAME_ORCFACTORY_H
