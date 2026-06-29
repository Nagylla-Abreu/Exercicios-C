#include <stdio.h>

int main(){

    int ano, nasc, idade;

    printf("Insira o ano atual: ");
    scanf("%d", &ano);
    printf("Insira o ano em que nasceu: ");
    scanf("%d", &nasc);

    idade = ano - nasc;

    printf("Sua idade eh: %d", idade);

    return 0;
}