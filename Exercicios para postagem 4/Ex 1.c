#include <stdio.h>
int p(int b, int e){
    int r = 1;

    for(int i=0; i < e; i++){
        r = r * b;
    }
    return r;
}
int main (){
    int b, e;

    printf("digite a base e depois o expoente: ");
    scanf("%d %d", &b, &e);

    printf("Resultado: %d\n", p(b, e));
    return 0;
}