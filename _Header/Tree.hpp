#ifndef TREE_HPP
#define TREE_HPP

#include"Node.hpp"

#include<stack>

class Node;

class Tree{
private:
    Node* root;
    int tam;
public:
    Tree();
    Tree(Node *root);
    ~Tree();
	static bool is_leaf(Node *n);
	static Node* child(Node *n, int i);
	int deep_free_node(Node *n);
    int height(Node *n);
    void uncompile(std::ofstream outfile, Node *n);
    std::string expressao(Node *n);
};

#endif