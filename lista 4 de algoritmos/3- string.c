#include <stdio.h>

int contar(char str[], char c) {
    int i = 0, cont = 0;

    while (str[i] != '\0') {
        if (str[i] == c) {
            cont++;
        }
        i++;
    }

    return cont;
}

int main() {
    char str[100];
    char c;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Aparece %d vezes\n", contar(str, c));

    return 0;
}