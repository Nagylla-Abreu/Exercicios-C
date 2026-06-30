#include <stdio.h>

int main(){

    float valor, imposto, montante;
    int estado;

    printf("Insira o valor do produto: ");
    scanf("%f", &valor);
    printf("Selecione o estado destinatario: \n1-MG\n2-SP\n3-RJ\n4-MS\n");
    scanf("%d", &estado);

    switch(estado){
        case 1:
            imposto = valor * 0.07;
            montante = imposto + valor;
            printf("Preco final acrescido do imposto: %.2f", montante);
        break;
            case 2:
            imposto = valor * 0.12;
            montante = imposto + valor;
            printf("Preco final acrescido do imposto: %.2f", montante);
        break;
            case 3:
            imposto = valor * 0.15;
            montante = imposto + valor;
            printf("Preco final acrescido do imposto: %.2f", montante);
        break;
            case 4:
            imposto = valor * 0.08;
            montante = imposto + valor;
            printf("Preco final acrescido do imposto: %.2f", montante);
        break;
            default:
            printf("Estado invalido.");
    }

    return 0;
}