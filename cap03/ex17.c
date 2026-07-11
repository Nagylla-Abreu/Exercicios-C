#include <stdio.h>

int main(){

    int x, y;

    printf("Insira um numero: ");
    scanf("%d", &x);

    y = ~x;

    printf("Seu complemento bit a bit eh: %d", y);

    return 0;
}