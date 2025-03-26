#include <stdio.h>
int main()
{
    int opcion, a, b;
    do{
    printf("Primero ingrese dos numeros por teclado para poder elegir una operacion\n");
    scanf("%d %d", &a, &b);
    printf("Calculadora simple\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Salir\n");
    printf("Ingrese una opcion por teclado:\n");
    scanf("%d",&opcion);
    switch (opcion)
    {
    case 1:
        printf("|Suma| Restulado: %d\n\n",a+b);
        break;
    case 2:
        printf("|Resta| Resultado: %d\n\n",a-b);
        break;
    case 3: 
        printf("|Multiplicacion| Resultado: %d\n\n",a*b);
        break;
    case 4: 
        if (b > 0 || b < 0){
           printf("|Division| Resultado: %d\n\n",a/b); 
        }else if (b == 0){
            printf("Divisor no puede ser 0\n\n");
        }
        break;
    case 5: 
        printf("Finalizando programa...\n\n");
        break;
    default:
        printf("Opcion invalida.\n\n");
        break;
    }
    }while (opcion != 5);
    return 0;
}
