#include <stdio.h>
int main () {
    int v, i;

    printf("digite um valor maior que 10: ");
    scanf("%d", &v);

    if (v > 10) {
        for (i=1; i<=v; i++) {
            printf("%d", i);
        }
        printf("\n");
    } else {
        printf("valor invalido! É MAIOR QUE 10!!!!\n");
    }
    

    return 0;
}