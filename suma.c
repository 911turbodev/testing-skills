#include <stdio.h>
int main()
{
    int sum=0,num,i,iteraciones;
    do {
        printf("Ingrese cantidad de iteraciones\n");
        scanf("%d",&iteraciones);
        for (i=1;i<=iteraciones;i++){
            printf("Ingrese numero:\n");
            scanf("%d",&num);
            sum +=num;
            printf("La suma total es: %d\n",sum);
        }

    }while (num != 0 || iteraciones != 0);
    return 0;
}
