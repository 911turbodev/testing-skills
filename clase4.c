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
    int num,i,esPrimo;
    while (1){
    printf("Ingrese un numero entero positivo, (0 para finalizar)\n");
    scanf("%d",&num);
        if (num == 0){
            printf("Finalizando programa...\n"); break;
        }
        if (num < 0){
            printf("No puede ser menor un numero negativo.");
            continue;
        }

            //verificar si es primo o no
            esPrimo = 1;
            i = 2; //primer divisior

            while (i <= num / 2){
                if (num % i == 0){
                    esPrimo = 0;
                    break;
                }
                i++;
            }
        if (esPrimo && num > 1){
            printf("%d es primo\n",num);
        }else{
            printf("%d no es primo\n",num);
        }
    }
    return 0;
}