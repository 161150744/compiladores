#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "../_Header/lista.h"

int numList=1;

struct node_tac *lista = NULL;

struct node_tac * table_TAC;

struct tac* create_inst_tac(const char* res, const char* arg1, const char* op, const char* arg2){
	
	struct tac *new=(struct tac*)malloc(sizeof(struct tac));
	new->res=malloc(sizeof(res));
	new->arg1=malloc(sizeof(arg1));
	new->op=malloc(sizeof(op));
	new->arg2=malloc(sizeof(arg2));
	if(new==NULL){
		printf("Allocation Error\n");
		exit(0);
	}
	if(res!=NULL) strcpy(new->res, res);
	if(arg1!=NULL) strcpy(new->arg1, arg1);
	if(arg2!=NULL) strcpy(new->arg2, arg2);
	if(op!=NULL) strcpy(new->op, op);
	return new;

}

void print_inst_tac(FILE* out, struct tac i){
	printf("\nnada aqui\n");
}

void print_tac(FILE* out, struct node_tac * code){
    struct node_tac *aux = lista;
    entry_t *aux_deslc = NULL;
    int bytesSP = vars_size, bytesRX = 0;
    char op[5], strop[5];
    
    fprintf(out, "%d\n", bytesSP);
    fprintf(out, "%d\n", bytesRX);
    aux = lista;
    while(aux != NULL){
        strcpy(op, aux->inst->op);
        //printf("OP %s\n", op);
        if(strcmp(op, "+") == 0){
            strcpy(strop, "SUM");
        }
        else if(strcmp(op, "-") == 0){
            strcpy(strop, "SUB");
        }
        else if(strcmp(op, "*") == 0){
            strcpy(strop, "MUL");
        }
        else if(strcmp(op, "/") == 0){
            strcpy(strop, "DIV");
        }
        else{
            strcpy(strop, "");
        }
        fprintf(out, "%.3d: %s := %s %s %s\n", aux->number, aux->inst->res, aux->inst->arg1, strop, aux->inst->arg2);
        aux = aux->next;
    }
    fclose(out);

}


void append_inst_tac(struct node_tac ** code, struct tac * inst){
	struct node_tac * newInst=(struct node_tac *) malloc(sizeof(struct node_tac));
	if(newInst==NULL){
		printf("Allocation Error\n");
		exit(0);
	}
	newInst->inst=inst;
	newInst->next=NULL;
	newInst->number=numList;
	numList++;
	if(*code==NULL){
		*code=newInst;
		newInst->prev=NULL;
	}
	else{
		struct node_tac * aux;
		aux=*code;
		for(aux=*code; aux->next!=NULL; aux=aux->next);
		aux->next=newInst;
		newInst->prev=aux;
	}
}


void cat_tac(struct node_tac ** code_a, struct node_tac ** code_b){
	if(*code_a==NULL){
		*code_a=*code_b;
	}
	else if(*code_b!=NULL){
		struct node_tac*aux=*code_a;
		for(; aux->next!=NULL; aux=aux->next);
		aux->next=*code_b;
	}
}