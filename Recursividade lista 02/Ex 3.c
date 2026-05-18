#include <stdio.h>
int p(int x, int k){
    if(k == 0){
        return 1;
    }
    return x * p(x, k - 1);
}
int main (){
    int r = p(3, 4);

    printf("resultado: %d\n", r);
    return 0;
}