#include <stdio.h>
void m(float n1, float n2){
    float m;

    m = (n1 + n2) /2;

    printf("media = %.2f\n", m);

    if(m >= 6){
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
}
int main (){
    float n1, n2;

    printf("digite as duas notas: ");
    scanf("%f %f", &n1, &n2);

    m(n1, n2);
    return 0;
}