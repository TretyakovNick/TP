//
// Created by nick on 11.05.19.
//

#include "DSU.h"

int DSU::get_root(int v) {
    return (v == p[v] ? v : get_root(p[v]));
}

void DSU::unite(int v, int u) {
    v = get_root(v);
    u = get_root(u);
    if (v == u) return;
    if (r[v] == r[u]) r[u]++;
    if (r[v] > r[u]) std::swap(v, u);
    p[v] = u;
}