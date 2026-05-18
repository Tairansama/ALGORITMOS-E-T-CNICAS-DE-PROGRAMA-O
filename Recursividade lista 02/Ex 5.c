#include <stdio.h>
int pell(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return 2 * pell(n - 1) + pell(n - 2);
}
int main (){
    int n = 4;

    int r = pell(n);
    printf("o %d enesimo de pell e: %d\n", n, r);
    
    return 0;
}