#include <stdio.h>

int main() {
    int vetor[100];
    int c = 0;
    int n = 1;
    
    while(c < 100) {
        if(n % 7 != 0) {
            vetor[c] = n;
            c++;
        }
        n++;
    }
    
    printf("Primeiros 100:\n");
    for(int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if((i+1) % 10 == 0) printf("\n");
    }
    
    return 0;
}