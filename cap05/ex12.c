#include <stdio.h>

int main(){

    int i, valor;
    int soma = 0;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &valor);

    for(i=1;i<valor;i++){
        if(valor % i==0){
                soma = soma + i;
            }
    }

    printf("A soma dos divisores de %d (exceto ele proprio) eh igual a: %d", valor, soma);

    return 0;
}