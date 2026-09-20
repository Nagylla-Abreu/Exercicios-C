#include <stdio.h>

int maior(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("O maior numero entre eles eh %d", maior(num1, num2));

    return 0;
}