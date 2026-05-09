#include <stdio.h>
int main () {
char a[50], b[50];

printf("digite seu nome 01: ");
scanf("%s", &a);

printf("digite seu nome 02: ");
scanf("%s", &b);

printf("nome 01: %s (tamanho %lu\n)", a, strlen(a));
printf("nome 01: %s (tamanho %lu\n)", b, strlen(b));

    return 0;
}