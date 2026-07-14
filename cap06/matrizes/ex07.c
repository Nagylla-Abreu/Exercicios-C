#include <stdio.h>

int main(){

    int matriz[3][3];
    int i, j, soma=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Insira o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("A soma dos valores da diagonal secundaria da matriz eh: %d\n", soma);

    return 0;
}