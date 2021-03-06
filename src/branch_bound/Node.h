#ifndef INC_2_NODE_H
#define INC_2_NODE_H

#include <vector>
#include "../adjacency_matrix/AdjacencyMatrix.h"

class Node {
private:
    int id;
    shared_ptr<Node> parent;
    AdjacencyMatrix *matrix;
    int cost;
    vector<int> unvisited;
public:
    Node(int id, shared_ptr<Node> parent, AdjacencyMatrix *matrix, int cost, const vector<int> &unvisited);

    virtual ~Node();

    [[nodiscard]] int getID() const;

    [[nodiscard]] AdjacencyMatrix *getMatrix() const;

    [[nodiscard]] int getCost() const;

    [[nodiscard]] const vector<int> &getUnvisited() const;

};


#endif //INC_2_NODE_H
