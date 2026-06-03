#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char tipo_musica[30];
    int integrantes;
    int ranking;
} Banda;
void preencherBandas(Banda lista[], int tam);
void exibirTodasBandas(Banda lista[], int tam);
void buscarPorRanking(Banda lista[], int tam);
void buscarPorTipoMusica(Banda lista[], int tam);
void buscarPorNome(Banda lista[], int tam);

int main() {
    Banda minhasBandas[5];
    int opcao;
    int dadosPreenchidos = 0; 

    do {
        printf("\n========== MENU REPRODUTOR DE BANDAS ==========\n");
        printf("1. Preencher as 5 bandas favoritas\n");
        printf("2. Exibir todas as bandas cadastradas\n");
        printf("3. Buscar banda por posicao no Ranking (1 a 5)\n");
        printf("4. Buscar bandas por Tipo de Musica\n");
        printf("5. Verificar se uma banda esta no Top 5\n");
        printf("0. Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao > 1 && opcao <= 5 && !dadosPreenchidos) {
            printf("\n[AVISO] Por favor, preencha as bandas (Opcao 1) antes de fazer buscas!\n");
            continue;
        }

        switch(opcao) {
            case 1:
                preencherBandas(minhasBandas, 5);
                dadosPreenchidos = 1;
                break;
            case 2:
                exibirTodasBandas(minhasBandas, 5);
                break;
            case 3:
                buscarPorRanking(minhasBandas, 5);
                break;
            case 4:
                buscarPorTipoMusica(minhasBandas, 5);
                break;
            case 5:
                buscarPorNome(minhasBandas, 5);
                break;
            case 0:
                printf("\nSaindo da aplicacao... Ate mais!\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}

void preencherBandas(Banda lista[], int tam) {
    printf("\n--- CADASTRO DAS 5 BANDAS FAVORITAS ---\n");
    for(int i = 0; i < tam; i++) {
        printf("\nBanda #%d:\n", i + 1);
        
        printf("Nome da banda: ");
        fgets(lista[i].nome, 50, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = 0;

        printf("Tipo de musica (genero): ");
        fgets(lista[i].tipo_musica, 30, stdin);
        lista[i].tipo_musica[strcspn(lista[i].tipo_musica, "\n")] = 0;

        printf("Numero de integrantes: ");
        scanf("%d", &lista[i].integrantes);
        
        printf("Posicao no ranking (1 a 5): ");
        scanf("%d", &lista[i].ranking);
        getchar();
    }
    printf("\n[SUCESSO] Todas as bandas foram cadastradas!\n");
}

void exibirTodasBandas(Banda lista[], int tam) {
    printf("\n--- EXIBINDO TODAS AS BANDAS ---\n");
    for(int i = 0; i < tam; i++) {
        printf("\nRanking #%d - %s\n", lista[i].ranking, lista[i].nome);
        printf("Genero: %s | Integrantes: %d\n", lista[i].tipo_musica, lista[i].integrantes);
        printf("----------------------------------------\n");
    }
}

void buscarPorRanking(Banda lista[], int tam) {
    int posProcurada;
    int encontrado = 0;
    
    printf("\nDigite a posicao do ranking que deseja buscar (1 a 5): ");
    scanf("%d", &posProcurada);
    getchar();

    for(int i = 0; i < tam; i++) {
        if(lista[i].ranking == posProcurada) {
            printf("\nBanda encontrada no Ranking %d:\n", posProcurada);
            printf("Nome: %s\nGeneros: %s\nIntegrantes: %d\n", lista[i].nome, lista[i].tipo_musica, lista[i].integrantes);
            encontrado = 1;
            break;
        }
    }
    
    if(!encontrado) {
        printf("\nNenhuma banda cadastrada na posicao %d do ranking.\n", posProcurada);
    }
}

void buscarPorTipoMusica(Banda lista[], int tam) {
    char generoProcurado[30];
    int encontrado = 0;

    printf("\nDigite o tipo de musica/genero para buscar: ");
    fgets(generoProcurado, 30, stdin);
    generoProcurado[strcspn(generoProcurado, "\n")] = 0;

    printf("\nBandas do genero '%s' encontradas:\n", generoProcurado);
    for(int i = 0; i < tam; i++) {
        if(strcmp(lista[i].tipo_musica, generoProcurado) == 0) {
            printf("- %s (Ranking: %d)\n", lista[i].nome, lista[i].ranking);
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("Nenhuma banda encontrada com o genero '%s'.\n", generoProcurado);
    }
}

void buscarPorNome(Banda lista[], int tam) {
    char nomeProcurado[50];
    int encontrado = 0;

    printf("\nDigite o nome da banda para checar se esta nos favoritos: ");
    fgets(nomeProcurado, 50, stdin);
    nomeProcurado[strcspn(nomeProcurado, "\n")] = 0;

    for(int i = 0; i < tam; i++) {
        if(strcmp(lista[i].nome, nomeProcurado) == 0) {
            printf("\nSim! A banda '%s' esta entre suas favoritas na posicao %d do ranking.\n", lista[i].nome, lista[i].ranking);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("\nNao, a banda '%s' nao esta na sua lista de favoritas.\n", nomeProcurado);
    }
}