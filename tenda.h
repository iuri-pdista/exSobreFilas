typedef struct no {
    int senha;
    struct no* prox;
} No;

typedef struct fila {
    No* ini;
    No* fim;
} Fila;

Fila* cria (void);
void insere (Fila* f);
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
void imprime (Fila* f);
void clear (void);
int conta(Fila *f);
