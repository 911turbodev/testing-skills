#include <stdio.h>
int main()
{
    int inf, sup, num;
    do{
    printf("Ingrese un numero para multiplicar: \n");
    scanf("%d",&num);
    printf("Ingrese limite inferior: \n");
    scanf("%d",&inf);
    printf("Ingrese limite superior\n");
    scanf("%d",&sup);
    for (inf = inf; inf <= sup; inf++){
        printf("%d x %d = %d\n",num,inf,num*inf);
    }
}while (inf != 0 && sup != 0);
    return 0;
}
