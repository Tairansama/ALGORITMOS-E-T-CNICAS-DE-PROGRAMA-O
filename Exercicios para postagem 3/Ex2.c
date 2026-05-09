#include <stdio.h>

int main() {
    float v[5];
    int c;
    
    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        printf("Posição %d: ", i);
        scanf("%f", &v[i]);
    }
    
    printf("\nDigite o código (0-finalizar, 1-ordem direta, 2-ordem inversa): ");
    scanf("%d", &c);
    
    switch(c) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("\nVetor na ordem direta:\n");
            for(int i = 0; i < 5; i++) {
                printf("%.2f ", v[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("\nVetor na ordem inversa:\n");
            for(int i = 4; i >= 0; i--) {
                printf("%.2f ", v[i]);
            }
            printf("\n");
            break;
        default:
            printf("Código inválido!\n");
    }
    
    return 0;
}