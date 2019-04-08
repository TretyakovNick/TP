//
// Created by nick on 27.03.19.
//

#include "Unit.h"

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

