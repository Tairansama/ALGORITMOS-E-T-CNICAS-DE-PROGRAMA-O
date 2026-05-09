#include <stdio.h>
#include <string.h>

int main() {
    char S1[21];
    char S2[21];
    char opcao;
    
    do {
        printf("\n=== MENU ===\n");
        printf("(a) Ler string S1\n");
        printf("(b) Imprimir tamanho da string S1\n");
        printf("(c) Comparar S1 com nova string S2\n");
        printf("(d) Concatenar S1 com nova string S2\n");
        printf("(e) Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);
        
        switch(opcao) {
            case 'a':
                printf("Digite a string S1 (max 20 caracteres): ");
                scanf(" %20[^\n]", S1);
                printf("String S1 armazenada: %s\n", S1);
                break;
                
            case 'b':
                printf("Tamanho da string S1: %d\n", strlen(S1));
                break;
                
            case 'c':
                printf("Digite a string S2 para comparar: ");
                scanf(" %20[^\n]", S2);
                if(strcmp(S1, S2) == 0) {
                    printf("As strings sao iguais\n");
                } else {
                    printf("As strings sao diferentes\n");
                }
                break;
                
            case 'd':
                printf("Digite a string S2 para concatenar: ");
                scanf(" %20[^\n]", S2);
                strcat(S1, S2);
                printf("Resultado da concatenacao: %s\n", S1);
                break;
                
            case 'e':
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 'e');
    
    return 0;
}