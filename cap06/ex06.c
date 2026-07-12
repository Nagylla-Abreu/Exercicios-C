#include <stdio.h>

int main(){

    int vetor[10], i; 
    int soma=0;

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<10;i++){
        if(vetor[i]%2==0){
            soma = soma + 1;
        }
    }

    printf("A quantidade de numeros pares eh %d", soma);

    return 0;
}