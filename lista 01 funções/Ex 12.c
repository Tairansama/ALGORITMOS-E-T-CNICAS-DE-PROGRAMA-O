#include <stdio.h>
int c(int a, int b, char op){
    if(op == '+'){
        return a + b;
    } if(op == '-'){
        return a - b;
    } if (op == '*') {
        return a * b;
    } if (op == '/'){
        return a / b;
    }
    return 0;
}
int main (){
    int a, b;
    char op;

    printf("digite dois numeros seguido da operação desejada: ");
    scanf("%d %d %c", &a, &b, &op);

    if(op == '+' || op == '-' || op == '*' || op == '/'){
        printf("resultado = %d\n", c(a, b, op));
    } else {
        printf("operaçao impossivel!\n");
    }
    return 0;
}