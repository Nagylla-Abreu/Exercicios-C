#include <stdio.h>

int main(){

    int num, numinv, c, d, u;

    printf("Insira um numero de 3 digitos: ");
    scanf("%d", &num);

    c = num / 100;
    d = (num % 100) / 10;
    u = (num % 100) % 10;

    numinv = (u*100) + (d*10) + c;

    printf("O numero invertido eh: %d", numinv);

    return 0;
}