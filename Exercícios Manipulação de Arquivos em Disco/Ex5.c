#include <stdio.h>
int ehPrimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int matriz[3][3];
    int l, c, valor;
    FILE *arq;

    printf("--- Exercicio 5: Armazenar Matriz de Primos num Arquivo ---\n\n");

    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            do {
                printf("Digite um numero primo para [%d][%d]: ", l, c);
                scanf("%d", &valor);
                
                if (!ehPrimo(valor)) {
                    printf("Nao eh primo! Tente novamente.\n");
                }
            } while (!ehPrimo(valor));

            matriz[l][c] = valor;
        }
    }
    arq = fopen("matriz_primos.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para escrita!\n");
        return 1;
    }
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            fprintf(arq, "%d\t", matriz[l][c]);
        }
        fprintf(arq, "\n");
    }

    fclose(arq);

    printf("\nMatriz guardada com sucesso no arquivo 'matriz_primos.txt'!\n");

    return 0;
}