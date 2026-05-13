#include <stdio.h>
int somarIntervalo(int n1, int n2) {
    int soma = 0;
    int inicio, fim;

    if (n1 <= n2) {
        inicio = n1;
        fim = n2;
    } else {
        inicio = n2;
        fim = n1;
    }

    for (int i = inicio; i <= fim; i++) {
        soma += i;
    }
    return soma;
}
int main() {
    int num1, num2;
    
    printf("Digite o primeiro número inteiro (n1): ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro (n2): ");
    scanf("%d", &num2);

    
    int resultado = somarIntervalo(num1, num2);

    printf("\nA soma de todos os inteiros entre %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}