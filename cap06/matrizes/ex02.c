#include <stdio.h>

int main(){

    int matriz[4][4];
    int i, j, maior;
    int posi, posj;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Insira o valor na posicao matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    maior=matriz[0][0];
    posi = 0;
    posj = 0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
                posi = i;
                posj = j;
            }
        }
    }

    printf("O maior valor da matriz eh %d", maior);
    printf("Se encontra na posicao linha [%d] coluna [%d]", posi, posj);

    return 0;
}