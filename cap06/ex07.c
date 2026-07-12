#include <stdio.h>

int main(){

    int x[10], i;
    int menor, maior;

    scanf("%d", &x[0]);

    maior = x[0];
    menor = x[0];

    for(i=1;i<10;i++){
        scanf("%d", &x[i]);
        if(x[i]>maior){
            maior = x[i];
        }
        if(x[i]<menor){
            menor = x[i];
        }
    }

    printf("O maior numero eh %d\n", maior);
    printf("O menor numero eh %d\n", menor);

    return 0;
}