#include <stdio.h>
float c(float a, float b, int op){
    if(op == 1) return a + b;
    if(op == 2) return a - b;
    if(op == 3) return a * b;
    if(op == 4) return a / b;
    return 0;
}
int main (){
    int op;
    float a, b;

    printf("1- adição\n2-subtração\n3-multiplicacao\n4-divisao\n5-sair\n");
    scanf("%d", &op);

    if(op >= 1 && op <= 4){
        printf("digite dois valores: ");
        scanf("%f %f", &a, &b);

        printf("resultado: %.2f\n", c(a, b, op));
    }
    return 0;
}