#include <stdio.h>

int main() {
    int num = 37; // Vamos a probar con 37
    int i = 2;

    while (i * i <= num) { // Mientras i^2 sea menor o igual a num
        printf("Probando con divisor: %d\n", i);
        if (num % i == 0) {
            printf("%d NO es primo.\n", num);
            return 0;
        }
        i++;
    }
    
    printf("%d ES primo.\n", num);
    return 0;
}