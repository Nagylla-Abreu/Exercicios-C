#include <stdio.h>

int main(){

    int matriz[5][5];
    int i, j, soma=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Insira o valor correspondente a posicao matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i != j && i+j != 4){
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("A soma dos valores que nao pertencem nem a diagonal principal nem a secundaria eh: %d\n", soma);

    return 0;
}