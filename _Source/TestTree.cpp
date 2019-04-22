#include"../_Header/TestTree.hpp"

using namespace std;

int main(int argc, char **argv){
    Tree *tree=new Tree(new Node(1, AND, "A", new Node(1, AND, "B", NULL)));
    cout<<tree->child(tree->get_root(), 0)->get_lexeme()<<endl;
    cout<<Tree::expressao(tree->get_root())<<endl;
    delete tree;
    return 0;
}