#include <stdio.h>

int main(){

    int num, calc1, calc2;

    printf("Insira um numero: ");
    scanf("%d", &num);

    calc1 = num % 5;
    calc2 = num % 3;

    if(calc1 == 0 && calc2 != 0){
        printf("%d eh divisivel por 5.\n", num);
    }else{
        if(calc1 != 0 && calc2 == 0){
            printf("%d eh divisivel por 3.\n", num);
        }else{
            if(calc1 == 0 && calc2 == 0){
                printf("\n");
            }else{
                printf("%d nao eh divisivel nem por 5 nem por 3.\n", num);
            }
        }
    }

    return 0;
}