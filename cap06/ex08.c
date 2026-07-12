#include <stdio.h>

int main(){

    float vetor[10], soma=0;
    int i, qtdnegat=0;

    for(i=0;i<10;i++){
        scanf("%f", &vetor[i]);
        if(vetor[i]<0){
            qtdnegat = qtdnegat + 1.0;
        }
        if(vetor[i]>=0){
            soma = soma + vetor[i];
        }
    }

    printf("Voce digitou %d numeros negativos\n", qtdnegat);
    printf("A soma dos numeros positivos eh %.2f\n", soma);

    return 0;
}