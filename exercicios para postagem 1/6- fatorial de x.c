#include <stdio.h>
int main () {
    int x, i;
    int f=1;

    printf("digite um numero: ");
    scanf("%d", &x);

    for (i=1; i <= x; i++){
        f = f * i;
    }

    printf("%d! = %d\n", x, f);

    return 0;
}