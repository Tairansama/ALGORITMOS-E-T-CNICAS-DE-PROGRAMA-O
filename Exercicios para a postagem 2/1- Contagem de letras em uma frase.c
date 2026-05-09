#include <stdio.h>
#include <string.h>
int main () {
    char p1[100];
    int v = 0;
    
    puts ("digite sua frase: ");
    gets(p1);
    
    printf("quantidade de caracteres: %d\n", strlen(p1));

    for(int i = 0; p1[i] != '\0'; i++) {
        char c = p1[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            v++;
        }
    }

    printf("quantidade de vogais: %d\n", v);

    return 0;
}