#include <stdio.h>
#include <string.h>
int main () {
    char n[50];
    char s[50];
    char c[100];

    puts("digite seu nome: ");
    gets(n);

    puts("digite seu sobrenome: ");
    gets(s);

    strcat(c, n);
    strcat(n, " ");
    strcat(c, s);

    printf("nome completo: %d\n", (int)strlen(c));
    printf("caracteres do nome: %d\n", (int)strlen(n));
    printf("caracteres do sobrenome: %d\n", (int)strlen(s));
    printf("caracteres nome + sobrenome: %d\n", (int)strlen(c));

    return 0;
}