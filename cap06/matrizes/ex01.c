#include <stdio.h>

int main(){
    
    int matriz[3][3];
    int i, j, menor;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

    menor=matriz[0][0];
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(matriz[i][j]<menor){
                    menor=matriz[i][j];
            }
        }
    }

    printf("O menor valor eh %d", menor);

}