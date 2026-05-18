#include <stdio.h>
double soma(int n){
    if(n == 1){
        return 1.0;
    }
    return (1.0 / n) + soma(n - 1);
}
int main (){
    int n = 4;

    if(n > 0){
        double r = soma(n);
        printf("soma: N = %d e %lf\n", n, r);
    } else {
        printf("ERRO!\n");
    }
    return 0;
}
