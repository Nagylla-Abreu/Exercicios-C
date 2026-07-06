#include <stdio.h>

int main(){

    int i, valor, divisao;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Os divisores de %d sao:\n", valor);
    for(i=1;i<=valor;i++){
        divisao = valor % i;
        if(divisao==0){
            printf("%d ", i);
        }
    }


    return 0;
}