#include <stdio.h>
float m(float n1, float n2){
    return (n1 + n2) / 2;
}
int main(){
    float n1, n2;
    
    printf("digite suas duas notas: ");
    scanf("%f %f", &n1, &n2);
    
    if (m(n1, n2) >= 6.0){
        printf("aprovado!\n");
    } else {
        printf("reprovado!\n");
    }
    return 0;
}