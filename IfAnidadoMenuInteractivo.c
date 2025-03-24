#include <stdio.h>
int main()
{
    int opcion;
do {
    printf("Menu de opciones:\n");
    printf("1. Operaciones matematicas\n");
    printf("2. Juegos\n");
    printf("3. Exit\n");
    printf("Seleccione una opcion: \n");
    scanf("%d", &opcion);
    if (opcion == 1)
    {//primer nivel de decicion
        int subopcion, n1, n2;
        printf("\nSeleccione la operacion:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("Seleccione una subopcion: \n");
        scanf("%d", &subopcion);
        
        if (subopcion == 1)
        {
            printf("Ingrese dos numeros para realizar la suma: \n");
            scanf("%d %d", &n1, &n2);
            printf("Resultado: %d\n",n1 + n2);
        }else if (subopcion == 2)
        {
            printf("Ingrese dos numeros para restar: \n");
            scanf("%d %d", &n1, &n2);
            printf("Resultado: %d\n", n1 - n2);
        }else 
        {
            printf("Subopcion invalida.\n");
        }
    }else if (opcion == 2)
    {//opcion 2 del primer nivel de decision
        printf("Ingresado a juegos...\n");
    }else if (opcion == 3) 
    {
        printf("Gracias por usar el menu.");
        break;
    }else if (opcion > 3 || opcion < 1){
        printf("Opcion invalida.\n");
        break;
    }
} while (opcion != 3);
    return 0;
}
