#include <stdio.h>

int main(){

    int n1, n2, n3, soma;

    printf("Insira tres numeros aqui: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    soma = n1 + n2 + n3;

    printf("A soma eh: %d", soma);

    return 0;
}