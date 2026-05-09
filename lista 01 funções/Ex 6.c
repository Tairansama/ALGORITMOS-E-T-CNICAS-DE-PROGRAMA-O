#include <stdio.h>
float c(float f){
    return ((f - 32) /9) * 5;
}
int main (){
    float f;

    printf("digite em fahrenheit: ");
    scanf("%f", &f);

    printf("celsius = %2.f\n", c(f));
    return 0;
}