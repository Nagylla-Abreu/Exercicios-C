#include <stdio.h>

int main(){

    double num, quinta;

    printf("Insira um numero: ");
    scanf("%lf", &num);

    quinta = num / 5;

    printf("A quinta parte do numero eh: %.2f", quinta);


    return 0;
}