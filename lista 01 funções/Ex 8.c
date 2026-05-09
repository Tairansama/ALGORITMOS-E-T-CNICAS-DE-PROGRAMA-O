#include <stdio.h>

float pesoideal(float h, int sexo) {

    if(sexo == 1)
        return (62.1 * h) - 44.7;

    return (72.7 * h) - 58;
}

int main() {

    float altura, peso, ideal;
    int sexo;

    printf("Digite altura peso sexo(1-fem 2-masc): ");
    scanf("%f %f %d", &altura, &peso, &sexo);

    ideal = pesoideal(altura, sexo);

    printf("Peso ideal = %.2f\n", ideal);

    if(peso > ideal)
        printf("Acima do peso ideal\n");
    else
        printf("Abaixo do peso ideal\n");

    return 0;
}