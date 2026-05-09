#include <stdio.h>
#include <string.h>
int main () {
    char p1[50];
    char p2[50];
    char p3[50];
    char t[50];

    puts("digite a primeria palavra: ");
    gets(p1);

    puts("digite a segunda palavra: ");
    gets(p2);

    puts("digite a terceira palavra: ");
    gets(p3);

    if(strcmp(p1, p2) < 0) {
        strcmp(t, p1);
        strcmp(p1, p2);
        strcmp(p2, t);
    } 
    if (strcmp(p1, p3) < 0) {
        strcmp(t, p1);
        strcmp(p1, p3);
        strcmp(p3, t);
    }
    if (strcmp(p2, p3) < 0) {
        strcmp(t, p2);
        strcmp(p2, p3);
        strcmp(p3, t);
    }

    printf("ordem decrescente: \n");
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);



    return 0;
}