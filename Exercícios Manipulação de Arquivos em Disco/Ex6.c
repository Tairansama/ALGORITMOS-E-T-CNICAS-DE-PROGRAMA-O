#include <stdio.h>
int main(){
    FILE *arq;
    char car;
    int l = 0;
arq = fopen("teste.txt", "w");
if(arq == NULL){
    printf("ERRO!\n");
    return 1;
}
fprintf(arq, "digite a primeira linha:\n");
fprintf(arq, "digite a segunda linha:\n");
fprintf(arq, "digite a terceira linha:\n");
fclose(arq);

arq = fopen("teste.txt", "r");
if(arq == NULL){
    printf("ERRO!\n");
    return 1;
}
while ((car = fgetc(arq)) != EOF){
    if(car == '\n'){
        l++;
    }
}
fclose(arq);
printf("Dados salvos com sucesso!\n");
return 0;
}