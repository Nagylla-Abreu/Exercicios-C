#include <stdio.h>

int main(){

    int matriz[4][4];
    int i, j, total=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Insira o valor da posicao matriz[%d][%d]: ", i , j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]>10){
                total = total + 1;
            }
        }
    }

    printf("Ha %d valores maiores que 10.\n", total);

    return 0;
}