//
// Created by nick on 27.03.19.
//

#ifndef GAME_ELFFACTORY_H
#define GAME_ELFFACTORY_H

#include "CArmyFactory.h"

class ElfFactory : public CArmyFactory {
private:
    MageUnit *create_mage() override;
public:
    MeleeUnit *create_melee() override;

    RangeUnit *create_range() override;
};

#endif //GAME_ELFFACTORY_H
