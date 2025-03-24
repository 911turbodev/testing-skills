#include <stdio.h>
int main()
{
    int opcion;
    do{
    //Menu interactivo
    printf("Menu interactivo\n");
    printf("1. Calculadora\n");
    printf("2. Ordenar 3 numeros\n");
    printf("3. Verificador mayor de edad\n");
    printf("4. Tabla de multiplicar\n");
    printf("5. Salir\n");
    printf("Ingrese una opcion\n");
    scanf("%d", &opcion);
    switch (opcion)
    {
        case 1: {
            int subopcion, num1, num2;
            printf("1. Suma\n");
            printf("2. Resta\n");
            printf("3. Multiplicacion\n");
            printf("4. Division\n");
            scanf("%d", &subopcion);
            switch (subopcion){
                case 1:
                printf("Ingrese dos numeros para sumar: \n");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d\n\n",num1 + num2);
                break;
                case 2: 
                printf("Ingrese dos numeros para restar: \n");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d\n\n",num1 - num2);
                break;
                case 3: 
                printf("Ingrese dos numeros para multiplicar: \n");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d\n\n",num1 * num2);
                break;
                case 4: 
                printf("Ingrese dos numeros para dividir: \n");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d\n\n",num1 / num2);
                break;
                default:
                    printf("\nSubopcion invalida.\n");
                    break;
            }
            break;
        }
        case 2: {
            int a,b,c,temp;
            printf("Ingrese 3 numeros para ordenar de menor a mayor: \n");
            scanf("%d %d %d", &a, &b, &c);
            if (a > b) { temp = a; a = b; b = temp; }
            if (a > c) { temp = a; a = c; c = temp; }
            if (b > c) { temp = b; b = c; c = temp; }
            printf("\nEl orden de menor a mayor es: %d %d %d\n",a,b,c);
            break;
        }
        case 3:{
            int age;
            printf("Ingrese su edad:\n");
            scanf("%d", &age);
            if (age >= 18){
                printf("Mayor de edad\n");
            }else{
                printf("Menor de edad\n");
            }
         break;
        }
        case 4:{
            int n, i;
            printf("Ingrese un numero para saber la tabla de multiplicar de ese numero:\n");
            scanf("%d",&n);
            if (n > 0 && n <=10){
                for (i = 1; i <=10; i++){
                    printf("  %d x %d = %d\n",n,i,n*i);
            }
            } else {
                printf("Numero fuera de rango.\n");
            }
            break;
            }
            case 5: 
                printf("finalizando menu...\n");
                break;
                default:
                printf("Opcion invalida\n");
                break;
        }
    } while (opcion != 5);
    return 0;
}
