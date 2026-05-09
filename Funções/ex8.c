#include <stdio.h>
float c(float rad){
    return rad * 180 / 3.14;
}
int main () {
    float rad;

    printf("digite o valor em radianos: ");
    scanf("%f", &rad);

    printf("graus: %.2f\n", c(rad));
    return 0;
}