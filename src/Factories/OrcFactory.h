//
// Created by nick on 27.03.19.
//

#ifndef GAME_ORCFACTORY_H
#define GAME_ORCFACTORY_H

#include "CArmyFactory.h"

class OrcFactory : public CArmyFactory {
private:
    MageUnit *create_mage() override;

public:
    RangeUnit *create_range() override;

    MeleeUnit *create_melee() override;
};

#endif //GAME_ORCFACTORY_H
