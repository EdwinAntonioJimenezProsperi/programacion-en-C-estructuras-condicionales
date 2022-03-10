#include <stdio.h>
#include <stdlib.h>
/*Desarrollar un algoritmo que le permita leer un valor cualquiera N y escribir si dicho numero 
es par o impar.*/
int main()
{
   int num;
   printf("TECLEE UN NUMERO: ");
   scanf("%d", &num);
   if(num % 2 == 0)
    printf("EL NUMERO %d ES PAR\n", num);
   else
    printf("EL NUMERO %d ES IMPAR\n", num);

    return 0;
}
