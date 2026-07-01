#include <stdio.h>

int main(){

    int n, i;

    scanf("%d", &n);

    for(i=0;n>=i;n--){
        printf("%d ", n);
    }

    return 0;
}