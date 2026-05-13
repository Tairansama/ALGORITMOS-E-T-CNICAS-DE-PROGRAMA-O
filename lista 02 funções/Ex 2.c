#include <stdio.h>
#define PI 3.14159 
float a(float r){
    return PI * r * r;
}
float p(float r){
    return PI * 2 * r;
}
int main(){
    float r;
    int op;

    printf("digite o numero: ");
    scanf("%f", &r);

    printf("oque deseja fazer com o numero?\n");
    printf("1 - calcular o raio\n");
    printf("2 - calcular o perimetro\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("Area do circulo: %.2f\n", a(r));
            break;
        case 2:
            printf("perimetro do circulo: %.2f\n", p(r));
            break;
        default:
            printf("opção invalida!\n");
    }
    return 0;
}