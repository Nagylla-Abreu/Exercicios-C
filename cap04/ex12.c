#include <stdio.h>

int main(){

    int dia;

    printf("Insira um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("O dia eh Domingo.\n");
        break;
        case 2:
            printf("O dia eh Segunda.\n");
        break;
        case 3:
            printf("O dia eh Terca.\n");
        break;
        case 4:
            printf("O dia eh Quarta.\n");
        break;
        case 5:
            printf("O dia eh Quinta.\n");
        break;
        case 6:
            printf("O dia eh Sexta.\n");
        break;
        case 7:
            printf("O dia eh Sabado.\n");
        break;
        default:
            printf("Dia invalido manezao\n");
    }

    return 0;
}