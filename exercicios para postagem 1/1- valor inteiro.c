#include <stdio.h>
int main () {
    int num, c;

    printf("digite o valor inteiro: ");
    scanf("%d", &num);

    if (num>10) {
        printf("multiplos de 3: %d", num);

        for(c=1; c<=num; c++) {
            if (c % 3 == 0) {
                printf("%d", c);
            } 
        }
            printf("\n");
    } else {
        printf("Erro\n");
    }

    return 0;
}