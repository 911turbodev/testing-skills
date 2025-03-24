#include <stdio.h>
int main()
{
    int a,b,c,aux;
    printf("Ingrese 3 numeros para ordenar de menor a mayor: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c){
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c){
        aux = b;
        b = c;
        c = aux;
    }
    printf("\nEl orden de menor a mayor es: %d %d %d\n", a, b, c);
    printf("Operacion finalizada.\n");
    return 0;
}
