#include <stdio.h>
#include <math.h>

int main(){

    int num, i=1;
    printf("Insira o numero: ");
    scanf("%d", &num);

    if(num>0){
        while(i*i<num){
        i++;         
        }
            if (i*i == num){
                printf("Quadrado perfeito\n");
            }else{
                printf("Quadrado NAO EH perfeito\n");
            }
    }else{
        printf("Raiz invalida\n");
    }
        
    return 0;
}

