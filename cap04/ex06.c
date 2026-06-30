#include <stdio.h>
#include <stdlib.h>

int main(){

    float sexo, altura, pesoh, pesom;
    
    printf("Insira 0 se for homem e 1 se for mulher: ");
    scanf("%f", &sexo);
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);
    
    pesoh = (72.7*altura)-58;
    pesom = (62.1*altura)-44.7;
    
    if(sexo == 0){
        printf("Seu peso ideal eh: %.2f\n", pesoh);
    }else{
        if(sexo == 1){
            printf("Seu peso ideal eh: %.2f\n", pesom);
        }else{
            printf("Sexo invalido ne flor!\n");
        }
    }
    return 0;
}
    
    /*float altura, pesoideal;
    char sexo;

    printf("Pressione H se for homem e M se for mulher: ");
    scanf("%c", &sexo);
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);
    
    if(sexo == 'H'){
        pesoideal = (72.7*altura)-58;
        printf("Seu peso ideal eh: %f", pesoideal);
    } if(sexo == 'M'){
        pesoideal = (62.1*altura)-44.7;
        printf("Seu peso ideal eh: %f", pesoideal);
    } else {
        printf("Sexo invalido.");
    } */