#include <stdio.h>
int ehPrimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int LINHAS = 3;
    int COLUNAS = 3;
    int matriz[3][3];
    int l, c, valor;
    printf("--- Preenchendo a Matriz com Numeros Primos ---\n");

    for (l = 0; l < LINHAS; l++) {
        for (c = 0; c < COLUNAS; c++) {
            
            do {
                printf("Digite um numero primo para a posicao [%d][%d]: ", l, c);
                scanf("%d", &valor);

                if (!ehPrimo(valor)) {
                    printf("Esse numero nao eh primo! Tente novamente.\n");
                }
            } while (!ehPrimo(valor));

            matriz[l][c] = valor;
        }
    }

    FILE *arq;
    arq = fopen("matriz_primos.txt", "w"); // Abre no modo de escrita

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (l = 0; l < LINHAS; l++) {
        for (c = 0; c < COLUNAS; c++) {
            fprintf(arq, "%d\t", matriz[l][c]);
        }
        fprintf(arq, "\n");
    }

    fclose(arq);

    printf("\nMatriz de primos gravada com sucesso em 'matriz_primos.txt'!\n");

    return 0;
}