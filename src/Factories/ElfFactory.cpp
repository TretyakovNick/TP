//
// Created by nick on 27.03.19.
//

#include "ElfFactory.h"

RangeUnit *ElfFactory::create_range() {
    auto unit = new RangeUnit();
    unit->set_hp(40);
    unit->set_damage(100);
    unit->set_mana(0);
    unit->set_attack_range(3);
    return unit;
}

MeleeUnit *ElfFactory::create_melee() {
    auto unit = new MeleeUnit();
    unit->set_hp(100);
    unit->set_damage(20);
    unit->set_mana(0);
    unit->set_attack_range(1);
    return unit;
}

MageUnit *ElfFactory::create_mage() {}

