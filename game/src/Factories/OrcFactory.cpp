//
// Created by nick on 27.03.19.
//


#include "../Units/Unit.h"
#include "OrcFactory.h"

MeleeUnit *OrcFactory::create_melee() {
    auto unit = new MeleeUnit();
    unit->set_hp(150);
    unit->set_damage(30);
    unit->set_mana(0);
    unit->set_attack_range(1);
    return unit;
}

RangeUnit *OrcFactory::create_range() {
    auto unit = new RangeUnit();
    unit->set_hp(50);
    unit->set_damage(40);
    unit->set_mana(0);
    unit->set_attack_range(3);
    return unit;
}

MageUnit *OrcFactory::create_mage() {}
