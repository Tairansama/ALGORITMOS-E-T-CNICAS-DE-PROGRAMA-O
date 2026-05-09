#include <stdio.h>
int main (){
    char p[100];
    int i, j, t=0;

    printf("digite sua palavra: ");
    scanf("%s", &p);

    while (p[t] != '\0') {
        t++;
    }

    for(i=1;i<=t; i++) {
        for (j=1;j<=i;j++) {
            printf("%s ", p);
        }
        printf("\n");
    }


    return 0;
}