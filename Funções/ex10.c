#include <stdio.h>
#include <string.h>

int contar(char s[], char c) {
    int cont = 0;
    
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == c)
            cont++;
    }
    
    return cont;
}

int main() {
    char s[50], c;
    
    printf("Digite a palavra: ");
    scanf("%s", s);
    
    printf("Digite o caractere: ");
    scanf(" %c", &c);
    
    printf("Quantidade: %d\n", contar(s, c));
    
    return 0;
}