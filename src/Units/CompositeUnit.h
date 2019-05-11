//
// Created by nick on 09.05.19.
//

#ifndef GAME_COMPOSITEUNIT_H
#define GAME_COMPOSITEUNIT_H

#include "Unit.h"

class CompositeUnit : public Unit {
public:
    void add_unit(Unit *unit) override;
    CompositeUnit *get_composite() const;
    Unit *get_child(int num) const;
    int size() const;
private:
    std::vector<Unit*> units;
    void relax();
    int full_hp, now_hp;
    int full_mana, now_mana;
};


#endif //GAME_COMPOSITEUNIT_H
