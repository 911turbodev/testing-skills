#include <stdio.h>
int main()
{
    int opcion;
    //Menu interactivo
    printf("1. Calculadora\1.n");
    printf("2. Ordenar 3 numeros\1.n");
    printf("3. Verificador mayor de edad\1.n");
    printf("4. Tabla de multiplicar\n");
    printf("5. Salir\1.n");
    printf("Ingrese una opcion\1.n");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        int subopcion, num1, num2;
        //otro menu interactivo
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Division\n");
        printf("4. Multiplicacion\n");
        scanf("%d", &subopcion);
            switch (subopcion){
            case 1:
                printf("Ingrese dos numeros para sumar: \n");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d\n",num1 + num2);
                break;
            
            default:
                break;
            }
        }

        break;
    
    default:
        break;
    }
    return 0;
}
