#include <stdio.h>

int main(){

    float altura, peso;

    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);
    printf("Insira seu peso: ");
    scanf("%f", &peso);

    if(altura < 1.20){
        if(peso < 60){
            printf("Categoria: A\n");
        }else{
            if(peso < 90){
                printf("Categoria: D\n");
            }else{
                if(peso >= 90){
                    printf("Categoria: G\n");
                }
            }
        }
    }if(altura >= 1.20){
        if(altura <= 1.70){
            if(peso < 60){
                printf("Categoria: B\n");
            }else{
                if(peso < 90){
                    printf("Categoria: E\n");
                }else{
                    if(peso >= 90){
                        printf("Categoria: H\n");
                    }
                }
            }
        }
    }else{
        if(altura > 1.70){
            if(peso < 60){
                printf("Categoria: C\n");
            }else{
                if(peso < 90){
                    printf("Categoria: F\n");
                }else{
                    if(peso >= 90){
                        printf("Categoria: I\n");
                    }
                }
            }
        }
    }

    return 0;
}