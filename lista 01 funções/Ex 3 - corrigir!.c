#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c) {

    float delta, x1, x2;

    delta = (b*b) - (4*a*c);

    if(delta < 0) {
        printf("Nao existem raizes reais\n");
    }
    else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}

int main() {

    float a, b, c;

    printf("Digite a b c: ");
    scanf("%f %f %f", &a, &b, &c);

    bhaskara(a, b, c);

    return 0;
}