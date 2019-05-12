//
// Created by nick on 09.05.19.
//

#include <iostream>
#include <ncurses.h>
#include <string>
#include "Maze.h"
#include "DSU.h"

Maze::Maze(int h, int w, const std::vector<std::vector<MazeCell *> > &mz) {
    height = h;
    width = w;
    maze = mz;
}

bool Maze::isCorrect(int x, int y) const {
    return x >= 0 && x < height && y >= 0 && y < width;
}

Maze::Maze(int h, int w) {
    height = h;
    width = w;
    maze = std::vector<std::vector<MazeCell *> >(height, std::vector<MazeCell *>(width, nullptr));
}

void Maze::generate_random_maze(int h, int w) {
    std::mt19937 gen(time(nullptr));
    height = h;
    width = w;
    DSU dsu(h * w);
    maze.resize(height, std::vector<MazeCell *>(width, nullptr));
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            maze[i][j] = new MazeCell();
        }
    }
    std::vector <int> st(h * w, 0);
    for (int i = 0; i < h * w - 1; i++) {
        while (true) {
            int v = gen() % (h * w);
            int i = v / w, j = v % w;
            int d = gen() % MazeCell::DIRECTIONS;
            if (maze[i][j]->get_neighbour(MazeCell::Direction(d))) {
                continue;
            }
            int x = dirx[d] + i, y = diry[d] + j;
            int u = x * w + y;
            if (!isCorrect(x, y) || dsu.get_root(v) == dsu.get_root(u)) continue;
            int rd = (d < 2 ? 1 - d : 5 - d);
            maze[i][j]->set_neighbour(MazeCell::Direction(d), maze[x][y]);
            maze[x][y]->set_neighbour(MazeCell::Direction(rd), maze[i][j]);
            dsu.unite(v, u);
            st[v]++;
            st[u]++;
            break;
        }
    }
    std::vector <int> leafs;
    for (int i = 1; i < h * w; i++) {
        if (st[i] == 1) {
            leafs.push_back(i);
        }
    }
    maze[0][0]->type = MazeCell::ECellType::base;

    int boss_cell = leafs[gen() % (int) leafs.size()];
    maze[boss_cell / w][boss_cell % w]->type = MazeCell::ECellType::boss_room;
}

MazeCell* Maze::get_cell(int x, int y) const {
    if (!isCorrect(x, y)) {
        throw OutOfMaze{};
    }
    return maze[x][y];
}

void Maze::print(int posx, int posy, const std::vector <std::vector <bool> > &known) {
    clear();
    std::string data = ".FBO";
    for (int i = 0; i < 2 * height + 1; i++) {
        for (int j = 0; j < 2 * width + 1; j++) {
            if (!known.size()) {
                addch(' ');
                continue;
            }
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    addch(' ');
                } else if (!i || i == 2 * height) {
                    addch('_');
                } else if (!maze[i / 2][j / 2]->get_neighbour(MazeCell::Direction::up) && (known[i / 2][j / 2] || known[i / 2 - 1][j / 2])) {
                    addch('_');
                } else {
                    addch(' ');
                }
            } else {
                if (j % 2 == 1) {
                    if (!known[i / 2][j / 2]) {
                        addch(' ');
                    } else if (i / 2 == posx && j / 2 == posy) {
                        addch('N');
                    } else {
                        addch(data[maze[i / 2][j / 2]->type]);
                    }
                } else if (!j || j == 2 * width) {
                    addch('|');
                } else if (!maze[i / 2][j / 2]->get_neighbour(MazeCell::Direction::left) && (known[i / 2][j / 2] || known[i / 2][j / 2 - 1])) {
                    addch('|');
                } else {
                    addch(' ');
                }
            }
        }
        addch('\n');
    }
}
Maze& Maze::operator=(const Maze &now) {
    if (&now == this) {
        return *this;
    }
    maze = now.maze;
    height = now.get_height();
    width = now.get_width();
}

int Maze::get_height() const {
    return height;
}

int Maze::get_width() const {
    return width;
}