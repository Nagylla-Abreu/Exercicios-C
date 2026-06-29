#include <stdio.h>
#include <math.h>

int main(){

    float a, b, h;

    printf("Insira um valor para A: ");
    scanf("%f", &a);
    printf("Insira um valor para B: ");
    scanf("%f", &b);

    h = sqrt((a*a)+(b*b));

    printf("O valor da hipotenusa eh: %.1f", h);

    return 0;
}