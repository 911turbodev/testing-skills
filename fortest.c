#include <stdio.h>
int main(){
    //prueba switch y for
    int opcion;
    do{    
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
            int subopcion, n1, n2;
            printf("Menu calculadora\n");
            printf("1. Suma\n");
            printf("2. Resta\n");
            printf("3. Multiplicacion\n");
            printf("4. Division\n");
            printf("Elija una opcion por teclado: \n");
            scanf("%d",&subopcion);
            switch (subopcion){
                case 1:
                printf("Ingrese dos numeros para la suma: \n");
                scanf("%d %d",&n1, &n2);
                printf("\nResultado: %d\n",n1+n2);
                break;
                case 2:
                printf("Ingrese dos numeros para la resta: \n");
                scanf("%d %d",&n1, &n2);
                printf("\nResultado: %d\n",n1-n2);
                break;
                case 3:
                printf("Ingrese dos numeros para la multiplicacion: \n");
                scanf("%d %d",&n1, &n2);
                printf("\nResultado: %d\n",n1*n2);
                break;      
                case 4:
                printf("Ingrese dos numeros para la division: \n");
                scanf("%d %d",&n1, &n2);
                printf("\nResultado: %d\n",n1/n2);
                break;      
            default:
                printf("Valor invalido\n");
                break;
            }
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
    }while (opcion != 3);    
    return 0;
}
