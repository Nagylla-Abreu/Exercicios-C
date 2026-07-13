#include <stdio.h>

int main(){

    int A[10], B[10], C[10], i;

    printf("Insira 10 valores inteiros para A:\n");
    for(i=0;i<10;i++){
        scanf("%d", &A[i]);
    }

    printf("Agora insira 10 valores inteiros para B:\n");
    for(i=0;i<10;i++){
        scanf("%d", &B[i]);
    }

    printf("A diferenca entre A e B eh:\n");
    for(i=0;i<10;i++){
        C[i] = A[i] - B[i];
        printf("%d\n", C[i]);
    }

    return 0;
}