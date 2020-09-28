#include <stdio.h>
#include <stdlib.h>
#include "tenda.h"

/* M�dulo para ilustrar utiliza��o da fila */
int main (void)
{
    Fila * fbm = cria();
    Fila * fbe = cria();
    int tfbm=0, tfbe=0;
    int op;
    char ch;

    do
    {
        system("cls");
        printf("1. Obter bencao material\n");
        printf("2. Obter bencao espiritual\n");
        printf("3. Conceder bencao material\n");
        printf("4. Conceder bencao espiritual\n");
        printf("5. Mostrar lista de bencao material\n");
        printf("6. Mostrar lista de bencao espiritual\n");
        printf("0. Fechar a tenda dos milagres");
        printf("\n\n");
        tfbm=conta(fbm);
        tfbe=conta(fbe);
        printf("Pessoas na fila de bencaos materiais: %d\n",tfbm);
        printf("Pessoas na fila de bencaos espirituais: %d \n", tfbe);
        printf("\n\n\n");
        printf("Escolha uma opcao : ");
        fflush(stdin);
        scanf("%d",&op);
        clear();
        if(op>=0 && op<=6)
        {
            switch(op)
            {
            case 1:
                insere(fbm);
                printf("M%d",fbm->fim->senha);
                break;
            case 2:
                insere(fbe);
                printf("E%d",fbe->fim->senha);
                break;
            case 3:
				printf("M%d",retira(fbm));
                break;
            case 4:
				printf("E%d",retira(fbe));
                break;
            case 5:
                imprime(fbm);
                break;
            case 6:
                imprime(fbe);
                break;
            case 0:
                if(tfbm || tfbe){
                    printf("Ainda tem 'fiel' a ser atendido!\nDeseja fechar a atenda assim mesmo (S/N)? ");
                    scanf(" %c",&ch);
                    if(ch=='S' || ch=='s'){
                        exit(0);
                    }
                }else{
                    exit(0);
                }
            }
        }
        else
        {
            printf("\nOpcao invalida!!!\n");
        }

        printf("\nPressione qq. tecla para continuar...");
        getch();
    }while(1);



    return 0;
}
