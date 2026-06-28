#include <stdio.h>

int main(){

    int dia, mes, ano;

    printf("Informe o dia:\n");
    scanf("%d", &dia);
    printf("Informe o mes:\n");
    scanf("%d", &mes);
    printf("Informe o ano:\n");
    scanf("%d", &ano);

    printf("%d\\%d\\%d", dia, mes, ano);

    return 0;
}