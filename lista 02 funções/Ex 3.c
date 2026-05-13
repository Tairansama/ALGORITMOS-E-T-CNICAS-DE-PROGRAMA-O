#include <stdio.h>

float celsius(float f) {
    return ((f - 32) / 9) * 5;
}

int main() {
    float fahrenheit;
    
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    printf("%.2f°F equivalem a %.2f°C\n", fahrenheit, celsius(fahrenheit));
    
    return 0;
}