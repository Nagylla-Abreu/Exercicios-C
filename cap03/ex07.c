#include <stdio.h>

int main(){

    float real, dolar, conversao;

    printf("Insira um valor em real: ");
    scanf("%f", &real);
    printf("Insira a cotacao do dolar hoje: ");
    scanf("%f", &dolar);

    conversao = real / dolar;

    printf("%f reais equivale a %.2f dolares hoje", real, conversao);

    return 0;
}