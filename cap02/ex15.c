#include <stdio.h>

int main(){

    char letra;
    int numero;
    float valor;

    scanf("%c %d %f", &letra, &numero, &valor);

    printf("%c %d %f\n", letra, numero, valor);
    printf("%c\t%d\t%f\n", letra, numero, valor);
    printf("%c\n%d\n%f", letra, numero, valor);

    return 0;
}