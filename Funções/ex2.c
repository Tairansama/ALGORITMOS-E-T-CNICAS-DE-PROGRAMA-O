#include <stdio.h>
void bv(char n[]) {
    printf("Bem-vindo! %s\n", n);
}
int main (){
    char n[50];

    printf("digite seu nome: ");
    scanf("%s", n);

    bv(n);

    return 0;
}