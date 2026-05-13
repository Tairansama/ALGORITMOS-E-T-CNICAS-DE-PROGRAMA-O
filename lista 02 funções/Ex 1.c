#include <stdio.h>
int p(int n){
    if(n %2 == 0){
        printf("PAR!\n");
    } else {
        printf("IMPAR!\n");
    }
    return n;
}
int main(){
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    p(n);
    return 0;
}