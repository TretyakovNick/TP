//
// Created by nick on 27.03.19.
//

#include "CArmy.h"

void CArmy::add_range(RangeUnit *range) {
    range_units.push_back(range);
}

void CArmy::add_melee(MeleeUnit *melee) {
    melee_units.push_back(melee);
}

void CArmy::add_mage(MageUnit *mage) {
    mage_units.push_back(mage);
}
