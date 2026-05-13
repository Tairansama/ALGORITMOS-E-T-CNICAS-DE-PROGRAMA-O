#include <stdio.h>
float h(float a){
    return (72.7 * a) - 58;
}
float f(float b){
    return (62.1 * b) - 44.7;
}
int main(){
    float a, s;
    int op;

    printf("digite sual altura e sexo(1-fem / 2-masc): ");
    scanf("%f %f %d", &a, &s, &op);

    switch(op){
        case 1:
            printf("peso ideal: %.2f\n", a, s, f(a));
            break;
        case 2:
            printf("peso ideal: %.2f\n", a, s, h(s));
            break;
    }
    return 0;
}