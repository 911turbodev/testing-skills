#include <stdio.h>
int main()
{
    while(1){
        int num, i, esPrimo;
        printf("Ingrese un numero entero positivo (0 para finalizar)\n");
        scanf("%d",&num);
        if (num == 0){
            printf("Finalizando programa...");
            break;
        }
        if (num < 0){
            printf("Valor invalido\n");
            continue;
        }
        esPrimo=1;
        i = 2;
        while (i <= num / 2){
            if (num % i == 0){
                esPrimo = 0; //no es primo
                break;
            }
            i++;
        }
        if (esPrimo && num > 0){
            printf("%d es primo\n",num);
        }else{
            printf("%d no es primo\n",num);
        }
    }
    return 0;
}
