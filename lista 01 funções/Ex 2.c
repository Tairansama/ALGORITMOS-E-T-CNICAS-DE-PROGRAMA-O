#include <stdio.h>
int f(int n){
    int fat = 1;

    for(int i=1; i<= n; i++){
        fat *= i;
    }
    return fat;
}
int main (){
    int n, p, c;

    printf("digite n e p: ");
    scanf("%d %d", &n, &p);

    c = f(n) / (f(p) * f(n-p));

    printf("combinação = %d\n", c);
    return 0;
}