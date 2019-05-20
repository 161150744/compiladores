#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "../_Header/lista.h"

int numList=1;

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
	if(strcmp (i.op, "PRINTF")==0 && i.res==NULL){
		fprintf(out, "PRINTF %s \n", i.res); 
	}else if(strcmp(i.op, "PRINTF")==0 && i.res!=NULL){
		fprintf(out, "PRINTF %s %s \n", i.arg1, i.res); 
	}else if(strcmp(i.op, "ATT")==0){
		fprintf(out, "%s := %s \n", i.res, i.arg1);
	}else if(strcmp (i.op, "INC")==0){
		fprintf(out, "%s := %s + 1\n", i.res, i.res);
	}else if(strcmp(i.op, "DEC")==0){
		fprintf(out, "%s := %s - 1\n", i.res, i.res);
	}else{
		fprintf(out, "%s := %s %s %s \n", i.res, i.arg1, i.op, i.arg2);
	}
}

void print_tac(FILE* out, struct node_tac * code){
	fprintf(out, "%d\n%d\n", vars_size, temps_size);
	struct node_tac * aux;
	aux=code;
	if(aux==NULL){
		printf(":(\n");
	}
	while(aux!=NULL){
		fprintf(out, "%03d:   ", aux->number-1);
		aux=aux->next;
	}
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
	if(*code_a=NULL){
		*code_a=*code_b;
	}
	else if(*code_b!=NULL){
		struct node_tac*aux=*code_a;
		for(; aux->next!=NULL; aux=aux->next);
		aux->next=*code_b;
	}
}