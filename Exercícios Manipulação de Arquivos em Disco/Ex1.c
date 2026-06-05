#include <stdio.h>
int main (){
    int vet[11];
    int i;

    printf("digite 10 numeros para o vetor: \n");
    for(i=0;i<11;i++){
        printf("posição[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    FILE *arq;
    arq = fopen("pares.txt", "w");

    if(arq == NULL){
        printf("ERRO!\n");
        return 1;
    }
    for(i=0;i<11;i++){
        if(vet[i] %2 == 0){
            fprintf(arq, "%d\n", vet[i]);
        } else {
            vet[i] == 0;
        }
    }
    fclose(arq);
    printf("Dados salvos com sucesso!\n");

    return 0;
}
