#include <stdio.h>
#include <stdlib.h>

//#define NULL ((void *) 0)

typedef struct{
    int id;
} data;

typedef struct{
    data info;
    struct tipoFila *next;
} tipoFila;

typedef struct{
    tipoFila *pFirst;
    tipoFila *pLast;
} indexFila;

void Clear(struct tipoFila *pointer);

int main(){


}

void PUSH(indexFila *index, data *dat){
    tipoFila *nodo;
    nodo = (tipoFila *) malloc(sizeof(tipoFila));
    nodo->info = *dat;
    nodo->next = NULL;

    if(index->pLast != NULL)
        index->pLast = nodo;
    else
        index->pFirst = nodo;
}

int POP(indexFila *index, tipoFila *pointer){

    if(index->pFirst == NULL)
        return 0;

    return 1;
}

void 

indexFila *RESET(indexFila *pOldFila){

    if(pOldFila){
       // Clear(pOldFila->pFirst);
    }

    indexFila *pFila;

    pFila = (indexFila *) malloc(sizeof(indexFila));
    pFila->pFirst = NULL;
    pFila->pLast = NULL;

    return pFila;
}
/*
void Clear(struct tipoFila *pointer){
    if(pointer->next != NULL)
        Clear(pointer->next);

    free(pointer);
}
*/



