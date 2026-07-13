#include <stdio.h>

int main(){

    int vetor[8], i, x, y, soma;

    for(i=0;i<8;i++){
        scanf("%d", &vetor[i]);
    }

    printf("Insira dois numeros de 0 a 7:\n");
    scanf("%d %d", &x, &y);

    soma = vetor[x] + vetor[y];

    printf("%d", soma);
    
    return 0;
}