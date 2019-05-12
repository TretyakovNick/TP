#include <iostream>
#include "src/Game.h"
#include "src/Commands/MazeCommands/MazeCommands.h"
#include "src/Commands/Command.h"
#include "src/Commands/ParseKey.h"

int main() {
    initscr();
    noecho();
    halfdelay(1);
    Game *game = new Game();
    Command *c = new MazeCreation(game);
    c->execute();
    Command *print = new MazePrint(game);
    print->execute();
    for (int i = 0; i < 1000; i++) {
        Command *move = new ParseKey(game);
        move->execute();
        if (game->maze->get_cell(game->posx, game->posy)->type == MazeCell::ECellType::boss_room) {
            endwin();
            std::cout << "You win!\n";
            return 0;
        }
        Command *print = new MazePrint(game);
        print->execute();
        refresh();
    }
    addstr("Out of turns!\n");
    endwin();
    return 0;
}

