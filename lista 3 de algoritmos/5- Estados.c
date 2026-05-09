#include <stdio.h>

int main() {
    char e[3];

    printf("Digite a sigla: ");
    scanf("%s", e);

    if (e[0] == 'R' && e[1] == 'J') {
        printf("Carioca\n");
    } else if (e[0] == 'S' && e[1] == 'P') {
        printf("Paulista\n");
    } else if (e[0] == 'M' && e[1] == 'G') {
        printf("Mineiro\n");
    } else {
        printf("Outros estados\n");
    }

    return 0;
}