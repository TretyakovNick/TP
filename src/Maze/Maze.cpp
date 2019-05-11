//
// Created by nick on 09.05.19.
//

#include "Maze.h"

Maze::Maze(int h, int w, const std::vector <std::vector <MazeCell*> > &mz) {
    height = h;
    width = w;
    maze = mz;
}

bool Maze::isCorrect(int x, int y) {
    return x >= 0 && x < height && y >= 0 && y < width;
}

Maze::Maze(int h, int w) {
    height = h;
    width = w;
    maze = std::vector<std::vector <MazeCell*> >(height, std::vector<MazeCell*>(width, nullptr));
}

void Maze::generate_random_maze(int h, int w) {
    *this = Maze(h, w);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            maze[i][j]->generate_random();
        }
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            for (int d = 0; d < MazeCell::DIRECTIONS; d++) {
                int x = dirx[d] + i, y = diry[d] + j;
                if (!isCorrect(x, y)) continue;
                maze[i][j]->set_neighbour(MazeCell::Direction(d), maze[x][y]);
            }
        }
    }
}