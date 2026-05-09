#include <stdio.h>
#include <string.h>

int main() {
    char gabarito[10];
    char R[10];
    int matricula;
    float nota;
    int aprovados = 0;
    
     printf("Digite o gabarito da prova:\n");
    for(int i = 0; i < 10; i++) {
        printf("Questão %d: ", i+1);
        scanf(" %c", &gabarito[i]);
    }
    
    for(int aluno = 1; aluno <= 3; aluno++) {
        printf("\n--- Aluno %d ---\n", aluno);
        printf("Matrícula: ");
        scanf("%d", &matricula);
        
        printf("Digite as respostas do aluno:\n");
        for(int i = 0; i < 10; i++) {
            printf("Questão %d: ", i+1);
            scanf(" %c", &R[i]);
        }
        
        nota = 0;
        for(int i = 0; i < 10; i++) {
            if(R[i] == gabarito[i]) {
                nota++;
            }
        }
        
        if(nota >= 7.0) {
            aprovados++;
        }
        
        printf("\nMatrícula: %d\n", matricula);
        printf("Respostas: ");
        for(int i = 0; i < 10; i++) {
            printf("%c ", R[i]);
        }
        printf("\nNota: %.1f\n", nota);
    }
    
    printf("\nPercentual de aprovação: %.1f%%\n", (aprovados/3.0)*100);
    
    return 0;
}