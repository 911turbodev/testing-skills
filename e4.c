#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 20; i++){
        if (i % 2 == 0){
            printf("%d es |Par|\n",i);
        }else
            printf("%d es Impar\n",i);
    }
    return 0;
}
