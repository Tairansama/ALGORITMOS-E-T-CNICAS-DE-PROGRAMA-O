#include <stdio.h>
#include <string.h>
int main () {
    char p1[50];
    char p2[50];
    char p3[50];
    char p4[50];
    char p5[50];

    puts("digite 01: ");
    gets(p1);

    puts("digite 02: ");
    gets(p2);

    puts("digite 03: ");
    gets(p3);

    puts("digite 04: ");
    gets(p4);

    strcat(p1, " ");
    strcat(p2, " ");
    strcat(p3, " ");
    strcat(p4, " ");

    strcat(p5, p1);
    strcat(p5, p2);
    strcat(p5, p3);
    strcat(p5, p4);

    printf("frase digitada: %s\n", p5);


    return 0;
}