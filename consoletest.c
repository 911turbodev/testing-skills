#include <stdio.h>
int main()
{
    int age;
    char name[10];

    printf("Ingrese su edad:\n");
    scanf("%d", &age);
    printf("Ingrese su nombre:\n");
    scanf("%s", &name);
    printf("Edad: %d\n", age);
    printf("Nombre: %s", name);

    return 0;
}