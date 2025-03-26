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
        printf("Resultado: %d\n\n",a+b);
        break;
    case 2: //resta
        printf("Ingrese dos numeros para restar:\n");
        scanf("%d %d", &a, &b);
        printf("Resultado: %d\n\n",a-b);\
        break;
    case 3: //multiplicacion
        printf("Ingrese dos numeros para multiplicar:\n");
        scanf("%d %d",&a, &b);
        printf("Resultado: %d\n\n",a*b);
        break;
    case 4: //division
        printf("Ingrese dos numeros para dividir:\n");
        scanf("%d %d", &a, &b);
        if (b > 0){
            printf("Resultado: %d\n\n",a/b);
        }else 
            printf("El divisior no puede ser 0\n\n");
        break;
    case 5: //finalizar
        printf("Finalizando el programa...\n");
        break;
    default:
        printf("Opcion invalida\n");
        break;
    }
    }while (opcion !=5);
    return 0;
}
