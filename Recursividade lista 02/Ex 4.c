#include <stdio.h>
int t(int n){
    if(n == 0){
        return 0;
    } if ( n == 1){
        return 0;
    } if (n == 2) {
        return 1;
    }
    return t(n - 1) + t(n - 2) + t(n - 3);
}
int main (){
    int n = 5;

    int r = t(n);
    printf("resultado:  %d\n", n, r);
    
    return 0;
}