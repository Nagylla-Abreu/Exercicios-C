#include <stdio.h>

int main(){

    int x, y, z, escolha, media;

    printf("Insira tres numeros inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Selecione que tipo de media voce deseja:\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica\n");
    scanf("%d", &escolha);

    if(escolha == 1){
        media = x*y*z;
        printf("A media geometrica eh: %d\n", media);
    }else{
        if(escolha == 2){
            media = (x+(2*y)+(3*z))/6;
            printf("A media ponderada eh: %d\n", media);
        }else{
            if(escolha == 3){
                media = 1 / ((1/x)+(1/y)+(1/z));
                printf("A media harmonica eh: %d", media);
            }else{
                if(escolha == 4){
                    media = (x+y+z)/3;
                    printf("A media aritmetica eh: %d", media);
                }
            }
        }
    }

    return 0;
}