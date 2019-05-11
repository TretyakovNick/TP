//
// Created by nick on 11.05.19.
//

#ifndef GAME_FACTORYDECORATOR_H
#define GAME_FACTORYDECORATOR_H


#include <Factories/CArmyFactory.h>

class MaxLevelReached : std::exception {};
class NotEnoughUnits : std::exception {};

class FactoryDecorator : public CArmyFactory {
private:
    CArmyFactory *factory;
public:
    explicit FactoryDecorator(CArmyFactory *f);
    RangeUnit* create_range() override;
    MeleeUnit* create_melee() override;
    MageUnit* create_mage() override;
};


#endif //GAME_FACTORYDECORATOR_H
