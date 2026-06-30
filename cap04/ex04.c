#include <stdio.h>

int main(){

    int salario, valprest, calculo;

    printf("Insira o valor do seu salario: ");
    scanf("%d", &salario);
    printf("Insira o valor da prestacao: ");
    scanf("%d", &valprest);

    calculo = salario * 0.2;

    if(valprest == calculo){
        printf("Emprestimo concedido");
    } else {
        if(valprest < calculo){
            printf("Emprestimo concedido");
        } else{
            printf("Emprestimo nao concedido");
        }
    }

    return 0;
}