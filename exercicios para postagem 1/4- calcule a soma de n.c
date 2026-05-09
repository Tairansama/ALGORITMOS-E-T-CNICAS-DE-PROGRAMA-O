#include <stdio.h>
int main () {
    int n, i;
    float s = 0;

    printf("digite um numero n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Erro: numero negativo");
    }

    printf("\ns= ", s);

    for (i = 2; i <= n; i++) {
        if (i == 2) {
            printf("2/%d", i);
        } else {
            printf(" + 2/%d", i);
        }

        s = s + (2.0 / i);
    }

        printf("\n\ns = %.4f\n", s);

    return 0;
}