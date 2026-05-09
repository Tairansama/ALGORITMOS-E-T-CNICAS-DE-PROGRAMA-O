#include <stdio.h>
int main () {
    int i;

    printf("numeros: ");
    printf("========================\n");

    for (i = 500; i<=1500; i++) {
        if (i % 7 == 3) {
            printf("%d", i);
        }
    }

    printf("\n");

    return 0;
}