//
// Created by nick on 28.03.19.
//

#include "MazeCell.h"

MazeCell *MazeCell::move(MazeCell::Direction d) {
    if (!neighbours[d]) {
        throw GoingToWall{};
    }
    return neighbours[d];
}

MazeCell::MazeCell() {
    type = empty;
    for (int i = 0; i < DIRECTIONS; i++) {
        neighbours[i] = nullptr;
    }
}

void MazeCell::set_neighbour(MazeCell::Direction d, MazeCell *neighbour) {
    neighbours[d] = neighbour;
}

MazeCell *MazeCell::get_neighbour(MazeCell::Direction d) const {
    return neighbours[d];
}