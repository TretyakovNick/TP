//
// Created by nick on 11.05.19.
//

#include "BaseDecorator.h"

void BaseDecorator::update_melee_factory(CArmy *army) {
    if (melee_factory_lvl == MAX_LVL) {
        throw MaxLevelReached{};
    }
    try {
        army->pay(coins_needed[melee_factory_lvl]);
    } catch(NotEnoughCoins &e) {
        return;
    }
    melee_factory_lvl++;
}


void BaseDecorator::update_range_factory(CArmy *army) {
    if (range_factory_lvl == MAX_LVL) {
        throw MaxLevelReached{};
    }
    try {
        army->pay(coins_needed[range_factory_lvl]);
    } catch(NotEnoughCoins &e) {
        return;
    }
    range_factory_lvl++;
}

void BaseDecorator::update_mage_factory(CArmy *army) {
    if (mage_factory_lvl == MAX_LVL) {
        throw MaxLevelReached{};
    }
    try {
        army->pay(coins_needed[mage_factory_lvl]);
    } catch(NotEnoughCoins &e) {
        return;
    }
    mage_factory_lvl++;
}

void BaseDecorator::get_melee(CArmy *army, int count) {
    if (count > now_melee) {
        throw NotEnoughUnits{};
    }
    now_melee -= count;
    auto now = new CompositeUnit();
    for (int i = 0; i < count; i++) {
        now->add_unit(create_melee());
    }
    army->add_melee(now);
}


void BaseDecorator::get_range(CArmy *army, int count) {
    if (count > now_range) {
        throw NotEnoughUnits{};
    }
    now_range -= count;
    auto now = new CompositeUnit();
    for (int i = 0; i < count; i++) {
        now->add_unit(create_range());
    }
    army->add_range(now);
}


void BaseDecorator::get_mage(CArmy *army, int count) {
    if (count > now_mage) {
        throw NotEnoughUnits{};
    }
    now_mage -= count;
    auto now = new CompositeUnit();
    for (int i = 0; i < count; i++) {
        now->add_unit(create_mage());
    }
    army->add_mage(now);
}

void BaseDecorator::replenish() {
    now_melee = std::min(now_melee + 1, max_units[melee_factory_lvl]);
    now_range = std::min(now_range + 1, max_units[range_factory_lvl]);
    now_mage = std::min(now_mage + 1, max_units[mage_factory_lvl]);
}