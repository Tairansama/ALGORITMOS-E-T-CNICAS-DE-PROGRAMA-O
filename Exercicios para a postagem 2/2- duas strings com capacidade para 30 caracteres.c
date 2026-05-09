#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char a[30];
    char b[30];

    puts("digite: ");
    gets(a);

    strcpy(b, a);

    for(int i = 0; b[i] != '\0'; i++) {
        b[i] = toupper(b[i]);
    }

    printf("primeria string: %s\n", a);
    printf("segunda string: %s\n", b);


    return 0;
}