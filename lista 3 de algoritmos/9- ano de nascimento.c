#include <stdio.h>
int main () {
    int n, a, t;

    printf("digite o ano atual: ");
    scanf("%d", &a);

    printf("digite o ano de nascimento: ");
    scanf("%d", &n);

    t = (a - n);

    printf("sua idade autal é: %d", t);
    
    return 0;
}