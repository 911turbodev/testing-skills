#include <stdio.h>
#include <string.h>

//Escribe un programa en C que pida al usuario un número entero positivo y 
//verifique si es un número primo. 
//El programa debe seguir pidiendo números hasta que el usuario ingrese un cero, 
//en cuyo caso terminará mostrando un mensaje de despedida.
//Pistas: 
//Usar un bucle while para controlar la repetición del programa hasta que se ingrese un 
//número no válido.
//Usar una estructura if para determinar si el número ingresado es primo o no.


int main()
{
   int num, i=0, primo=1;
   printf("Ingrese un numero para verificar si es primo (0 para salir): ");
   scanf("%i", &num);
   
   do{
           if (num > 0){
               if (num % 2 == 0){
                printf("%d: Es primo\n",num);
            }else if ("num % 2 == 1"){
                printf("%d: No es primo",num);
                }else
                    printf("gracias\n");
            }     
        }while (num != 0);
    printf("\nFinalizando el programa...\n");



    return 0;
}