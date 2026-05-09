#include <stdio.h>

float M(float n1, float n2, float n3, char t) {

    if(t == 'a') {
        return (n1 + n2 + n3) / 3;
    }
    if(t == 'p') {
        return (n1*5 + n2*3 + n3*2) / 10;
    }
    if(t == 'h') {
        return 3 / ((1/n1) + (1/n2) + (1/n3));
    }
    return 0;
}
int main() {
    float n1, n2, n3;
    char t;

    printf("Digite 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite A (aritmetica), P (ponderada) ou H (harmonica): ");
    scanf(" %c", &t);

    printf("Media: %.2f\n", M(n1, n2, n3, t));
    return 0;
}