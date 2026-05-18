#include <stdio.h>
int soma(int n){
    if(n <= 1){
        return 1;
    }
    return n + soma(n-1);
}
int main (){
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    if(n<1){
        printf("numero tem que ser maior que zero!\n");
    } else {
        int r = soma(n);
        printf("a soma de 1 ate %d e: %d\n", n, r);
    }
    return 0;
}