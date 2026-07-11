#include <stdio.h>

int main(){

    int i, valor;

    scanf("%d", &valor);

    for(i=1;i<=valor;i++){
        if(valor%i==1 && valor%valor==1){
            printf("%d eh primo", valor);
        }
    }
    return 0;
}