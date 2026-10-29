#include <stdio.h>

int main() {
    int i = 0;
    char str[30];
    printf("Insira uma frase: ");
    fgets(str, sizeof(str), stdin);
    
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    
    printf("Tamanho da string: %d", i);
    
    
    return 0;
}
