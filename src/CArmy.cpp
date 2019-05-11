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
    type[place] = 0;
    slots[place] = range;
}

void CArmy::add_melee(CompositeUnit *melee) {
    if (free.empty()) {
        throw NotEnoughSlots{};
    }
    int place = *free.begin();
    free.erase(place);
    melee_nums.insert(place);
    type[place] = 1;
    slots[place] = melee;
}

void CArmy::add_mage(CompositeUnit *mage) {
    if (free.empty()) {
        throw NotEnoughSlots{};
    }
    int place = *free.begin();
    free.erase(place);
    mage_nums.insert(place);
    type[place] = 2;
    slots[place] = mage;
}

CArmy::CArmy() {
    coins = 0;
    for (int i = 0; i < MAX_SLOTS; i++) {
        free.insert(i);
        slots[i] = nullptr;
        type[i] = -1;
    }
}

void CArmy::remove(int pos) {
    if (pos < 0 || pos >= MAX_SLOTS) {
        throw std::out_of_range("Incorrect pos position");
    }
    if (free.find(pos) != free.end()) {
        return;
    }
    free.insert(pos);
    type[pos] = -1;
    melee_nums.erase(pos);
    range_nums.erase(pos);
    mage_nums.erase(pos);
}

void CArmy::merge(int from, int to) {
    if (from < 0 || from >= MAX_SLOTS) {
        throw std::out_of_range("Incorrect from position");
    }
    if (to < 0 || to >= MAX_SLOTS) {
        throw std::out_of_range("Incorrect to position");
    }
    if (type[from] != type[to]) {
        throw DifferentUnitTypesInSlots{};
    }
    if (from == to) return;
    slots[to]->add_unit(slots[from]);
    remove(from);
}


