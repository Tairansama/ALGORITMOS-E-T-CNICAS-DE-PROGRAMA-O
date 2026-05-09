#include <stdio.h>
#include <string.h>
int main () {
    char a[50];
    char b[50];

    puts("digite a primeira palavra: ");
    gets(a);

    puts("digite a segunda palavra: ");
    gets(b);

    strcmp(a, b);
    printf("%d", strcmp(a, b));



    return 0;
}