#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, raiz1, raiz2;

    printf("Insira tres valores para a, b, e c, respectivamente:\n");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b)-4.0*a*c;
    raiz1 = (-b+sqrt(delta))/2.0*a;
    raiz2 = (-b-sqrt(delta))/2.0*a;

    if(a == 0){
        printf("Nao eh uma equacao de segundo grau.\n");
    }else{
        if(delta == 0){
            printf("Existe um raiz: %f ou %f.\n", raiz1, raiz2);
        }else{
            if(delta < 0){
                printf("Nao existem raizes reais.\n");
            }else{
                printf("Existem duas raizes reais: %f e %f\n", raiz1, raiz2);
            }
        }
    }

    return 0;
}