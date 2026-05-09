#include <stdio.h>
float a(float r){
    return 3.14 * r * r;
}
float p(float r){
    return 2 * 3.14 * r;
}
int main (){
    float r;

    printf("digite o raio: ");
    scanf("%f", &r);

    printf("Area = %.2f\n", a(r));
    printf("Perimetro = %.2f\n", p(r));
    return 0;
}