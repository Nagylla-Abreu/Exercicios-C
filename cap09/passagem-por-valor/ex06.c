#include <stdio.h>

float imc(float peso, float alt){
    float x;
        x = peso/(alt*alt);
    return x;
}

int main(){
    float p, a;

    printf("Insira seu peso em kg: ");
    scanf("%f", &p);
    printf("Insira sua altura em m: ");
    scanf("%f", &a);

    printf("Seu IMC eh igual a %.2f", imc(p, a));

    return 0;
}