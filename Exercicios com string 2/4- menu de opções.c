#include <stdio.h>
#include <string.h>

int main() {
    char str1[21], str2[21];
    char op;
    
    do {
        printf("\n--- MENU ---\n");
        printf("a - Ler strings\n");
        printf("b - Comparar strings\n");
        printf("c - Mostrar tamanhos\n");
        printf("d - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &op);
        getchar();
        
        if(op == 'a') {
            printf("Digite a primeira string: ");
            fgets(str1, 21, stdin);
            str1[strlen(str1)-1] = '\0';
            
            printf("Digite a segunda string: ");
            fgets(str2, 21, stdin);
            str2[strlen(str2)-1] = '\0';
        }
        
        else if(op == 'b') {
            if(strcmp(str1, str2) == 0) {
                char nova[42];
                strcpy(nova, str1);
                strcat(nova, str2);
                printf("Strings iguais! Concatenacao: %s\n", nova);
                printf("Tamanho: %d\n", strlen(nova));
            } else {
                strcpy(str1, str2);
                printf("Strings diferentes! Primeira agora e: %s\n", str1);
            }
        }
        
        else if(op == 'c') {
            printf("String 1 tem %d caracteres\n", strlen(str1));
            printf("String 2 tem %d caracteres\n", strlen(str2));
        }
        
    } while(op != 'd');
    
    return 0;
}