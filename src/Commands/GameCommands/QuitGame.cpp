//
// Created by nick on 12.05.19.
//

#include "QuitGame.h"

void QuitGame::execute() {
    clear();
    addstr("Are you sure? (y/n)");
    while (true) {
        int key = getch();
        if (key == int('y')) {
            endwin();
            exit(0);
        } else if (key == int('n')) {
            break;
        }
    }
}