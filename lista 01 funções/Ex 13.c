#include <stdio.h>

int fatorial(int n) {

    int fat = 1;

    for(int i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int potencia(int a, int b) {

    int p = 1;

    for(int i = 0; i < b; i++) {
        p *= a;
    }

    return p;
}

int calculadora(int a, int b, char op) {

    if(op == '+') return a+b;
    if(op == '-') return a-b;
    if(op == '*') return a*b;
    if(op == '/') return a/b;
    if(op == '%') return a%b;
    if(op == '^') return potencia(a,b);

    return 0;
}

int main() {

    int a, b;
    char op;

    printf("Digite: ");
    scanf("%d %d %c", &a, &b, &op);

    if(op == '!') {
        printf("Fatorial = %d\n", fatorial(a));
    }
    else {
        printf("Resultado = %d\n", calculadora(a,b,op));
    }

    return 0;
}