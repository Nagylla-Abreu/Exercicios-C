#include <stdio.h>
#include <math.h>

int main(){

    float num, quad, raiz;

    printf("Digite um numero: ");
    scanf("%f", &num);

    quad = num * num;
    raiz = sqrt(num);

    if(num > 0){
        printf("O quadrado do numero eh: %.3f\n", quad);
        printf("A raiz do numero eh: %.3f", raiz);
    }else{
        printf("O numero eh negativo e nao possui raiz nem quadrado.");
    }

    return 0;
}