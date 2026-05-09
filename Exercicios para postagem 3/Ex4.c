#include <stdio.h>
int main() {
    int NA, NMB, NMA;
    float altura, MB, MA;
    
    
    printf("Conjunto 1:\n");
    printf("Número do aluno: ");
    scanf("%d", &NA);
    printf("Altura em metros: ");
    scanf("%f", &altura);
    
    MB = altura;
    MA = altura;
    NMB = NA;
    NMA = NA;
    

    for(int i = 2; i <= 10; i++) {
        printf("\nConjunto %d:\n", i);
        printf("Número do aluno: ");
        scanf("%d", &NA);
        printf("Altura em metros: ");
        scanf("%f", &altura);
        
        if(altura < MB) {
            MB = altura;
            NMB = NA;
        }
        if(altura > MA) {
            MA = altura;
            NMA = NA;
        }
    }
    
    printf("\nResultados:\n");
    printf("Aluno mais baixo: Nº %d com altura %.2f m\n", NMB, MB);
    printf("Aluno mais alto: Nº %d com altura %.2f m\n", NMA, MA);
    
    return 0;
}