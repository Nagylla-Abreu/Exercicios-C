#include <stdio.h>

int main(){

    int matriz[5][5];
    int i, j, soma=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Insira os valores na posicao matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A matriz eh:\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i<j){
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("A soma dos valores acima da diagonal principal eh: %d", soma);

    return 0;
}