#include <stdio.h>
int main () {
    float s, p;

    printf("digite seu salario: ");
    scanf("%f", &s);

    printf("digite o valor da prestação: ");
    scanf("%f", &p);

    if (p > s * 0.2){
        printf("emprestimo não pode ser consedido!");
    } else {
        printf("emprestimo pode ser consedido!");
    }

    return 0;
}