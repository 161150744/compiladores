#ifndef NODE_HPP
#define NODE_HPP

#include<string>
#include<vector>

typedef int Node_type;

class Node{
private:
    int numLine;
    std::string lexeme;
    Node_type type;
    void *attribute;
    std::vector<Node*> children;
    unsigned int numChildren;
public:
    Node();
    Node(int numLine, std::string lexeme, Node_type type, void *attribute);
    ~Node();
    Node* atChildren(int at);
    void adChildren(Node *newChildren);
};

#endif