#include <stdio.h>

int main(){

    int vetor[100], i, n=1;

    for(i=0;i<100;){
        if(n%7!=0){
            vetor[i] = n;
            i++;
        }
        n++;
    }

    for(i=0;i<100;i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}