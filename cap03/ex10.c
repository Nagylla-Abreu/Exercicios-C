#include <stdio.h>

int main(){

    float importancia = 780000;
    float g1, g2, g3;

    g1 = importancia * 0.46;
    g2 = importancia * 0.32;
    g3 = importancia * 0.22; // ou     g3 = importancia - g1 - g2;

    printf("O ganhador 1 vai receber R$%.2f\nO ganhador 2 vai receber R$%.2f\nO ganhador 3 vai ganhar R$%.2f", g1, g2, g3);

    return 0;
}