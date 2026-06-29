#include <stdio.h>

int main(){

    int x, y, xou, ou, e;

    scanf("%d %d", &x, &y);

    xou = x ^ y; // um bit = 1 se os 2 bits forem diferentes.
    ou = x | y; // um bit = 1 se pelo menos 1 bit = 1.
    e = x & y; // um bit = 1 se os 2 bits forem = 1.

    printf("%d\n", xou);
    printf("%d\n", ou);
    printf("%d\n", e);

    return 0;
}
    