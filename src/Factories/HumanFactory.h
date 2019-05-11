//
// Created by nick on 27.03.19.
//

#ifndef GAME_HUMANFACTORY_H
#define GAME_HUMANFACTORY_H

#include "CArmyFactory.h"

class HumanFactory : public CArmyFactory {
public:
    RangeUnit *create_range() override;

    MeleeUnit *create_melee() override;

    MageUnit *create_mage() override;
};

#endif //GAME_HUMANFACTORY_H