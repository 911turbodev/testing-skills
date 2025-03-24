#include <stdio.h>

int main()
{
  int clave;
  printf("Ingrese clave numerica (123)\n");
  scanf("%d", &clave);
  while (clave != 123)
  {
    printf("clave incorrecta. intentelo nuevamente\n");
    scanf("%d", &clave);
  }
  printf("Acceso valido");
  return 0;
}