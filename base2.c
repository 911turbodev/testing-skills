#include <stdio.h>

int main() {
    int base, exponente, i;
    char continuar;

    do {
        int resultado = 1;
        base = 2;
        printf("Ingrese exponente:\n");
        scanf("%d",&exponente);

        //bucle for para calcular la potencia
        for (i = 0; i < exponente; i++){
            resultado *= base;
        }
        printf("%d elevado a la %d es: %d\n", base, exponente, resultado);
        
    } while (exponente != -1);
    return 0;
}
