#include <stdio.h>
int f(int n){
    int fat =1;

    for(int i=1; i<= n; i++){
        fat = fat * i;
    }
    return fat;
}
int main (){
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    printf("fatorial = %d\n", f(n));
    return 0;
}