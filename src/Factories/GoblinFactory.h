//
// Created by nick on 27.03.19.
//

#ifndef GAME_GOBLINFACTORY_H
#define GAME_GOBLINFACTORY_H

#include "CArmyFactory.h"

class GoblinFactory : public CArmyFactory {
private:
    RangeUnit *create_range() override;

public:
    MeleeUnit *create_melee() override;

    MageUnit *create_mage() override;
};

#endif //GAME_GOBLINFACTORY_H
