#include <stdio.h>

int main() 
{
    
    int opcion;
    float saldo = 10000.0, ingreso, retiro;

    do {
    printf("Menu cajero automatico\n");
    printf("1. Ingresar dinero.\n");
    printf("2. Retirar dinero.\n");
    printf("3. Consultar saldo.\n");
    printf("4. Para salir del menu.\n");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("Ingrese la cantidad que desea ingresar a su cuenta.\n");
        scanf("%f",&ingreso);
        printf("Monto ingresado correctamente.\n");
        saldo +=ingreso;
        printf("Su saldo disponible es: $%.2f\n\n",saldo);
        break;
    case 2:
        printf("Su saldo disponible es: $%.2f\n",saldo);    
        printf("Ingrese la cantidad que desea retirar.\n");
        scanf("%f", &retiro);
        if (retiro <= saldo){
            saldo -=retiro;
            printf("Saldo retirado correctamente.\nSu saldo actual es de: $%.2f\n\n",saldo);
        }else {
            printf("Monto a retirar invalido.\n\n");
        }
        break;
    case 3: 
        printf("Su saldo actual disponible: $%.2f\n\n",saldo);
        break;
    case 4: 
        printf("\n\nGracias por usar el cajero automatico.\n\n");
        break;
    default:
        printf("Opcion invalida.\n\n");
        break;
        }
    } while (opcion != 4);
    
    return 0;
    //version finalizada del cajero
    //mas adelante agregare actualizaciones a medida que avance con mis conocimientos 03-22-2025
    //version v.1
}
