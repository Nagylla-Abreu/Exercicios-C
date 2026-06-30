#include <stdio.h>

int main(){

    int x, y;

    printf("Insira um numero inteiro: ");
    scanf("%d", &x);

    y = x % 2;

    if(y == 0){
        printf("%d eh par", x);
    }else{
        printf("%d nao eh par", x);
    }

    return 0;
}