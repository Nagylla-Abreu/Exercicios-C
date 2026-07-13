#include <stdio.h>

int main(){

    int i, n;
    float num[20];
    float quad[20];

    printf("Insira a quantidade de numeros que deseja digitar ate 20: ");
    scanf("%d", &n);

    if(n>=1 && n<=20){
        printf("Insira seus valores:\n");
        for(i=0;i<n;i++){
            scanf("%f", &num[i]);        
        }

        printf("Os valores que voce inseriu sao:\n");
        for(i=0;i<n;i++){
            printf("%.2f ", num[i]);
        }

        printf("\nO quadrado de cada numero que voce inseriu eh:\n");
        for(i=0;i<n;i++){
            quad[i] = (num[i]*num[i]);
            printf("%.2f ", quad[i]);
        }
    }else{
        printf("Tamanho invalido!\n");
    }

    return 0;
}