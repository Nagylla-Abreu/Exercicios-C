#include <stdio.h>

int main(){

    int x, y;

    printf("Insira dois numeros: \n");
    scanf("%d %d", &x, &y);

    if(x > y){
        printf("%d eh maior que %d", x, y);
    }else{
        printf("%d eh maior que %d", y, x);
    }

    printf("\nPressione qualquer tecla para continuar");
    getchar();

    return 0;
}