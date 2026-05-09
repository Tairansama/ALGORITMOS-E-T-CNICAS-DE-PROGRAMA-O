#include <stdio.h>
int p(){
    int num;
    int i;

    do{
        printf("digite um numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}
int somad(int n){
    int soma = 0;
    int i;

    for (i=1;i<n;i++){
        if(n % i == 0){
            soma += 1;
        }
    }
    return soma;
}
int main (){
    int num;
    int i;

    for(i=0;i<5;i++){
        num = p();
        printf("soma dos divisores: %d\n", somad(num));
    }
    return 0;
}