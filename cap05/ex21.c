#include <stdio.h>

int main(){

    int i, n, valor, maior, contagem=0;

    printf("Insira a quantidade de numeros que serao lidos: ");
    scanf("%d", &n);

    printf("Insira os numeros inteiros(vc pode repetir numeros):\n");
    scanf("%d", &valor);

    maior = valor;
    contagem = 1;

    for(i=1;i<n;i++){
        scanf("%d", &valor);
        if(valor>maior){
            maior = valor;
            contagem = 1;
        }else{
            if(valor==maior){
            contagem = contagem + 1;
        }
        }        
    }

    printf("O maior numero eh: %d\n", maior);
    printf("O numero %d apareceu %d vezes", maior, contagem);

    return 0;
}