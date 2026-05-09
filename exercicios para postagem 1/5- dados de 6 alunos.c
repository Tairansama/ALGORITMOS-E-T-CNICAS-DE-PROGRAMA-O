#include <stdio.h>
int main () {
    int cod, i;
    int codM, codN;
    float n, maior, menor, s=0, m;
    
    maior = -1;
    menor = 11;

    printf("cadastro de alunos: \n");

    for(i=1; i<=6; i++) {
        printf("aluno %d\n", i);

        printf(" codigo ");
        scanf("%d", &cod);

        printf(" nota ");
        scanf("%f", &n);

        while (n < 0 || n > 10) {
            printf("nota invalida! somente entre 0 a 10");
            scanf("%f", &n);
        }
        s = s + n;

        if (n > maior) {
            maior = n;
            codM = cod;
        }

        if (n < menor) {
            menor = n;
            codN = cod;
        }
        printf("\n");
    }
        m = s/6;

        printf(" resultados ");
        printf("maior nota: %.2f aluno%d\n", maior, codM);
        printf("menor nota: %.2f aluno%d\n", menor, codN);
        printf("media da turma: %.2f\n", m);

    return 0;
}