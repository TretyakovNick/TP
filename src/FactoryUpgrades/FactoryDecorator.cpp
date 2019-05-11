//
// Created by nick on 11.05.19.
//

#include "FactoryDecorator.h"

FactoryDecorator::FactoryDecorator(CArmyFactory *f) {
    factory = f;
}

RangeUnit* FactoryDecorator::create_range() {
    return factory->create_range();
}

MeleeUnit* FactoryDecorator::create_melee() {
    return factory->create_melee();
}

MageUnit* FactoryDecorator::create_mage() {
    return factory->create_mage();
}
