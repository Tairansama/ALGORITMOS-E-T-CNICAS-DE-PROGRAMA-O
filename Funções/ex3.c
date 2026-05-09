#include <stdio.h>
int a(int num) {
    return num - 1;
}
int main () {
    int num;

    printf("digiteb o numero: ");
    scanf("%d", &num);

    printf("antecessor = %d\n", a(num));

    return 0;
}