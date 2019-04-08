//
// Created by nick on 28.03.19.
//

#ifndef GAME_MAZECELL_H
#define GAME_MAZECELL_H

struct MazeCell {
public:

    enum ECellType {
        wall, factory,
        boss_room, empty
    };

private:
    ECellType type;
};

#endif //GAME_MAZECELL_H
