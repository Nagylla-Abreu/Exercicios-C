#include <stdio.h>

int main(){

    int idade, categoria;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
        printf("O nadador pertence a categoria Infantil A.");
    }if(idade >= 8 && idade <= 10){
            printf("O nadador pertence a categoria Infantil B.");
        }if(idade >= 11 && idade <= 13){
            printf("O nadador pertence a  categoria Juvenil A.");
            }if(idade >= 14 && idade <= 17){
                printf("O nadador pertence a categoria Juvenil B.");
                }if(idade >= 18){
                    printf("O nadador pertence a categoria Senior.");
                }else{
                    printf("O nadador eh novo demais.");
                }

    return 0;
}