#include <stdio.h>

int main(){

    float graus, radianos;
    float pi = 3.141592;

    printf("Insira um valor em graus: ");
    scanf("%f", &graus);

    radianos = graus * pi / 180;

    printf("O valor em radianos eh: %.2f", radianos);


    return 0;
}