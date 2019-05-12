//
// Created by nick on 11.05.19.
//

#include <ncurses.h>
#include "Game.h"

void Game::move(MazeCell::Direction d) {
    save_state();
    MazeCell *state = maze->get_cell(posx, posy);
    if (!state->get_neighbour(d)) {
        throw GoingToWall{};
    }
    posx += dirx[d];
    posy += diry[d];
    known_relax();
}

void Game::known_relax() {
    known[posx][posy] = true;
    for (int d = 0; d < MazeCell::DIRECTIONS; d++) {
        if (maze->get_cell(posx, posy)->get_neighbour(MazeCell::Direction(d))) {
            int x = posx + dirx[d], y = posy + diry[d];
            known[x][y] = true;
        }
    }
}

void Game::save_state() {
    previous_state_copy = new Game(maze, posx, posy, army, base_factory, start_time, last_time, last_replenish);
}

void Game::rollback() {
    if (!previous_state_copy) {
        throw NoPreviousSave{};
    }
    maze = previous_state_copy->maze;
    posx = previous_state_copy->posx;
    posy = previous_state_copy->posy;
    army = previous_state_copy->army;
    last_time = previous_state_copy->last_time;
    start_time = previous_state_copy->start_time;
    last_replenish = previous_state_copy->last_replenish;
    base_factory = previous_state_copy->base_factory;
    previous_state_copy = previous_state_copy->previous_state_copy;
}

Game& Game::operator=(const Game &game) {
    if (&game == this) {
        return *this;
    }
    maze = game.maze;
    posx = game.posx;
    posy = game.posy;
    army = new CArmy(*game.army);
    last_time = game.last_time;
    start_time = game.start_time;
    base_factory = new BaseDecorator(game.base_factory);
    previous_state_copy = game.previous_state_copy;
    last_replenish = game.last_replenish;
}

void Game::update_time(time_t now) {
    time_t seconds = now - last_replenish;
    int minutes = round(seconds) / 10;
    last_time = now;
    if (minutes > 0) {
        base_factory->replenish(minutes);
        last_replenish = now;
    }
}

int Game::get_time() const {
    time_t seconds = last_time - start_time;
    return seconds;
}