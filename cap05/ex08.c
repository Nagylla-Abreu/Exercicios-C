#include <stdio.h>

int main(){

    int valor, i;
    int soma = 0;
    float media;

    printf("Insira 10 numeros inteiros:\n");

    for(i=0;i<10;i++){
        scanf("%d", &valor);
        soma = soma + valor;
    }

    media = soma / 10;

    printf("A soma dos 10 numeros eh: %d\n", soma);
    printf("A media eh: %.2f", media);

    return 0;
}