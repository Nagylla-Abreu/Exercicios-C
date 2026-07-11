#include <stdio.h>

int main(){

    int x, y, z;

    printf("Insira um numero: ");
    scanf("%d", &x);

    y = x << 1;
    z = x >> 1;

    printf("O dobro do numero eh: %d\n", y);
    printf("A metade do numero eh: %d\n", z);

    return 0;
}