#include <stdio.h>

int main(){

    int i, valor;
    int w = 1;
    float e = 0, conta;

    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &valor);

    for(i=1;i<=valor;i++){
        w = w * i;
        conta = (float)1.0/w;    
        e = e + conta;
    }

    printf("%.2f", e);

    return 0;
}