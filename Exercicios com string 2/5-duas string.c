#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];
    
    printf("Primeira string: ");
    scanf("%s", str1);
    
    printf("Segunda string: ");
    scanf("%s", str2);
    
   
    strcpy(str3, str1);
    printf("\nTerceira string: %s\n", str3);
    
   
    strcat(str3, str2);
    printf("Terceira string: %s\n", str3);
    
       printf("\nOrdem alfabetica:\n");
    if(strcmp(str1, str2) < 0) {
        printf("%s\n", str1);
        printf("%s\n", str2);
    } else {
        printf("%s\n", str2);
        printf("%s\n", str1);
    }
    
    return 0;
}