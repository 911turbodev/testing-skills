#include <stdio.h>
int main()
{
    int opcion;

    do{
        //mostrar el menu
    printf("Menu de opciones: \n");
    printf("1. Operaciones matematicas\n");
    printf("2. Ordenar 3 numeros\n");
    printf("3. Tabla de multiplicar\n");
    printf("4. Exit\n");
    printf("Ingrese una opcion: \n");
    scanf("%d", &opcion);

    switch (opcion){

    case 1:{
    int subopcion;
    int num1, num2;

        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("Ingrese una subopcion:");
        scanf("%d", &subopcion);
        switch (subopcion){
        case 1:
            printf("Ingrese dos numeros para sumar: \n");
            scanf("%d %d",&num1 , &num2);
            printf("Resultado: %d\n",num1 + num2);
            break;
        
        case 2:
        printf("Ingrese dos numeros para restar: \n");
            scanf("%d %d",&num1 , &num2);
            printf("Resultado: %d\n",num1 - num2);
            break;
        default:
            printf("Subopcion invalida\n");
            break;
         }
        break;
     }
    case 2: {
        int a, b, c;
            printf("\nIngrese tres numeros: ");
            scanf("%d %d %d", &a, &b, &c);

            // Ordenar los números de menor a mayor
            if (a > b) { int temp = a; a = b; b = temp; }
            if (b > c) { int temp = b; b = c; c = temp; }
            if (a > b) { int temp = a; a = b; b = temp; }

            printf("Numeros ordenados: %d %d %d\n", a, b, c);
            break;
        }

        case 3: {
            int n, i;
            printf("\nIngrese un numero para la tabla de multiplicar: ");
            scanf("%d", &n);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", n, i, n * i);
            }
            break;
        }

        case 4:
            printf("\nSaliendo del programa...\n");
            exit(0);

        default:
            printf("\nOpcion no valida, intente de nuevo.\n");
            break;
        }
    }while (opcion != 4); // Repetir hasta que el usuario elija salir

    return 0;
}
