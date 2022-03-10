#include <stdio.h>
#include <stdlib.h>
/*Se necesita un sistema que reciba 3 calificaciones parciales de un alumno y en base
a estas darle su promedio, donde si el promedio es menor a 6 se le dira que esta reprobado 
en caso contrario el mensaje sera aprobado.*/
int main()
{
    float cal1, cal2, cal3, prom;
    printf("INGRESE CALIFICACION 1: ");
    scanf("%f", &cal1);
    printf("INGRESE CALIFICACION 2: ");
    scanf("%f", &cal2);
    printf("INGRESE CALIFICACION 3: ");
    scanf("%f", &cal3);
    prom = (cal1 + cal2 + cal3)/ 3;
    if (prom<=50)
        printf("TU PROMEDIO ES: %.2f\n ESTAS REPROBADO", prom);
        else
            printf("TU PROMEDIO ES: %.2f\n ESTAS APROBADO", prom);

    return 0;
}
