#include <stdio.h>

int main(){

    float altura, raio, volume;
    float pi = 3.141592;

    printf("Insira um valor para altura: ");
    scanf("%f", &altura);
    printf("Insira um valor para o raio: ");
    scanf("%f", &raio);

    volume = pi * (raio*raio) * altura;

    printf("O volume do cilindro eh: %f", volume);

    return 0;
}