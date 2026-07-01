#include <stdio.h>

int main(){

    int valor, i;
    int soma = 0;

    printf("Digite 10 valores:\n");

    for(i=0;i<10;i++){
        scanf("%d", &valor);
        soma = soma + valor;
    }

    printf("%d", soma);

    return 0;
}