#include "Graph.h"

Graph::Graph(int size) {
    this->n = size;
    this->edges = new std::vector<int>[size];
}


void Graph::addEdge(int u, int v) {
    edges[u].push_back(v);
}

std::vector<int> Graph::getNeighbourhoodOfV(int v) {
    return edges[v];
}

bool Graph::isEdgeInGraph(int u, int v) {
    return std::count(edges[u].begin(), edges[u].end(), v) > 0;
}
void Graph::clear() {
    for (int i = 0; i < n; ++i) {
        edges[i].clear();
    }
}

void Graph::clique() {
    this->clear();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                edges[i].push_back(j);
            }
        }
    }
}

void Graph::printEdges(int i) {
    std::cout << i << ": ";
    for (int u : edges[i]) {
        std::cout << u << ", ";
    }
    std::cout << "\n";
}

void Graph::printGraph() {
    for (int i = 0; i < n; ++i) {
        printEdges(i);
    }
}

int Graph::size() const {
    return n;
}

