#include <stdio.h>
int main(){
    FILE *arq_num, *arq_par, *arq_impar;
    int qdt, num, i;

    arq_num = fopen("numeros.txt", "w");

    if(arq_num == NULL){
        printf("ERRO!\n");
        return 1;
    }
    printf("Digite a quantidade de numeros que vc quer: \n");
    scanf("%d", &qdt);

    for(i=0;i<qdt;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num);

        fprintf(arq_num, "%d\n", num);
    }
    fclose(arq_num);
    printf("Dados salvos com sucesso!\n");

    arq_num = fopen("numeros.txt", "r");
    arq_par = fopen("pares.txt", "w");
    arq_impar = fopen("impares.txt", "w");

    if(arq_num == NULL || arq_par == NULL || arq_impar == NULL){
        printf("ERRO!\n");
        return 1;
    }
    while (fscanf(arq_num, "%d", &num) != EOF) {
        if(num %2 == 0){
            fprintf(arq_par, "%d\n", num);
        } else {
            fprintf(arq_impar, "%d\n", num);
        }
    }
    fclose(arq_num);
    fclose(arq_par);
    fclose(arq_impar);

    printf("Processo concluido!\n");
    return 0;
}