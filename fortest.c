#include <stdio.h>
int main(){
    //prueba switch y for
    int opcion;
    
    printf("Menu de seleccion\n");
    printf("1. Tabla de multiplicar\n");
    printf("2. Calculadora\n");
    printf("3. Salir\n");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1:{
        int n,i;
        printf("Ingrese un numero para saber su tabla de multiplicar:\n");
        scanf("%d",&n);
        if (n>0){
            for (i = 1; i <= 10; i++){
                printf("%d x %d = %d\n",n,i,n*i);
            }
        }else{
            printf("Numero invalido.\n");
            }
            break;
        }
        case 2:{
           break; 
        }
        case 3:{
            printf("Finalizando el programa...\n");
            break;
        }
        default: 
        printf("Opcion no valida\n");
        break;
    }
    return 0;
}
