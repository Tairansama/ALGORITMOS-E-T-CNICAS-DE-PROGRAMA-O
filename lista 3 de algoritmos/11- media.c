#include <stdio.h>
int main() {
    float v, s = 0, m;
    int c = 0;

    printf("Digite um valor (negativo para parar): ");
    scanf("%f", &v);

    while (v >= 0) {
        s += v;
        c++;

        printf("Digite um valor (negativo para parar): ");
        scanf("%f", &v);
    }

    if (c > 0) {
        m = s / c;

        printf("Total da soma: %.2f\n", s);
        printf("Media: %.2f\n", m);
        printf("Quantidade de valores: %d\n", c);
    } else {
        printf("Nenhum valor positivo foi informado.\n");
    }

    return 0;
}