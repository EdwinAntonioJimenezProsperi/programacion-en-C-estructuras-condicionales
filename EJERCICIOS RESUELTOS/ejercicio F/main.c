#include <stdio.h>
#include <stdlib.h>
/*Desarrollar un algoritmo que le permita leer un valor cualquiera N y escribir si dicho numero
es multiplo de Z.*/
int main()
{
    int n, z;
    printf("TECLEE N: ");
    scanf("%d", &n);
    printf("TECLEE Z: ");
    scanf("%d", &z);
    if(n % z == 0)
        printf("ES MULTIPLO");
    else
        printf("NO ES MULTIPLO");
    return 0;
}
