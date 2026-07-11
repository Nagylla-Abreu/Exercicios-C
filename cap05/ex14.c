#include <stdio.h>

int main(){

    int i, n;
    int a = 0, b = 1, c;

    printf("Digite um numero maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("%d\n", a);
    }else if (n == 1) {
        printf("%d\n", b);
    }else{
        for (i = 2; i <= n; i++){
            printf("%d\n", b);
            c = a + b;
            a = b;
            b = c;    
        }
    }
    return 0;
}