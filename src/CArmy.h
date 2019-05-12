//
// Created by nick on 27.03.19.
//

#ifndef GAME_CARMY_H
#define GAME_CARMY_H

#include <cassert>
#include <iostream>
#include <vector>
#include <set>
#include "Units/Unit.h"
#include "Units/CompositeUnit.h"
#include "Maze/MazeCell.h"

class NotEnoughCoins : public std::exception {
};

class NotEnoughSlots : public std::exception {
};

class DifferentUnitTypesInSlots : public std::exception {
};

class IncorrectSlot : public std::exception {
};

class CArmy {
public:
    const static int MAX_SLOTS = 10;
private:
    int coins;
    CompositeUnit *slots[MAX_SLOTS];
    EUnitType type[MAX_SLOTS];
    std::set<int> melee_nums;
    std::set<int> range_nums;
    std::set<int> mage_nums;
    std::set<int> free;
public:
    CArmy();

    CArmy(const CArmy &army);

    void pay(int now_coins);

    bool correct_slot(int slot) const;

    void add_range(CompositeUnit *range);

    void add_melee(CompositeUnit *melee);

    void add_mage(CompositeUnit *mage);

    int get_coins() const;

    bool overflow() const;

    CompositeUnit *get_slot(int slot) const;

    EUnitType get_type(int slot) const;

    void merge(int from, int to);

    //void split(int pos, int count);
    void remove(int pos);
};

#endif //GAME_CARMY_H
