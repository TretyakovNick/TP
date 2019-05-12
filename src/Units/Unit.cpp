//
// Created by nick on 27.03.19.
//

#include <stdexcept>
#include "Unit.h"

std::string EUnitTypeToString(EUnitType type) {
    if (type == EUnitType::none) {
        return "none";
    }
    if (type == EUnitType::melee) {
        return "melee";
    }
    if (type == EUnitType::mage) {
        return "mage";
    }
    return "range";
}

void Unit::set_hp(int hp) {
    full_hp = hp;
    now_hp = hp;
}

void Unit::set_damage(int dmg) {
    damage = dmg;
}

void Unit::set_mana(int mana) {
    full_mana = mana;
    now_mana = mana;
}

void Unit::set_attack_range(int range) {
    attack_range = range;
}

int Unit::get_full_hp() const {
    return full_hp;
}

int Unit::get_now_hp() const {
    return now_hp;
}

int Unit::get_damage() const {
    return damage;
}

int Unit::get_full_mana() const {
    return full_mana;
}

int Unit::get_now_mana() const {
    return now_mana;
}

int Unit::get_attack_range() const {
    return attack_range;
}

void Unit::add_unit(Unit *unit) {
    assert(false);
}

Unit* Unit::get_composite() {
    return nullptr;
}

Unit::Unit() {
    full_hp = 0, now_hp = 0;
    full_mana = 0, now_mana = 0;
    damage = 0;
    attack_range = 0;
}