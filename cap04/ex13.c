#include <stdio.h>

int main(){

    int escolha;
    float x, y, calc;

    printf("Escolha uma operacao:\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d", &escolha);

    printf("Insira dois numeros:\n");
    scanf("%f %f", &x, &y);

    if(escolha == 1){
        calc = x + y;
        printf("A soma dos numeros eh: %.1f\n", calc);
    }else{
        if(escolha == 2){
            calc = x - y;
            printf("A subtracao entre os numeros eh: %.1f\n", calc);
        }else{
            if(escolha == 3){
                calc = x * y;
                printf("A multiplicacao entre os numeros eh: %.1f\n", calc);
            }else{
                if(escolha == 4){
                    calc = x / y;
                    printf("A divisao entre os numeros eh: %.2f\n", calc);
                }else{
                    printf("Escolha invalida.\n");
                }
            }
        }
    }

    return 0;
}