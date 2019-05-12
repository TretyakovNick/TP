//
// Created by nick on 27.03.19.
//

#ifndef GAME_UNIT_H
#define GAME_UNIT_H

#include <vector>
#include <exception>
#include <cassert>
#include <string>

enum EUnitType {
    none, melee,
    range, mage
};

std::string EUnitTypeToString(EUnitType type);

class Unit {
public:
    int full_hp, now_hp;
    int damage;
    int full_mana, now_mana;
    int attack_range;
public:
    void set_hp(int hp);
    void set_damage(int dmg);
    void set_mana(int mana);
    void set_attack_range(int range);

    Unit();
    Unit(const Unit &a) : full_hp(a.full_hp), now_hp(a.now_hp), damage(a.damage), full_mana(a.full_mana), now_mana(a.now_mana), attack_range(a.attack_range) {}
    virtual ~Unit() = default;
    virtual Unit* get_composite();
    virtual void add_unit(Unit *unit);

    int get_full_hp() const;
    int get_now_hp() const;
    int get_damage() const;
    int get_full_mana() const;
    int get_now_mana() const;
    int get_attack_range() const;
    virtual int get_count() const {
        return 1;
    }
};

class RangeUnit : public Unit {};

class MeleeUnit : public Unit {};

class MageUnit : public Unit {};

#endif //GAME_UNIT_H
