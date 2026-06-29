#include <stdio.h>

int main(){

    float K, M;

    printf("Insira um numero em km/h: ");
    scanf("%f", &K);

    M = K / 3.6;

    printf("A velocidade em m/s eh: %.2f m/s", M);

    return 0;
}