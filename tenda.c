/*

Otto Jacometo 19143
Iuri Corrêa de Salles Barbosa 19128

*/
#include <stdio.h>
#include "tenda.h"

Fila* cria(void){
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini=NULL;
    f->fim=NULL;
    return f;
}
void insere (Fila* f){
    No* s=(No*)malloc(sizeof(No));
    if(f->ini!=NULL){
        s->senha = f->fim->senha + 1;
        s->prox = NULL;
        f->fim->prox = s;
        f->fim = s;

    }else{
        s->senha=1;
        s->prox=NULL;
        f->ini=s;
        f->fim=s;
    }


}
int retira (Fila* f){
    int senhaRetirada;
    if(!vazia(f)){
        No* n= f->ini;
        senhaRetirada=f->ini->senha;
        f->ini=f->ini->prox;
        free(n);
        return senhaRetirada;
    }
    else{
        return 0;
    }
}
int vazia (Fila* f){
    return (f->ini==NULL);
}
void libera (Fila* f){
    No* liberarNo = f->ini;
    while(liberarNo!=NULL)
    {
       No* p = liberarNo->prox;
       free(liberarNo);
       liberarNo = p;
    }
    free(f);
}

int conta(Fila *f){
    Fila * aux;
    int cont=0;
    for(aux=f->ini; aux!=NULL; aux=aux->fim){
        cont++;
    }
    return cont;
}

void clear(void){
    system("cls");
}

void imprime (Fila* f)
{
    No* p;
    for(p=f->ini; p!=NULL; p=p->prox)
        printf("%d\n",p->senha);
}


