#include <stdio.h>

int main(){

    int i, valor, conta;
    int primo = 1;

    printf("Insira um numero inteiro positivo maior que 1: ");
    scanf("%d", &valor);

    if(valor<=1){
        printf("Numero invalido!");
    }

    for(i=2;i<valor;i++){
        if(valor % i == 0){
            primo = 0;
            break;
        }
    }

    if(primo){
        printf("O numero %d eh primo", valor);
    }else{
        printf("O numero %d nao eh primo", valor);
    }

    return 0;
}