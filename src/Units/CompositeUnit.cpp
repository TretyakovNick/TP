//
// Created by nick on 09.05.19.
//

#include <stdexcept>
#include "CompositeUnit.h"

void CompositeUnit::add_unit(Unit *unit) {
    units.push_back(unit);
    relax();
}

void CompositeUnit::relax() {
    full_hp = 0;
    now_hp = 0;
    full_mana = 0;
    now_mana = 0;
    for (auto &unit : units) {
        full_hp += unit->get_full_hp();
        now_hp += unit->get_now_hp();
        full_mana += unit->get_full_mana();
        now_mana += unit->get_now_mana();
    }
}

Unit* CompositeUnit::get_child(int num) const {
    if (num >= (int) units.size() || num < 0) {
        throw std::out_of_range("Number is not in range of units' array");
    }
    return units[num];
}


CompositeUnit* CompositeUnit::get_composite() const {
    return const_cast<CompositeUnit*>(this);
}

int CompositeUnit::size() const {
    return units.size();
}
