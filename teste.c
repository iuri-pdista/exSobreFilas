#include "tenda.c"
#include <stdlib.h>
#include <stdio.h>

int main() {
	Fila* fbm = cria();
	Fila * fbe = cria();
	insere( fbm );
	insere( fbm );
	insere( fbm );
	insere( fbm );
	insere( fbm );
	libera(fbm);
	printf("\nO tamanho da Lista e: %d \n",conta(fbm));
	return 0;
}
