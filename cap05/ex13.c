#include <stdio.h>

int main(){

    int i;
    int soma = 0;

    
    for(i=0;i<1000;i++){
            if(i%3==0 || i%5==0){
                soma = i + soma;
        }
    }

            printf("%d", soma);

    return 0;
}