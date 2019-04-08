//
// Created by nick on 28.03.19.
//
#include <iostream>
#include <gtest/gtest.h>
#include <Factories/ElfFactory.h>
#include <Factories/GoblinFactory.h>
#include <Factories/HumanFactory.h>
#include <Factories/OrcFactory.h>
#include <Boss/Boss.h>

TEST(ElfFactory, Melee) {
    ElfFactory factory;
    Unit *unit = factory.create_melee();
    EXPECT_EQ(unit->get_full_hp(), 100);
    EXPECT_EQ(unit->get_damage(), 20);
    EXPECT_EQ(unit->get_full_mana(), 0);
    EXPECT_EQ(unit->get_attack_range(), 1);
}

TEST(ElfFactory, Range) {
    ElfFactory factory;
    Unit *unit = factory.create_range();
    EXPECT_EQ(unit->get_full_hp(), 40);
    EXPECT_EQ(unit->get_damage(), 100);
    EXPECT_EQ(unit->get_full_mana(), 0);
    EXPECT_EQ(unit->get_attack_range(), 3);
}

TEST(GoblinFactory, Mage) {
    GoblinFactory factory;
    Unit *unit = factory.create_mage();
    EXPECT_EQ(unit->get_full_hp(), 130);
    EXPECT_EQ(unit->get_damage(), 10);
    EXPECT_EQ(unit->get_full_mana(), 500);
    EXPECT_EQ(unit->get_attack_range(), 10);
}


TEST(GoblinFactory, Melee) {
    GoblinFactory factory;
    Unit *unit = factory.create_melee();
    EXPECT_EQ(unit->get_full_hp(), 10);
    EXPECT_EQ(unit->get_damage(), 100);
    EXPECT_EQ(unit->get_full_mana(), 0);
    EXPECT_EQ(unit->get_attack_range(), 1);
}

TEST(HumanFactory, Melee) {
    HumanFactory factory;
    Unit *unit = factory.create_melee();
    EXPECT_EQ(unit->get_full_hp(), 80);
    EXPECT_EQ(unit->get_damage(), 40);
    EXPECT_EQ(unit->get_full_mana(), 30);
    EXPECT_EQ(unit->get_attack_range(), 1);
}


TEST(HumanFactory, Mage) {
    HumanFactory factory;
    Unit *unit = factory.create_mage();
    EXPECT_EQ(unit->get_full_hp(), 60);
    EXPECT_EQ(unit->get_damage(), 10);
    EXPECT_EQ(unit->get_full_mana(), 80);
    EXPECT_EQ(unit->get_attack_range(), 3);
}


TEST(HumanFactory, Range) {
    HumanFactory factory;
    Unit *unit = factory.create_range();
    EXPECT_EQ(unit->get_full_hp(), 70);
    EXPECT_EQ(unit->get_damage(), 50);
    EXPECT_EQ(unit->get_full_mana(), 0);
    EXPECT_EQ(unit->get_attack_range(), 5);
}

TEST(OrcFactory, Melee) {
    OrcFactory factory;
    Unit *unit = factory.create_melee();
    EXPECT_EQ(unit->get_full_hp(), 150);
    EXPECT_EQ(unit->get_damage(), 30);
    EXPECT_EQ(unit->get_full_mana(), 0);
    EXPECT_EQ(unit->get_attack_range(), 1);
}

TEST(OrcFactory, Range) {
    OrcFactory factory;
    Unit *unit = factory.create_range();
    EXPECT_EQ(unit->get_full_hp(), 50);
    EXPECT_EQ(unit->get_damage(), 40);
    EXPECT_EQ(unit->get_full_mana(), 0);
    EXPECT_EQ(unit->get_attack_range(), 3);
}

TEST(Boss, instance) {
    Boss *boss = Boss::instance();
    EXPECT_EQ(Boss::instance(), boss);
    EXPECT_NE(boss, nullptr);
}

