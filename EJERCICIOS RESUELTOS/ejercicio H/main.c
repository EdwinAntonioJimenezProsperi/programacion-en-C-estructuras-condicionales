#include <stdio.h>
#include <stdlib.h>
/*Se necesita un sistema que tenga 3 opciones, si se selecciona la 1ra. se calcula
el perimetro de un cuadrado, si la opcion es la 2da. se calcula el perimetro de un
triangulo equilatero y si se elije la 3ra. opcion se calcula el perimetro de un circulo,
ademas que mandara un mensaje de "Error" en caso de presionar cualquier otra numero. */
int main()
{
    float lado, perimetro;
    int opcion;
    printf("----MENU DE PERIMETROS---\n");
    printf("1: CUADRADO\n");
    printf("2: TRIANGULO\n");
    printf("3: CIRCULO\n");
    printf("INGRESE OPCION\n");
    scanf("%d", &opcion);
    switch(opcion){
    case 1:
        printf("TECLEE LADO DE UN CUADRADO: ");
        scanf("%f", &lado);
        perimetro = lado * 4;
        break;
    case 2:
        printf("TECLEE LADO DE UN TRIANGULO: ");
        scanf("%f", &lado);
        perimetro = lado * 3;
        break;
    case 3:
        printf("TECLEE LADO DE UN CIRCULO: ");
        scanf("%f", &lado);
        perimetro = lado * 3.1416;
        break;
    default:
        printf("ERROR\n");
        break;
    }
    printf("EL PERIMETRO ES: %.2f\n", perimetro);
    return 0;
}
