#include <stdio.h>

float volume(float alt, float raio){
    float v;
    v = 3.141592 * (raio*raio) * alt;
    return v;
}

int main(){
    float x, y;
    
    printf("Insira a altura do cilindro: ");
    scanf("%f", &x);
    printf("Insira o raio do cilindro: ");
    scanf("%f", &y);
    printf("O volume do cilindro de altura %.2f cm e raio %.2f cm eh igual a %.2f cm quadrados.", x, y, volume(x, y));

    return 0;
}