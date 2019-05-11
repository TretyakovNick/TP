//
// Created by nick on 09.05.19.
//

#ifndef GAME_MAZE_H
#define GAME_MAZE_H

#include "MazeCell.h"

class Maze {
private:
    int height, width;
    std::vector <std::vector <MazeCell*> > maze;
    const std::vector <int> dirx = {-1, 1, 0, 0};
    const std::vector <int> diry = {0, 0, -1, 1};
    bool isCorrect(int x, int y);
public:
    Maze(int height, int width, const std::vector <std::vector <MazeCell*> > &maze);
    Maze(int height, int width);
    void generate_random_maze(int height, int width);
};

#endif //GAME_MAZE_H
