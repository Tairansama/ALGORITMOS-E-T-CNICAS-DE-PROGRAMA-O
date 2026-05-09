#include <stdio.h>
int main() {
    int c;
    float a, p;
    float ma = 0, mp = 0;
    int ca = 0, cg = 0;

    float soma = 0;
    int t = 0;

    while (1) {
        printf("Digite o codigo (0 para sair): ");
        scanf("%d", &c);

        if (c == 0) {
            break;
        }

        printf("Digite a altura: ");
        scanf("%f", &a);

        printf("Digite o peso: ");
        scanf("%f", &p);

        if (a > ma) {
            ma = a;
            ca = c;
        }

        
        if (p > mp) {
            mp = p;
            cg = c;
        }

        soma += p;
        t++;
    }

    if (t > 0) {
        printf("\nMais alto: codigo %d, altura %.2f\n", ca, ma);
        printf("Mais gordo: codigo %d, peso %.2f\n", cg, mp);
        printf("Media dos pesos: %.2f\n", soma / t);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}