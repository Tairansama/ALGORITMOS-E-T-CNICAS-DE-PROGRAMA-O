#include <stdio.h>

int main() {
    int n, i;
    int d = 1;
    float s = 0.0;
    

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float termo = (float)i / d;
        
        printf("Termo %d: %d/%d = %.2f\n", i, i, d, termo);
        
        s += termo;
        d += 2;
    }

    printf("\nSoma da serie = %.2f\n", s);

    return 0;
}