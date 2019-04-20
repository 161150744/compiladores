#include"../_Header/Tree.hpp"

using namespace std;

Tree::Tree(){}

Tree::Tree(Node *root){
    this->root=root;
}
Tree::~Tree(){
    delete this->root;
}
bool Tree::is_leaf(Node *n){
    assert(n!=NULL);
    return n->is_leaf();
}

Node* Tree::child(Node *n, int i){
    assert(n!=NULL);
    return n->at_children(i);
}

int Tree::deep_free_node(Node *n){
    Node *father=NULL;
    stack<Node*> depth_first;
    depth_first.push(this->root);
    while(!depth_first.empty()){
        Node *aux=depth_first.top();
        depth_first.pop();
        if(aux==n){
            if(!depth_first.empty()){
                father=depth_first.top();
            }
        }
        for(int i=0; i<aux->nb_of_children(); i++){
            depth_first.push(aux->at_children(i));
        }
    }
    if(father==NULL){
        delete n;
    }
    else{
        int num_node=0;
        for(int i=0; i<n->nb_of_children(); i++){
            if(n->at_children(i)==n){
                num_node=i;
            }
        }
        father->del_children(num_node);
    }
}

int Tree::height(Node *n){
    assert(n!=NULL);
    int h=0;
    if(n->nb_of_children()!=0){
        //TODO
    }
    return h+1;
}

void Tree::uncompile(ofstream outfile, Node *n){
    assert(n!=NULL);
    stack<Node*> depth_first;
    depth_first.push(n);
    while(!depth_first.empty()){
        Node *aux=depth_first.top();
        depth_first.pop();
        if(this->is_leaf(aux)){
            outfile<<aux->get_lexeme()<<endl;
        }
        for(int i=0; i<aux->nb_of_children(); i++){
            depth_first.push(aux->at_children(i));
        }
    }
}

std::string Tree::expressao(Node *n){
    assert(n!=NULL);
    string lexeme="";
    stack<Node*> depth_first;
    depth_first.push(n);
    while(!depth_first.empty()){
        Node *aux=depth_first.top();
        depth_first.pop();
        if(this->is_leaf(aux)){
            lexeme+=aux->get_lexeme();
        }
        for(int i=0; i<aux->nb_of_children(); i++){
            depth_first.push(aux->at_children(i));
        }
    }
    return lexeme;
}