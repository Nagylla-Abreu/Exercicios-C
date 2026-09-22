#include <stdio.h>

int horario(int h, int m, int s){
    int c;
    c = (h*3600) + (m*60) + s;
    return c;
}

int main(){
    int x, y, z;

    printf("Insira as horas: ");
    scanf("%d", &x);
    printf("Insira os minutos: ");
    scanf("%d", &y);
    printf("Insira os segundos: ");
    scanf("%d", &z);

    printf("Voce inseriu o horario %.2d:%.2d:%.2d que convertido eh igual a %d segundos.\n", x, y, z, horario(x, y, z));

    return 0;
}