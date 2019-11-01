#include <stdio.h>
#include <stdlib.h>
#define NULL 0

typedef struct{
    int valor;
} info;

typedef struct{
    info data;
    struct tipoFila *pnext;
} tipoFila;

typedef struct{
    tipoFila pfirst;
    tipoFila pLast;
} SFila;


int main(){

    return 0;
}


SFila *Reset(SFila *old){

    if(old){
       //CLEAR 
    }

    SFila *fila;

    fila = (SFila*) malloc(sizeof(SFila));
   // fila->pfirst = NULL;
   // fila->pLast = NULL;

   return fila;

}
