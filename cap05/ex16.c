#include <stdio.h>

int main(){

    int i, valor;
    float hn, soma=0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &valor);

    for(i=1;i<=valor;i++){
        hn = (1.0/i);
        printf("%.2f ", hn);
        soma = soma + hn;
    }
    
    printf("\nO numero harmonico eh: %.2f ", soma);

    return 0;
}