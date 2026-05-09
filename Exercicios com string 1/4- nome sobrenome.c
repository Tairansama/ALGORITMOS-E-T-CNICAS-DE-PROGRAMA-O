#include <stdio.h>
#include <string.h>
int main () {
    char n[100];
    char s[100];

    puts("digite seu nome: ");
    gets(n);

    puts("digite seu sobrenome: ");
    gets(s);

    printf("nome digitado: %s %s\n", s, n);




    return 0;
}