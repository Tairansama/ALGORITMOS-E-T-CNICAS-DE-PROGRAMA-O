#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct livro {
    char titulo[15];
    char autor[20];
    char estilo[10];
    int codigo;
    float preco;
};

struct livro vetlivro[50];
char ch; 
int numlivros = 0;

void incluirLivro();
void listarLivros();
void procurarPorAutor();
void procurarPorTitulo();
void procurarPorEstilo();
void calcularMediaPrecos();

int main() {
    do {
        printf("\n================MENU================\n");
        printf("Digite I para incluir um livro.\n");
        printf("Digite L para listar o nome de todos os livros.\n");
        printf("Digite A para procurar livro por autor.\n");
        printf("Digite T para procurar livro por titulo.\n");
        printf("Digite E para procurar livro por estilo.\n");
        printf("Digite M para calcular a media de preco de todos os livros.\n");
        printf("Digite S para sair.\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &ch);
        
        ch = toupper(ch);

        if (ch != 'I' && ch != 'S' && numlivros == 0) {
            printf("\n[AVISO] Nenhum livro cadastrado ainda. Use a opcao 'I' primeiro!\n");
            continue;
        }
        switch(ch) {
            case 'I':
                incluirLivro();
                break;
            case 'L':
                listarLivros();
                break;
            case 'A':
                procurarPorAutor();
                break;
            case 'T':
                procurarPorTitulo();
                break;
            case 'E':
                procurarPorEstilo();
                break;
            case 'M':
                calcularMediaPrecos();
                break;
            case 'S':
                printf("\nSaindo do sistema de livraria...\n");
                break;
            default:
                printf("\nOpcao invalida! Digite uma das letras do menu.\n");
        }
    } while(ch != 'S');

    return 0;
}

void incluirLivro() {
    if (numlivros >= 50) {
        printf("\n[ERRO] Estoque cheio! Limite de 50 livros atingido.\n");
        return;
    }

    printf("\n--- INCLUSAO DO LIVRO #%d ---\n", numlivros + 1);
    
    printf("Titulo (max 14 letras): ");
    fgets(vetlivro[numlivros].titulo, 15, stdin);
    vetlivro[numlivros].titulo[strcspn(vetlivro[numlivros].titulo, "\n")] = 0;

    printf("Autor (max 19 letras): ");
    fgets(vetlivro[numlivros].autor, 20, stdin);
    vetlivro[numlivros].autor[strcspn(vetlivro[numlivros].autor, "\n")] = 0;

    printf("Estilo (max 9 letras): ");
    fgets(vetlivro[numlivros].estilo, 10, stdin);
    vetlivro[numlivros].estilo[strcspn(vetlivro[numlivros].estilo, "\n")] = 0;

    printf("Codigo (inteiro): ");
    scanf("%d", &vetlivro[numlivros].codigo);

    printf("Preco: ");
    scanf("%f", &vetlivro[numlivros].preco);
    getchar();

    numlivros++;
    printf("\n[SUCESSO] Livro incluido com sucesso!\n");
}

void listarLivros() {
    printf("\n--- LISTA DE TODOS OS LIVROS CADASTRADOS ---\n");
    for (int i = 0; i < numlivros; i++) {
        printf("%d. Título: %s\n", i + 1, vetlivro[i].titulo);
    }
}

void procurarPorAutor() {
    char autorBusca[20];
    int encontrado = 0;

    printf("\nDigite o nome do autor para buscar: ");
    fgets(autorBusca, 20, stdin);
    autorBusca[strcspn(autorBusca, "\n")] = 0;

    printf("\nLivros encontrados do autor '%s':\n", autorBusca);
    for (int i = 0; i < numlivros; i++) {
        if (strcmp(vetlivro[i].autor, autorBusca) == 0) {
            printf("- %s (Codigo: %d) - R$ %.2f\n", vetlivro[i].titulo, vetlivro[i].codigo, vetlivro[i].preco);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum livro desse autor foi encontrado.\n");
    }
}

void procurarPorTitulo() {
    char tituloBusca[15];
    int encontrado = 0;

    printf("\nDigite o titulo do livro para buscar: ");
    fgets(tituloBusca, 15, stdin);
    tituloBusca[strcspn(tituloBusca, "\n")] = 0;

    for (int i = 0; i < numlivros; i++) {
        if (strcmp(vetlivro[i].titulo, tituloBusca) == 0) {
            printf("\nLivro Encontrado!\n");
            printf("Titulo: %s\nAutor: %s\nEstilo: %s\nCodigo: %d\nPreco: R$ %.2f\n",
                   vetlivro[i].titulo, vetlivro[i].autor, vetlivro[i].estilo, vetlivro[i].codigo, vetlivro[i].preco);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nNenhum livro com o titulo '%s' foi encontrado.\n", tituloBusca);
    }
}

void procurarPorEstilo() {
    char estiloBusca[10];
    int encontrado = 0;

    printf("\nDigite o estilo (genero) para buscar: ");
    fgets(estiloBusca, 10, stdin);
    estiloBusca[strcspn(estiloBusca, "\n")] = 0;

    printf("\nLivros encontrados do estilo '%s':\n", estiloBusca);
    for (int i = 0; i < numlivros; i++) {
        if (strcmp(vetlivro[i].estilo, estiloBusca) == 0) {
            printf("- %s por %s\n", vetlivro[i].titulo, vetlivro[i].autor);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum livro desse estilo foi encontrado.\n");
    }
}

void calcularMediaPrecos() {
    float soma = 0.0;
    float media = 0.0;

    for (int i = 0; i < numlivros; i++) {
        soma += vetlivro[i].preco;
    }

    media = soma / numlivros;

    printf("\n--- BALANCO FINANCEIRO ---\n");
    printf("Total de livros em estoque: %d\n", numlivros);
    printf("Valor total do estoque: R$ %.2f\n", soma);
    printf("Media de preco por livro: R$ %.2f\n", media);
}