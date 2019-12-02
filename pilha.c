#include <stdio.h>
#include <stdlib.h>

//#define NULL ((void *) 0)
const int MAX= 10;
typedef struct{
    int id;
} data;

typedef struct{
    data elementos[MAX];
    int topo;
    int base;
    //struct tipoFila *next;
} tipoPilha;

int main(){


}

void CLEAR(tipoPilha *pilha){
    pilha->base = 0;
    pilha->topo = 0;
}

void RESET(tipoPilha *pilha){
    pilha->base = 0;
    pilha->topo = 0;
    //pilha->elementos = NULL;
}

int EMPTY(tipoPilha *pilha){
    return pilha->topo == 0;
}

int FULL(tipoPilha *pilha){
    return pilha->topo = MAX;
}

int PUSH(tipoPilha *pilha, data *dat){
    if(FULL(pilha))
        return 0;
    
    pilha->elementos[pilha->topo] = *dat;
    pilha->topo++;

    return 1;
}

int POP(tipoPilha *pilha){
    if(!FULL(pilha)){
        return 0;}

        pilha->topo--;
        return 1;
}



