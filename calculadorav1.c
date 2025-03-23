#include <stdio.h>
int main()
{  
    int opcion;
    int num1, num2, num3, resultado;

do {
    printf("\nMenu calculadora\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("6. Ordenar de mayor a menor tres valores\n");
    printf("7. Salir\n");
    printf("Elija una opcion para empezar\n");
    scanf("%d", &opcion);
    
    switch (opcion)
    {
    case 1:
        printf("\nIngrese dos numeros para sumar\n");
        scanf("%d %d", &num1, &num2);
        printf("\nResultado: %d\n",num1 + num2);
        break;
    
    case 2:
        printf("\nIngrese dos numeros para restar\n");
        scanf("%d %d", &num1, &num2);
        printf("\nResultado: %d\n",num1 - num2);
        break;    

    case 3:
        printf("\nIngrese dos numeros para multiplicar\n");
        scanf("%d %d", &num1, &num2);
        printf("\nResultado: %d\n",num1 * num2);
    default:
        break;
    }


} while (opcion != 7);

    return 0;
}
//v1.1 
//suma hecha
//resta hecha
//multiplicacion hecha