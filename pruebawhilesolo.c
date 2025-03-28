#include <stdio.h>
int main()
{
    while (1){ //enntra en loop infinito
        int num,i,esPrimo;
        printf("Ingrese un numero. [0] para finalizar\n");
        scanf("%d",&num);
        if (num == 0) printf("Finalizando el programa...\n") break;
        if (num < 0) printf("Numero invalido.\n"); continue;
        i=2;
        esPrimo=1;
        
    }
    return 0;
}
