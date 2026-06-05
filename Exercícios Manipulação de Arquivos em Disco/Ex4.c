#include<stdio.h>
int main(){
    FILE *arq;
    char nome[50];

    printf("digite um nome pra salvar: ");
    scanf("%s", nome);

    arq = fopen("nome.txt", "w");

    if(arq == NULL){
        printf("ERRO!\n");
        return 1;
    }
    fprintf(arq, "%s\n", nome);

    fclose(arq);

    printf("Dados salvos com sucesso!\n");
    return 0;
}