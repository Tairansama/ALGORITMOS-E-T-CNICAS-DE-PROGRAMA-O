#include <stdio.h>
int main () {
    int n, qtdi, qtdp, soma=0;
    float m;

    for (n=1; n<=100; n++){

        if (n % 2 == 0){
            qtdp++;
        } else {
            soma += n;
            qtdi++;
        }
    }
        m = soma/qtdi;

        printf("quantidade de pares: %d", qtdp);
        printf("media dos impares: %.2f", m);

    return 0;
}