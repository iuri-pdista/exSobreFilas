#include <stdlib.h>
#include <stdio.h>

Fila* cria() {
	Fila* novaFila = (Fila*) malloc( sizeof(Fila) );
	(*novaFila).ini = (No*) malloc( sizeof(No) );
	(*(*novaFila).ini).senha = 1;
	(*novaFila).fim = (*novaFila).ini;
	return novaFila;
}

int conta ( Fila* f ) {
	int count = 0;
	for ( No* nodePtr = (*f).ini; nodePtr != (*f).fim; nodePtr = (*nodePtr).prox ) {
		count++;
	}
	return count;
}


void imprime ( Fila* f ){
	No* nodePtr = (No*) malloc( sizeof(No));
	for ( nodePtr = (*f).ini; nodePtr != (*f).fim; nodePtr = (*nodePtr).prox ){
		printf("%d\n", (*nodePtr).senha);
	}
}

void insere ( Fila* f ){
	No* novoNo = (No*) malloc( sizeof( No ));
	int ultimaSenha = (*(*f).fim).senha;
	(*novoNo).senha = ++ultimaSenha;
	(*(*f).fim).prox = novoNo;
	(*f).fim = novoNo;
}

int retira ( Fila* f){
	No* novoPrimeiroNo = (No*) malloc( sizeof( No));
	novoPrimeiroNo = (*(*f).ini).prox;
	free ((*f).ini);
	(*f).ini = novoPrimeiroNo;
	return (*(*f).ini).senha;
}

int vazia ( Fila* f ){
	if ( &(*f).ini != &(*f).fim ) return 1;
	return 0;
} 
