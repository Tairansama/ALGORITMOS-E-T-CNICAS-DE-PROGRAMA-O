#include <stdio.h>
void v(int num) {
    if(num == 0)
        printf("ZERO\n");
    else if (num %2 == 0) 
        printf("PAR\n");
    else
        printf("IMPAR\n");
}
int main () {
    int num; 

    printf("digite um numero: ");
    scanf("%d", &num);

    v(num);

    return 0;
}