//
// Created by nick on 27.03.19.
//

#ifndef GAME_UNIT_H
#define GAME_UNIT_H

#include "../Spells/Spell.h"
#include <vector>

class Unit {
private:
    int full_hp, now_hp;
    int damage;
    int full_mana, now_mana;
    int attack_range;
    std::vector <Spell*> spells;
public:
    void set_hp(int hp);
    void set_damage(int dmg);
    void set_mana(int mana);
    void set_attack_range(int range);
    Unit() = default;
    virtual ~Unit() = default;
    int get_full_hp() const;
    int get_now_hp() const;
    int get_damage() const;
    int get_full_mana() const;
    int get_now_mana() const;
    int get_attack_range() const;
};

class RangeUnit : public Unit {};

class MeleeUnit : public Unit {};

class MageUnit : public Unit {};

#endif //GAME_UNIT_H
