#include <stdio.h>
#include <stdlib.h>
/*Desarrollar un algoritmo que le permita leer un valor cualquiera N y escribir si dicho numero
es comun divisor de otros dos valores leidos W y Z.*/
int main()
{
    int n, w, z;
    printf("TECLEE N: ");
    scanf("%d", &n);
    printf("TECLEE W: ");
    scanf("%d", &w);
    printf("TECLEE Z: ");
    scanf("%d", &z);
   if(w % n == 0){
        printf("ES COMUN DIVISOR");
    }
    else if(z % n == 0){
        printf("ES COMUN DIVISOR");
    }
    else
        printf("NO ESCOMUN DIVISOR");
    return 0;
}
