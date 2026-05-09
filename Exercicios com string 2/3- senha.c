#include <stdio.h>
#include <string.h>
int main (){
    char a[50];
    char b[50];

    puts("digite sua senha: ");
    gets(a);

    puts("digite novamente para confirmar: ");
    gets(b);

    if(strcmp(a,b)==0){
        printf("bem vindo!");
    } else {
        printf("Senha errada!");
    }

    return 0;
}