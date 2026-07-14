#include <stdio.h>

int main(){

    int matriz[3][3];
    int i, j, soma0=0, soma1=0, soma2=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Insira o valor da posicao matriz[%d][%d]: ", i, j);
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
            if(j==0){
                soma0 = soma0 + matriz[i][j];
            }
            if(j==1){
                soma1 = soma1 + matriz[i][j];
            }
            if(j==2){
                soma2 = soma2 + matriz[i][j];
            }
        }
    }

    printf("A soma da coluna 1 eh: %d\n", soma0);
    printf("A soma da coluna 2 eh: %d\n", soma1);
    printf("A soma da coluna 3 eh: %d\n", soma2);

    return 0;
}