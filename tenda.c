int conta ( Fila* f ) {
	int count = 0;
	for ( No* nodePtr = (*f).ini; nodePtr != (*f).fim; nodePtr = (*nodePtr).prox ) {
		count++;
	}
	return count;
}




