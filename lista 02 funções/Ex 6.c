#include <stdio.h>
float pa(float nl, float ml){
    if (nl == 3){
        float pe = nl * ml;
        printf("poligano: TRIANGULO!\n");
        printf("perimetro: %.2f cm\n", pe);
    }
    else if (nl == 4){
        float area = ml * ml;
        printf("poligano: QUADRADO!\n");
        printf("area: %.2f cm²\n", area);
    }
    else if (nl == 5){
        printf("poligano: PENTAGONO\n");
    }
}
int main(){
    int l;
    float m;

    printf("digite um numero: ");
    scanf("%d", &l);

    printf("digite um lado: ");
    scanf("%f", &m);
    
    pa(l,m);

    return 0;
}