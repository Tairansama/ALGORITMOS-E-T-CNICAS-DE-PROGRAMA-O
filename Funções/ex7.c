#include <stdio.h>
float cimc(float p, float a){
    return p / (a * a);
}
int main (){
    float p, a, imc;

    printf("digite seu peso e altura: ");
    scanf("%f %f", &p, &a);

    imc = cimc(p, a);

    printf("imc = %.2f\n", imc);

    if(imc < 18.5){
        printf("abaixo do peso\n");
    } else if (imc <= 25){
        printf("peso normal\n");
    } else if (imc <= 30) {
        printf("acima do peso\n");
    } else {
        printf("obeso\n");
    }
    return 0;
}