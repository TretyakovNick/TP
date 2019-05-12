//
// Created by nick on 27.03.19.
//

#include "CArmy.h"

void CArmy::pay(int now_coins) {
    if (coins < now_coins) {
        throw NotEnoughCoins{};
    }
    coins -= now_coins;
}

void CArmy::add_range(CompositeUnit *range) {
    if (free.empty()) {
        throw NotEnoughSlots{};
    }
    int place = *free.begin();
    free.erase(place);
    range_nums.insert(place);
    type[place] = EUnitType::range;
    slots[place] = range;
}

void CArmy::add_melee(CompositeUnit *melee) {
    if (free.empty()) {
        throw NotEnoughSlots{};
    }
    int place = *free.begin();
    free.erase(place);
    melee_nums.insert(place);
    type[place] = EUnitType::melee;
    slots[place] = melee;
}

void CArmy::add_mage(CompositeUnit *mage) {
    if (free.empty()) {
        throw NotEnoughSlots{};
    }
    int place = *free.begin();
    free.erase(place);
    mage_nums.insert(place);
    type[place] = EUnitType::mage;
    slots[place] = mage;
}

CArmy::CArmy() {
    coins = 0;
    for (int i = 0; i < MAX_SLOTS; i++) {
        free.insert(i);
        slots[i] = new CompositeUnit();
        type[i] = EUnitType::none;
    }
}

void CArmy::remove(int pos) {
    if (pos < 0 || pos >= MAX_SLOTS) {
        throw std::out_of_range("Incorrect _pos_ position");
    }
    if (free.find(pos) != free.end()) {
        return;
    }
    free.insert(pos);
    type[pos] = EUnitType::none;
    slots[pos] = new CompositeUnit();
    melee_nums.erase(pos);
    range_nums.erase(pos);
    mage_nums.erase(pos);
}

int CArmy::get_coins() const {
    return coins;
}

void CArmy::merge(int from, int to) {
    if (from < 0 || from >= MAX_SLOTS) {
        throw std::out_of_range("Incorrect _from_ position");
    }
    if (to < 0 || to >= MAX_SLOTS) {
        throw std::out_of_range("Incorrect _to_ position");
    }
    if (type[from] != type[to] || type[from] == EUnitType::none) {
        throw DifferentUnitTypesInSlots{};
    }
    if (from == to) return;
    slots[to]->add_unit(slots[from]);
    remove(from);
}

bool CArmy::correct_slot(int slot) const {
    return slot >= 0 && slot < MAX_SLOTS;
}

CArmy::CArmy(const CArmy &army) {
    coins = army.coins;
    for (int i = 0; i < MAX_SLOTS; i++) {
        slots[i] = new CompositeUnit(*army.slots[i]);
        type[i] = army.type[i];
    }
    free = army.free;
    melee_nums = army.melee_nums;
    range_nums = army.range_nums;
    mage_nums = army.mage_nums;
}

CompositeUnit* CArmy::get_slot(int slot) const {
    if (!correct_slot(slot)) {
        throw IncorrectSlot{};
    }
    return slots[slot];
}

EUnitType CArmy::get_type(int slot) const {
    if (!correct_slot(slot)) {
        throw IncorrectSlot{};
    }
    return type[slot];
}