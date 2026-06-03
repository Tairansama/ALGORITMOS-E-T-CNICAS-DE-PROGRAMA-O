#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[15];
    int ano;
    char cor[10];
    float preco;
} Carro;

#define TAMANHO 20
Carro vetcarros[TAMANHO]; 

int qtdCadastrada = 0; 


void lerVetorCarros();
void buscarPorPreco();
void buscarPorMarca();
void verificarCaracteristicas();

int main() {
    int opcao;

    do {
        printf("\n========== REVENDEDORA DE VEICULOS ==========\n");
        printf("1. Cadastrar carros\n");
        printf("2. Buscar carros por preço maximo\n");
        printf("3. Buscar carros por marca\n");
        printf("4. Verificar se carro especifico existe\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao > 1 && opcao <= 4 && qtdCadastrada == 0) {
            printf("\n[AVISO] Nenhum carro cadastrado. Use a Opcao 1 primeiro!\n");
            continue;
        }

        switch(opcao) {
            case 1:
                lerVetorCarros();
                break;
            case 2:
                buscarPorPreco();
                break;
            case 3:
                buscarPorMarca();
                break;
            case 4:
                verificarCaracteristicas();
                break;
            case 0:
                printf("\nEncerrando o sistema...\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}

void lerVetorCarros() {
    printf("\n--- CADASTRO DE CARROS (Limite: %d) ---\n", TAMANHO);
    printf("Quantos carros deseja cadastrar agora? (Maximo %d): ", TAMANHO);
    int quantidade;
    scanf("%d", &quantidade);
    getchar();

    if (quantidade < 1 || quantidade > TAMANHO) {
        printf("[ERRO] Quantidade invalida.\n");
        return;
    }

    for(int i = 0; i < quantidade; i++) {
        printf("\nCarro #%d:\n", i + 1);
        
        printf("Marca: ");
        fgets(vetcarros[i].marca, 15, stdin);
        vetcarros[i].marca[strcspn(vetcarros[i].marca, "\n")] = 0; // Remove o '\n'

        printf("Ano: ");
        scanf("%d", &vetcarros[i].ano);
        getchar();

        printf("Cor: ");
        fgets(vetcarros[i].cor, 10, stdin);
        vetcarros[i].cor[strcspn(vetcarros[i].cor, "\n")] = 0; // Remove o '\n'

        printf("Preco: ");
        scanf("%f", &vetcarros[i].preco);
        getchar();
    }
    
    qtdCadastrada = quantidade;
    printf("\n[SUCESSO] %d carros cadastrados com sucesso!\n", qtdCadastrada);
}

void buscarPorPreco() {
    float precoMaximo;
    int encontrado = 0;

    printf("\nDigite o preco maximo que deseja buscar: R$ ");
    scanf("%f", &precoMaximo);
    getchar();

    printf("\nCarros ate R$ %.2f encontrados:\n", precoMaximo);
    for(int i = 0; i < qtdCadastrada; i++) {
        if(vetcarros[i].preco <= precoMaximo) {
            printf("- Marca: %s | Cor: %s | Ano: %d | Preco: R$ %.2f\n", 
                   vetcarros[i].marca, vetcarros[i].cor, vetcarros[i].ano, vetcarros[i].preco);
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("Nenhum carro encontrado nessa faixa de preco.\n");
    }
}

void buscarPorMarca() {
    char marcaProcurada[15];
    int encontrado = 0;

    printf("\nDigite a marca que deseja buscar: ");
    fgets(marcaProcurada, 15, stdin);
    marcaProcurada[strcspn(marcaProcurada, "\n")] = 0;

    printf("\nResultados para a marca '%s':\n", marcaProcurada);
    for(int i = 0; i < qtdCadastrada; i++) {
        if(strcmp(vetcarros[i].marca, marcaProcurada) == 0) {
            printf("- Preco: R$ %.2f | Ano: %d | Cor: %s\n", 
                   vetcarros[i].preco, vetcarros[i].ano, vetcarros[i].cor);
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("Nenhum carro da marca '%s' foi encontrado.\n", marcaProcurada);
    }
}

void verificarCaracteristicas() {
    char marcaBusca[15];
    int anoBusca;
    char corBusca[10];
    int encontrado = 0;

    printf("\n--- VERIFICAR CARACTERISTICAS ---\n");
    printf("Digite a marca: ");
    fgets(marcaBusca, 15, stdin);
    marcaBusca[strcspn(marcaBusca, "\n")] = 0;

    printf("Digite o ano: ");
    scanf("%d", &anoBusca);
    getchar();

    printf("Digite a cor: ");
    fgets(corBusca, 10, stdin);
    corBusca[strcspn(corBusca, "\n")] = 0;

    for(int i = 0; i < qtdCadastrada; i++) {
        if(strcmp(vetcarros[i].marca, marcaBusca) == 0 && 
           vetcarros[i].ano == anoBusca && 
           strcmp(vetcarros[i].cor, corBusca) == 0) {
            
            printf("\n[SINAL VERDE] Carro existe no estoque!\n");
            printf("Preco do veículo: R$ %.2f\n", vetcarros[i].preco);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("\n[X] Nao existe nenhum carro com essas caracteristicas exatas no estoque.\n");
    }
}