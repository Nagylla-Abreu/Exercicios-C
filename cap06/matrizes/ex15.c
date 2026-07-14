#include <stdio.h>


int main(){

    int matrizA[5][5];
    int matrizB[5][5];
    int i, j, calc;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Insira um valor correspondente a posicao matrizA[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("A matriz A eh:\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matrizB[i][j] = matrizA[i][j] * matrizA[i][j];
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}