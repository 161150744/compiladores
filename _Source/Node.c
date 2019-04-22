#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../_Header/Node.h"


Node * syntax_tree;

Node* create_node(int nl, Node_type t, char* lexeme,  /* Node* children */ ...)
{
    Node* new_node = (Node *)malloc(sizeof(Node));
    new_node->line_num = nl;
    new_node->type = t;
    new_node->lexeme = lexeme;
    new_node->n_child = 0;
    //printf("PAI: %s, FILHOS:", lexeme);	 
    new_node->children = NULL;
    va_list ap;
    va_start(ap, NULL);
    	Node* arg = va_arg(ap,  Node*);
	    for (;  arg != NULL;  arg = va_arg(ap, Node*)) {
		    //printf("%s ", arg->lexeme);
		    if (new_node->children == NULL)
	       		new_node->children = (Node**) malloc(sizeof(Node*));
	       	else
	       		new_node->children = (Node**) realloc(new_node->children, (new_node->n_child + 1) * sizeof(Node*));
            new_node->children[new_node->n_child] = arg;  
            new_node->n_child++;
	    }	
   	va_end(ap);
   	//printf("\n");
    return new_node;
}

int nb_of_children(Node* n)
{
	assert(n != NULL);
	return n->n_child;
}

int is_leaf(Node* n)
{
	assert(n != NULL);
	return n->n_child == 0;
}

Node* child(Node* n, int i)
{
	assert(n != NULL);
	assert((0 <= i) && ((unsigned int)i < n->n_child));
	return n->children[i];
}

int deep_free_node(Node* n)
{
	//TODO: Cant we set the original pointer to NULL?
	if(n != NULL)
	{
		//Code ...
	}
	return 0;
}

int height(Node* n)
{
	assert(n != NULL);
	int h = 0;
	if(n->n_child != 0)
	{
		//Code ...
	}
	return h + 1;
}

void uncompile(FILE* outfile, Node *n){	
	assert(n != NULL);
	int i;
	//Somente imprime o lexema dos "nos folha"
	if(is_leaf(n)) {
		printf("%d %d %s \n", n->line_num, n->type, n->lexeme);
	}
    //Faz a busca em profundidade a esquerda
	if(n != NULL) {
		for (i = 0; i < n->n_child; i++) {
			uncompile(outfile, n->children[i]);
		    //printf("\t%s \n", n->lexeme);
			//printf("\tNum filhos %d\n", n->n_child);
		}
	}
}