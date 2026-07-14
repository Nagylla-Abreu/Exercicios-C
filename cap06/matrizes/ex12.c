#include <stdio.h>

int main(){

    int matriz[6][6];
    int i, j, soma=0;

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("Insira o valor correspondente a posicao matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(i>j){
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("A soma dos valores abaixo da diagonal principal eh: %d\n", soma);

    return 0;
}