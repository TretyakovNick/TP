//
// Created by nick on 11.05.19.
//

#ifndef GAME_BASEDECORATOR_H
#define GAME_BASEDECORATOR_H


#include "../CArmy.h"
#include "FactoryDecorator.h"

class BaseDecorator : public FactoryDecorator {
public:
    const static int MAX_LVL = 5;
    const std::vector <int> max_units = {1, 2, 5, 10, 25, 100};
    const std::vector <int> coins_needed = {5, 25, 100, 1000, 10000};
private:
    int melee_factory_lvl;
    int range_factory_lvl;
    int mage_factory_lvl;
    int now_melee, now_range, now_mage;
public:
    explicit BaseDecorator(CArmyFactory *f) : FactoryDecorator(f) {
        melee_factory_lvl = 0;
        range_factory_lvl = 0;
        mage_factory_lvl = 0;
        now_melee = 1, now_range = 1, now_mage = 1;
    }
    void update_melee_factory(CArmy *army);
    void update_range_factory(CArmy *army);
    void update_mage_factory(CArmy *army);
    void get_melee(CArmy * army, int count);
    void get_range(CArmy * army, int count);
    void get_mage(CArmy * army, int count);
    void replenish(int count = 1);

    int get_now(EUnitType type) const;
    int get_lvl(EUnitType type) const;
    void get_units(CArmy * army, int count, EUnitType type);
};


#endif //GAME_BASEDECORATOR_H
