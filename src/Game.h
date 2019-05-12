//
// Created by nick on 11.05.19.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H


#include "FactoryUpgrades/BaseDecorator.h"
#include "Factories/HumanFactory.h"
#include "Maze/Maze.h"
#include "CArmy.h"
#include <ctime>

class NoPreviousSave : std::exception {};

class Game {
public:
    time_t start_time, last_time;
    time_t last_replenish;
    Maze *maze;
    Game *previous_state_copy;
    int posx, posy;
    CArmy *army;
    BaseDecorator *base_factory;
    Game() : maze(new Maze()), posx(-1), posy(-1), known(0), army(new CArmy()), last_time(time(nullptr)) {
        base_factory = new BaseDecorator(new HumanFactory());
        start_time = last_time;
        last_replenish = last_time;
    }
    Game(Maze* maze, int posx, int posy, CArmy *army, BaseDecorator *factory, time_t start, time_t last, time_t replenish) : maze(new Maze(*maze)), posx(posx), posy(posy), army(new CArmy(*army)) {
        base_factory = new BaseDecorator(factory);
        previous_state_copy = nullptr;
        last_time = last;
        start_time = start;
        last_replenish = replenish;
    }
    Game &operator=(const Game &game);
    std::vector <std::vector <bool> > known;
    void move(MazeCell::Direction d);
    void known_relax();
    void save_state();
    void rollback();

    int get_time() const;
    void update_time(time_t now);
};



#endif //GAME_GAME_H
