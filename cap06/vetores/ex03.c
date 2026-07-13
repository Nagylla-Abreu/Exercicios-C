#include <stdio.h>

int main(){

    int vetor[5], i, soma = 0;
    float media;

    printf("Insira 5 valores:\n");
    for(i=0;i<5;i++){
        scanf("%d", &vetor[i]);
    }

    printf("Os valores sao:\n");
    for(i=0;i<5;i++){
        printf("%d ", vetor[i]);
    }

    for(i=0;i<5;i++){
        soma = soma + vetor[i];
    }

    media = soma / 5.0;

    printf("\nA media dos valores eh: %.2f", media);

    return 0;
}