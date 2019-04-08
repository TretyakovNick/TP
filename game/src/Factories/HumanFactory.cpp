//
// Created by nick on 27.03.19.
//

#include "HumanFactory.h"

RangeUnit *HumanFactory::create_range() {
    auto unit = new RangeUnit();
    unit->set_hp(70);
    unit->set_damage(50);
    unit->set_mana(0);
    unit->set_attack_range(5);
    return unit;
}

MeleeUnit *HumanFactory::create_melee() {
    auto unit = new MeleeUnit();
    unit->set_hp(80);
    unit->set_damage(40);
    unit->set_mana(30);
    unit->set_attack_range(1);
    return unit;
}

MageUnit *HumanFactory::create_mage() {
    auto unit = new MageUnit();
    unit->set_hp(60);
    unit->set_damage(10);
    unit->set_mana(80);
    unit->set_attack_range(3);
    return unit;
}
