#include <stdio.h>

int main() {
    char str[30];
    printf("Insira uma frase: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, stdout);
    
    return 0;
}
