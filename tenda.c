int conta ( Fila* f ) {
	int count = 0;
	for ( No* nodePtr = (*f).ini; nodePtr != (*f).fim; nodePtr = (*nodePtr).prox ) {
		count++;
	}
	return count;
}


void imprime ( Fila* f ){
	for ( No* nodePtr = (*f).ini; nodePtr != (*f).fim; nodePtr = (*nodePtr).prox ){
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
	Fila* novoPrimeiroNo = (*(*f).ini).prox;
	free ((*f).ini);
	(*f).ini = novoPrimeiroNo;
	return (*(*f).ini).prox;
}


