//
// Created by nick on 28.03.19.
//

#ifndef GAME_MAZECELL_H
#define GAME_MAZECELL_H

#include <vector>
#include <exception>
#include <random>
#include <time.h>

class GoingToWall : std::exception {};

class MazeCell {
public:
    const static int TYPES_COUNT = 4;
    const static int DIRECTIONS = 4;
    enum ECellType {
        empty, factory, base,
        boss_room
    };
    enum Direction {
        up, down,
        left, right
    };
    MazeCell *move(Direction d);
    void set_neighbour(Direction d, MazeCell *neighbour);
    MazeCell *get_neighbour(Direction d) const;
    MazeCell();
    ECellType type;
private:
    MazeCell *neighbours[DIRECTIONS];
};

#endif //GAME_MAZECELL_H
