//
// Created by nick on 11.05.19.
//

#ifndef GAME_DSU_H
#define GAME_DSU_H

#include <vector>

class DSU {
private:
    int n;
    std::vector <int> p, r;
public:
    DSU(int n) : n(n), p(n, 0), r(n, 0) {
        for (int i = 0; i < n; i++) {
            p[i] = i;
        }
    }
    int get_root(int v);
    void unite(int v, int u);
};


#endif //GAME_DSU_H
