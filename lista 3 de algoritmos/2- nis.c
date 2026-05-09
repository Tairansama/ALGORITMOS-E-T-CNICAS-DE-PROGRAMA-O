#include <stdio.h>
int main () {
    int i, s;
    char n[50];

    printf("digite seu nome: ");
    scanf("%s", &n);

    printf("digite sua idade: ");
    scanf("%d", &i);

    printf("digite seu sexo: 1- masculino / 2- feminino ");
    scanf("%d", &s);

    if (i>=25 && s == 2){
        printf("%s aceita!", n);
    }   else {
        printf("não aceita!");
    }
    

    return 0;
}