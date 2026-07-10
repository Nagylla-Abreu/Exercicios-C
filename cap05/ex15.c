#include <stdio.h>

int main(){

    int i, valor, menor, maior;

    printf("Insira numeros inteiros positivos, e para encerrar digite um numero inteiro negativo:\n");
    scanf("%d", &valor);   

    menor = valor;
    maior = valor;
    
    if(valor<0){
        printf("Nenhum numero valido foi digitado.\n");
        return 0;
    }

    for(i=1; ;i++){
        scanf("%d", &valor);
        
        if(valor>=0){
            if(valor<menor){
                menor = valor;
            }
            if(valor>maior){
                maior = valor;
            }
        }else{
            printf("O menor numero eh: %d\nO maior numero eh: %d\n", menor, maior);
            break;
        }
    }
    
    return 0;
}