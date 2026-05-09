#include <stdio.h>
int main () {
    char m[100];
    int a=0, e=0, i=0, o=0, u=0;
    int c;

    printf("digite sua mensagem: ");
    scanf("%s", &m);

    for(c=0; m[c] != '\0'; c++){
        switch(m[c]){
            case 'a':
            case 'A': a++;
            break;

            case 'e':
            case 'E': e++;
            break;

            case 'i':
            case 'I': i++;
            break;

            case 'o':
            case 'O': o++;
            break;

            case 'u':
            case 'U': u++;
            break;
        }
    }

    printf("\nA: %d\n", a);
    printf("E: %d\n", e);
    printf("I: %d\n", i);
    printf("O: %d\n", o);
    printf("U: %d\n", u);



    return 0;
}