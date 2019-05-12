//
// Created by nick on 09.05.19.
//

#ifndef GAME_COMPOSITEUNIT_H
#define GAME_COMPOSITEUNIT_H

#include "Unit.h"

class CompositeUnit : public Unit {
public:
    CompositeUnit(const CompositeUnit &unit) : units(unit.units), count(unit.get_composite() ? unit.count : 1), Unit(unit) {}
    CompositeUnit() : units(std::vector <Unit*>(0)), count(0), Unit() {}
    void add_unit(Unit *unit) override;
    CompositeUnit *get_composite() const;
    Unit *get_child(int num) const;
    int size() const;
    int get_count() const override;
private:
    std::vector<Unit*> units;
    void relax();
    int count;
};


#endif //GAME_COMPOSITEUNIT_H
