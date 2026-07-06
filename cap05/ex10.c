#include <stdio.h>

int main(){

    int i, valor;
    int soma = 0;
    float media;

    for(i=0;i<10;){
        scanf("%d", &valor);

        if(valor>=0){
            soma = soma + valor;
            i++;
        }
    }

    media = soma / 10.0;

    printf("A media eh: %.2f", media);

    return 0;
}