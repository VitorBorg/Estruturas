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


int main(){


}

void PUSH(indexFila *index, data *dat){
    tipoFila *new;

    new = (new *) malloc(sizeof(tipoFila));
    new->info = dat;
    new->next = NULL;

    if(index->pLast != NULL)
        index->pLast->next = new;
    else{
        index->pFirst = new;
        index->pLast = new;
    }
    
    index->pLast = new;

}

int POP(indexFila *index){

    if(index->pFirst == NULL)
        return 0;

    tipoFila *new = index->pFirst;
    index->pFirst = index->pFirst->next;

    if(index->pFirst == NULL)
        index->pLast = NULL;

    free(new);
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



