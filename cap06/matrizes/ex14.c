#include <stdio.h>

/*  Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores.  */

int main(){

    int matriz[5][5];
    int i, j, somadiag=0, somaout=0, diferenca; // somadiag = soma das diagonais  somaout = soma dos outros valores

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Insira o valor correspondente a posicao matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    } 
    
    printf("A matriz eh essa:\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j || i+j==4){
                somadiag += matriz[i][j];
            }else{
                somaout += matriz[i][j];
            }
        }
    }

    diferenca = somadiag - somaout;

    printf("A soma das diagonais principal e secundaria eh %d\n", somadiag);
    printf("A soma dos valores restantes eh %d\n", somaout);
    printf("A diferenca entre os valores eh %d\n", diferenca);

    return 0;
}