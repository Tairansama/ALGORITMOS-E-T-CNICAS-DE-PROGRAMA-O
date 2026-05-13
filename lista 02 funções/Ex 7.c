#include <stdio.h>

long long calcularFatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Erro!\n");
    } else {
        long long resultado = calcularFatorial(num);
        printf("O fatorial de %d (%d!) é: %lld\n", num, num, resultado);
    }
    return 0;
}