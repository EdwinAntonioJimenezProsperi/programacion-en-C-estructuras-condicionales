#include <stdio.h>
#include <stdlib.h>
/*Desarrollar un algoritmo que le permita leer un valor cualquiera N y escribir por pantalla 
si dicho numero es positivo o negativo.*/
int main()
{
    int num;
    printf("TECLEE UN NUMERO: ");
    scanf("%d", &num);
    if(num > 0)
        printf("EL NUMERO %d ES POSITIVO\n", num);
    else if(num < 0)
        printf("EL NUMERO %d ES NEGATIVO\n", num);
    else
        printf("EL NUMERO %d ES NEUTRO\n", num);

    return 0;
}
