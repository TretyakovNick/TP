//
// Created by nick on 12.05.19.
//

#include "SlotMerge.h"

void SlotMerge::execute() {
    clear();
    addstr("Press number of slot that you want to merge to another one: \n");
    int from = getch() - '0';
    if (from < 0 || from > 9) {
        addstr("Incorrect key, press any key to continue..\n");
        int key = getch();
        return;
    }
    addstr("Press number of slot you want to be merged by first: \n");
    int to = getch() - '0';
    if (from < 0 || from > 9) {
        addstr("Incorrect key, press any key to continue..\n");
        int key = getch();
        return;
    }
    try {
        game->army->merge(from, to);
    } catch (std::exception &e) {
        addstr("Incorrect merging, press any key to continue..\n");
        int key = getch();
        return;
    }
    printw("Slot %d successfuly merged to %d. Press any key to continue...\n", from, to);
    int key = getch();
}
