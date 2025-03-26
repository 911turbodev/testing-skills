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
        
        break;
    }
    case 2: {
        break;
    }
    }
    return 0;
}
