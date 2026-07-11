#include <stdio.h>

int main(){

    int idade;

    printf("Insira a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5){
        if(idade <= 7){
            printf("Categoria: Infantil A\n");
        }else{
            if(idade <= 10){
                printf("Categoria: Infantil B\n");
            }else{
                if(idade <= 13){
                    printf("Categoria: Juvenil A\n");
                }else{
                    if(idade <= 17){
                        printf("Categoria Juvenil B\n");
                    }else{
                        printf("Categoria: Senior\n");
                    }
                }
            }
        }
    }else{
        printf("Idade invalida\n");
    }

    return 0;
}