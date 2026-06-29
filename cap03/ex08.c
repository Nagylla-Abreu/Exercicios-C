#include <stdio.h>

int main(){

    float C, F;

    printf("Insira uma temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = C * (9.0/5.0) + 32.0;

    printf("A temperatura em Fahrenheit eh: %.1f", F);

    return 0;
}