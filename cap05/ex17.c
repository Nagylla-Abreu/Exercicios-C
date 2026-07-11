#include <stdio.h>

int main(){

    int i, j, valor, soma;

    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &valor);

    for(i=1;i<=valor;i++){
        for(j=1;j<i;j++){
            soma = i + j;
            printf("%d ", soma);
        }
    }

    return 0;
}