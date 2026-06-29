#include <stdio.h>

int main(){

    int n, antes, depois;

    scanf("%d", &n);

    antes = n - 1;
    depois = n + 1;

    printf("%d %d %d", antes, n, depois);

    return 0;
}