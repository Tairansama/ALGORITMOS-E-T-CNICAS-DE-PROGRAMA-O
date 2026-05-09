#include <stdio.h>
#include <string.h>

int main () {
    char palavra[20], palavra2[10];
    int num;
    puts("digite: ");
    gets(palavra);

    printf("digite a segunda palavra:\n");
    gets(palavra2);

    strcat(palavra, palavra2);
    puts(palavra);

    strcpy(palavra, palavra2);
    puts(palavra);

    if(strcmp(palavra, palavra2)==0) {
        puts("iguais");
    } else {
        printf("diferentes\n");
    }

    num=strlen(palavra);

   

    return 0;
}