#ifndef GRAPHS_GRAPH_H
#define GRAPHS_GRAPH_H

#include <vector>
#include <iostream>

class Graph {
private:
    int n;
    std::vector<int> *edges;
public:
    explicit Graph(int size);

    void addEdge(int u, int v);

    std::vector<int> getNeighbourhoodOfV(int v);

    bool isEdgeInGraph(int u, int v);

    void clear();

    void clique();

    void printEdges(int i);

    void printGraph();

    int size() const;
};


#endif //GRAPHS_GRAPH_H
