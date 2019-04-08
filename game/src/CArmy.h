//
// Created by nick on 27.03.19.
//

#ifndef GAME_CARMY_H
#define GAME_CARMY_H

#include <vector>
#include <Units/Unit.h>

class CArmy {
private:
    std::vector <RangeUnit*> range_units;
    std::vector <MeleeUnit*> melee_units;
    std::vector <MageUnit*> mage_units;
public:
    void add_range(RangeUnit *range);
    void add_melee(MeleeUnit *melee);
    void add_mage(MageUnit *mage);
};

#endif //GAME_CARMY_H
