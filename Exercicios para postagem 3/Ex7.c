#include <stdio.h>
int main() {
    int matriz[3][3];
    int array[3] = {0, 0, 0};
    
    printf("Digite os valores da matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < 3; i++) {
            array[j] += matriz[i][j];
        }
    }
    
    printf("\nsoma das colunas:\n");
    for(int j = 0; j < 3; j++) {
        printf("%d ", array[j]);
    }
    printf("\n");
    
    return 0;
}