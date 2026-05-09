#include <stdio.h>
void p(int l, float m){
    if(l == 3){
        printf("TRIANGULO\n");
        printf("Perimetro = %.2f\n", l * m );
    } else if (l == 4) {
        printf("QUADRADO\n");
        printf("Area = %.2f\n", m * m);
    } else if (l == 5){
        printf("PENTAGONO\n");
    }
}
int main (){
    int l;
    float m;

    printf("digite lado e medida: ");
    scanf("%d %f", &l, &m);

    p(l, m);
    return 0;
}