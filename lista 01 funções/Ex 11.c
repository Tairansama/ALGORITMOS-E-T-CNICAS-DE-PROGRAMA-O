#include <stdio.h>
void t(int n){
    for(int i = 1; i<= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
int main (){
    int n;

    do{
        printf("digite um numero: ");
        scanf("%d", &n);
    } while(n <= 1 || n > 10);

    t(n);
    return 0;
}