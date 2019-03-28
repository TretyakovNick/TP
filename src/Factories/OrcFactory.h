//
// Created by nick on 27.03.19.
//

#ifndef GAME_ORCFACTORY_H
#define GAME_ORCFACTORY_H

#include "Unit.h"

class OrcFactory : CArmyFactory {
public:
    RangeUnit *create_range();
    MeleeUnit *create_melee();
};

#endif //GAME_ORCFACTORY_H
