#include"../_Header/Node.hpp"

using namespace std;

Node::Node(){}

Node::Node(int nl, Node_type t, std::string lexeme,  /* Node* children */ ...){
    this->line_num=nl;
    this->type=t;
    this->lexeme=lexeme;
    va_list ap;
    va_start(ap, NULL);
        Node* arg=va_arg(ap, Node*);
        for(; arg!=NULL; arg=va_arg(ap, Node*)){
            this->children.push_back(arg);
        }
    va_end(ap);
}

Node::~Node(){
    for(int i=0; i<this->nb_of_children(); i++){
        Node *aux;
        aux=this->children.back();
        this->children.pop_back();
        delete aux;
    }
}

bool Node::is_leaf(){
    return this->nb_of_children()==0;
}

int Node::nb_of_children(){
    return this->children.size();
}

Node* Node::at_children(int at){
    assert((0<=at)&&((unsigned int)at<this->nb_of_children()));
    return this->children.at(at);
}

void Node::ad_children(Node *new_children){
    this->children.push_back(new_children);
}

void Node::del_children(int index){
    this->children.erase(this->children.begin()+index);
}

string Node::get_lexeme(){
    return this->lexeme;
}