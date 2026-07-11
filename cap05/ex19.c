#include <stdio.h>

int main(){

    int i, j;
    float conta, s=0;

    for(i=1, j=1; i<=99 && j<=55; i+=2, j++){
            conta=(float)i/j;
            s = (float)s + conta;        
    }

    printf("%.2f", s);

    return 0;
}