#include <stdio.h>

int main(){

    float raio, area;
    float pi = 3.14159;

    printf("Insira o valor de um raio: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A area do circulo eh: %.3f", area);

    return 0;
}