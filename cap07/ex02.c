#include <stdio.h>

int main() {
    char str[30];
    printf("Insira uma frase: ");
    fgets(str, 5, stdin);
    fputs(str, stdout);
    
    return 0;
}
