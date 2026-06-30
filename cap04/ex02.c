#include <stdio.h>

int main(){

    int x, y;

    printf("Insira dois numeros: \n");
    scanf("%d %d", &x, &y);

    if(x == y){
        printf("%d eh igual a %d", x, y);
    } else{
        if(x > y){
            printf("%d eh maior que %d", x, y);
        } else {
            printf("%d eh maior que %d", y, x);
        }
    }

    return 0;
}