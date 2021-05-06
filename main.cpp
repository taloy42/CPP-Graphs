#include <iostream>
#include "Graph.h"
#include "BFS.h"

#define N 10

int main() {
    int mat[N][N] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    Graph g = Graph(N);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mat[i][j] == 1) {
                g.addEdge(i, j);
            }
        }
    }
    g.printGraph();
    BFS_RES res = BFS(g, 1);
    for (int i = 0; i < g.size(); ++i) {
        int cur_d = res.d[i];
        if (cur_d < N) {
            std::cout << "d[" << i << "] = " << cur_d << std::endl;
        } else {
            std::cout << "d[" << i << "] = inf" << std::endl;
        }
    }


    return 0;
}
