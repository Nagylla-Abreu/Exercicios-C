#include <stdio.h>

int main(){

    int n, i;

    scanf("%d", &n);

    for(i=1;n>0;n--){
        printf("%d ", i);
        i = i + 2;
    }

    return 0;
}