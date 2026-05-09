#include <stdio.h>
int main () {
    float num;

    printf("digite um numero: ");
    scanf("%f", &num);

    if (num>=20) {
        num = num/2;
        printf("resultado: %.2f", num);
    } else {
        printf("ERRO!: numero menor que 20!");
    }


    return 0;
}