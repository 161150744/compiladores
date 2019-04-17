#ifndef TREE_HPP
#define TREE_HPP

#include "Node.hpp"

class Node;

class Tree{
private:
    Node* root;
    int tam;
public:
    Tree();
    ~Tree();
};

#endif