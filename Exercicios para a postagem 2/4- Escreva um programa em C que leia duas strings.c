#include <stdio.h>
#include <string.h>
int main () {
    char p1[30];
    char p2[30];

    puts("digite a primeira palavra: ");
    gets(p1);

    puts("digite a segunda palavra: ");
    gets(p2);

    int t1 = strlen(p1);
    int t2 = strlen(p2);

    if(t1 > t2) {
        printf("A primeira é maior!\n");
        printf("%s %s\n", p1, p2);
    } else if (t2 > t1) {
        printf("A segunda é maior!\n");
        printf("%s %s\n", p1, p2);
    } else {
        printf("As duas tem o mesmo tamanho!");
    }

    return 0;
}