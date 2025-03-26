#include <stdio.h>
int main()
{
    int opcion, subopcion;
    //switch dentro de otro switch cortito para practicar
    printf("Menu\n");
    printf("1. Calculadora\n");
    printf("2. Tabla de multiplicar\n");
    printf("3. Salir\n");
    printf("Ingrese una opcion\n");
    scanf("%d", &opcion);
    switch (opcion){
    case 1:{
        printf("Menu calculadora\n");
        printf("1. Suma y resta\n");
        printf("2. Multiplicacion y division\n");
        printf("Ingrese una opcion\n");
        scanf("%d", &subopcion);
        switch (subopcion){
            case 1:
            int a,b,opc;
                printf("Ingrese dos numeros para sumar o restar\n");
                scanf("%d %d", &a, &b);
                printf("Si realizar una suma ingrese 1 sino 2 para la resta\n");
                scanf("%d",&opc);
                if (opc == 1){
                    printf("%d + %d\n",a,b,a+b);
                }else {
                    printf("%d - %d\n",a,b,a-b);
                }
            break;
        }
    }
    case 2: {
        break;
    }
    }
    return 0;
}
