#include <stdio.h>
int main() {
    float m[3][6];
    float s = 0, media;
    
    printf("Digite os valores da matriz 3x6:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 6; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%f", &m[i][j]);
        }
    }


    for(int i = 0; i < 3; i++) {
        for(int j = 1; j < 6; j += 2) {
            s += m[i][j];
        }
    }
    printf("\n(a) Soma colunas ímpares: %.2f\n", s);


    float s2 = 0, s4 = 0;
    for(int i = 0; i < 3; i++) {
        s2 += m[i][1];
        s4 += m[i][3];
    }
    media = (s2 + s4) / 6;
    printf("(b) Média colunas 2 e 4: %.2f\n", media);


    for(int i = 0; i < 3; i++) {
        m[i][5] = m[i][0] + m[i][1];
    }

    printf("\nMatriz final:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 6; j++) {
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}