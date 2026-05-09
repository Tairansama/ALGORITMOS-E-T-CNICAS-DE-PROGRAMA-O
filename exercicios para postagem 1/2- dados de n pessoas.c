#include <stdio.h>
int main () {
    int N, i;
    int idade, qth, qtm;
    float a, sam = 0, sih = 0;
    char s;

    printf("digite a quantidade de pessoas: ");
    scanf("%d", &N);

    for (i = 1; i<= N; i++) {
        printf("-----pessoa %d-----", i);


        printf("idade: ");
        scanf("%d", &idade);

        printf("altura: ");
        scanf("%f", &a);

        printf("M (para masculino) / F (para feminino): ");
        scanf(" %c", &s);

        if (s == 'F' || s == 'f') {
            sam = sam + a;
            qtm++;
        } else if (s == 'M' || s == 'm') {
            sih = sih + idade;
            qth++;
        }

    }

        printf("resultados:");

        if (qtm > 0) {
            float mam = sam / qtm;
            printf("media da altura das mulheres: %.2f metros\n", mam);
        } else {
            printf("nenhuma mulher cadastrada\n");
        }

            if (qth > 0) {
                float mih = sih / qth;
                printf("media da idade dos homens: %.2f ano\n", mih);
            } else {
                printf("nenhu homen cadastrado");
            }

            printf("total de pessoas cadastradas: %d\n", N);

    return 0;
}