#include <stdio.h>
int main()
{
    //condicional IF
    //Escribe un programa que pida un número al usuario e 
    //indique si es positivo, negativo o cero.
    int num;

    do {
    printf("Ingrese un numero por teclado:\n");
    scanf("%d", &num);

    if (num > 0){
        printf("Es positivo\n");
    }else if (num == 0){
        printf("Es igual a 0\n");
    }else 
        printf("Es negativo\n");
    } while (num != -999);
        printf("finalizando programa...\n");
    
    return 0;
}
