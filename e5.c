#include <stdio.h>
int main()
{
    int opcion, a, b;
    do {
    printf("Calculadora\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Finalizar programa\n");
    printf("Ingrese una opcion por teclado\n");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1: //suma
        printf("Ingrese dos numeros para sumar:\n");
        scanf("%d %d", &a, &b);
        printf("Resultado: %d",a+b);
        break;
    
    default:
        break;
    }
    }while (opcion !=5);
    return 0;
}
