#include "Node.hpp"

using namespace std;

Node::Node(){}

Node::Node(int numLine, string lexeme, Node_type type, void *attribute){
    this->numLine=numLine;
    this->lexeme=lexeme;
    this->type=type;
    this->attribute=attribute;
}

Node::~Node(){
    this->children.clear();
    delete this->attribute;
}

Node* Node::atChildren(int at){
    return this->children.at(at);
}

void Node::adChildren(Node *newChildren){
    this->children.push_back(newChildren);
}