//
// Created by nick on 09.05.19.
//

#ifndef GAME_MAZE_H
#define GAME_MAZE_H

#include "MazeCell.h"

class OutOfMaze : std::exception{};

const std::vector <int> dirx = {-1, 1, 0, 0};
const std::vector <int> diry = {0, 0, -1, 1};

class Maze {
private:
    int height, width;
    std::vector <std::vector <MazeCell*> > maze;
    bool isCorrect(int x, int y) const;
public:
    int get_height() const;
    int get_width() const;
    Maze() : height(0), width(0), maze(0) {}
    Maze(int height, int width, const std::vector <std::vector <MazeCell*> > &maze);
    Maze(const std::vector <std::vector <MazeCell*> > &maze) : Maze(maze.size(), (maze.size() ? maze[0].size() : 0), maze) {}
    Maze& operator=(const Maze &maze);
    Maze(int height, int width);
    void generate_random_maze(int height, int width);
    MazeCell *get_cell(int x, int y) const;
    void print(int posx = -1, int posy = -1, const std::vector <std::vector <bool> > &known = std::vector <std::vector <bool> >(0));
};

#endif //GAME_MAZE_H
