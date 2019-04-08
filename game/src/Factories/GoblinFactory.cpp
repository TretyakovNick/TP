//
// Created by nick on 27.03.19.
//

#include "GoblinFactory.h"

MeleeUnit *GoblinFactory::create_melee() {
    auto unit = new MeleeUnit();
    unit->set_hp(10);
    unit->set_damage(100);
    unit->set_mana(0);
    unit->set_attack_range(1);
    return unit;
}

MageUnit *GoblinFactory::create_mage() {
    auto unit = new MageUnit();
    unit->set_hp(130);
    unit->set_damage(10);
    unit->set_mana(500);
    unit->set_attack_range(10);
    return unit;
}

RangeUnit *GoblinFactory::create_range() {}