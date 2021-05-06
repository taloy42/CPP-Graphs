#include "BFS.h"

BFS_RES BFS(Graph G, int s) {
    int n = G.size();
    auto *color = new Colors[n];
    auto *d = new int[n];
    auto *pi = new int[n];

    int infinity = G.size() * 2;
    for (int u = 0; u < G.size(); ++u) {
        color[u] = WHITE;
        d[u] = infinity;
        pi[u] = NULL;
    }
    color[s] = GRAY;
    d[s] = 0;
    std::queue<int> Q;
    Q.push(s);
    while (!Q.empty()) {
        int u = Q.front();
        for (int v : G.getNeighbourhoodOfV(u)) {
            if (color[v] == WHITE) {
                color[v] = GRAY;
                d[v] = d[u] + 1;
                pi[v] = u;
                Q.push(v);
            }
        }
        Q.pop();
        color[u] = BLACK;
    }

    return {d, pi};
}