#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int ci = 0;
    
    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        do {
            printf("Número %d: ", i+1);
            scanf("%d", &vetor1[i]);
            if(vetor1[i] < 0 || vetor1[i] > 50) {
                printf("ERRO!\n");
            }
        } while(vetor1[i] < 0 || vetor1[i] > 50);
        
     
        if(vetor1[i] % 2 != 0) {
            vetor2[ci] = vetor1[i];
            ci++;
        }
    }
    
    printf("\nPrimeiro vetor:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if((i+1) % 2 == 0) printf("\n");
    }
    
    printf("\nSegundo vetor:\n");
    for(int i = 0; i < ci; i++) {
        printf("%d ", vetor2[i]);
        if((i+1) % 2 == 0) printf("\n");
    }
    if(ci % 2 != 0) printf("\n");
    
    return 0;
}