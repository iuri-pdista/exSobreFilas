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

