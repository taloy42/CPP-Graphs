#ifndef GRAPHS_BFS_H
#define GRAPHS_BFS_H

#include "Graph.h"
#include <queue>

enum Colors {
    WHITE,
    GRAY,
    BLACK
};

struct BFS_RES {
    int *d;
    int *pi;
};

BFS_RES BFS(Graph G, int s);
#endif //GRAPHS_BFS_H
