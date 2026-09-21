#include <stdio.h>

float volume(float raio){
    float v;
    v = (4*(raio*raio*raio)*3.141592/3);
    return v;
}

int main(){
    float x;

    printf("Insira o valor do raio da esfera: ");
    scanf("%f", &x);
    printf("O volume de uma esfera de raio %.2f cm eh igual a %.2f cm cubicos", x, volume(x));

    return 0;
}