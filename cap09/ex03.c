#include <stdio.h>

float temp(float f){
    float c;
        c = (f-32.0)*5.0/9.0;
    return c;
}

int main(){
    float x;
    printf("Insira uma temperatura em Fahrenheit: ");
    scanf("%f", &x);
    printf("A temperatura de %.2f graus F eh igual a %.2f graus C.\n", x, temp(x));
    return 0;
}

