#include <stdio.h>
#include <ctype.h>
 int main {
    FILE *arq_original, *arq_maiusculo;
    char c;
    arq_original = fopen("texto_minusculo.txt", "w");
    if (arq_original == NULL) {
        printf("Erro ao criar arquivo de teste!\n");
        return 1;
    }
    fprintf(arq_original, "ola, este e um teste de programacao em c.\n");
    fprintf(arq_original, "aprendendo a usar arquivos no vs code!\n");
    fclose(arq_original);

    arq_original  = fopen("texto_minusculo.txt", "r");
    arq_maiusculo = fopen("texto_maiusculo.txt", "w");

    if (arq_original == NULL || arq_maiusculo == NULL) {
        printf("Erro ao abrir os arquivos!\n");
        return 1;
    }
    while ((c = fgetc(arq_original)) != EOF) {
        
        char letra_maiuscula = toupper(c);
        fputc(letra_maiuscula, arq_maiusculo);
    }

    fclose(arq_original);
    fclose(arq_maiusculo);

    printf("Conversao concluida! Verifique o arquivo 'texto_maiusculo.txt'.\n");

    return 0;
}