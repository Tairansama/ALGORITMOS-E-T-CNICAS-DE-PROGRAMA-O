#include <stdio.h>
char v(int n){
    if(n % 2 == 0){
        return 'p';

        return 'i';
    }
}
int main (){
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    if (v(n) == 'p'){
        printf("Par!\n");
    } else {
        printf("Impar!\n");
    }
    return 0;
}