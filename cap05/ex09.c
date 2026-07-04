#include <stdio.h>

int main(){

    int i, valor, menor, maior;

    scanf("%d", &valor);

    menor = valor;
    maior = valor;

    for(i=1;i<10;i++){
        scanf("%d ", &valor);

        if(valor<menor){
            menor = valor;
        }

        if(valor>maior){
            maior = valor;
        }

    }

    printf("%d\n", menor);
    printf("%d\n", maior);

    return 0;
}