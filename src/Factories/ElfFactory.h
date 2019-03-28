//
// Created by nick on 27.03.19.
//

#ifndef GAME_ELFFACTORY_H
#define GAME_ELFFACTORY_H

#include "CArmyFactory.h"

class ElfFactory : CArmyFactory {
private:
    MageUnit *create_mage();
public:
    MeleeUnit *create_melee();
    RangeUnit *create_range();
};

#endif //GAME_ELFFACTORY_H
