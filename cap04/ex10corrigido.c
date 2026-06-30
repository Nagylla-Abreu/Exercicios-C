#include <stdio.h>

int main(){

    int x, y, z, escolha;
    float media;

    printf("Insira tres numeros inteiros positivos:\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("Selecione que tipo de media voce deseja:\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica\n");
    scanf("%d", &escolha);

    if(escolha == 1){
        media = x*y*z;
        printf("A media geometrica eh: %.2f\n", media);
    }else{
        if(escolha == 2){
            media = (x+2.0*y+3.0*z)/6;
            printf("A media ponderada eh: %.2f\n", media);
        }else{
            if(escolha == 3){
                media = 3.0 / ((1.0/x) + (1.0/y) + (1.0/z));
                printf("A media harmonica eh: %.2f\n", media);
            }else{
                if(escolha == 4){
                    media = (x+y+z)/3.0;
                    printf("A media aritmetica eh: %.2f\n", media);
                }else{
                    printf("Opcao invalida.");
                }
            }
        }
    }

    return 0;
}