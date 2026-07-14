#include <stdio.h>

int main(){

    int matriz[3][3];
    int vetor[3]={0, 0, 0};
    int i, j;

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
            vetor[j]=vetor[j]+matriz[i][j];
        }
    }

    printf("A soma das colunas da matriz eh:\n");
    
    for(i=0;i<3;i++){
            printf("%d ", vetor[i]);        
    }

    return 0;
}