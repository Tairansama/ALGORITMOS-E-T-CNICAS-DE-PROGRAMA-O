#include <stdio.h>
int s(int n1, int n2) {
    int s = 0;

    for(int i = n1; i <= n2; i++) {
        s += i;
    }
    return s;
}
int main (){
    int n1, n2;

    printf("digite n1 e n2: ");
    scanf("%d %d", &n1, &n2);

    printf("soma: %d\n", s(n1, n2));

    return 0;
}