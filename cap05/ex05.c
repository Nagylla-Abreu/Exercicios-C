#include <stdio.h>

int main(){

    int i = 0;
    int n, soma = 0;

    for(n=0;n<50;n++){
        i = i + 2;
        soma = soma + i;
    }

    printf("%d", soma);

    return 0;
}