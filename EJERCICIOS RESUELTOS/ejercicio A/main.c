#include <stdio.h>
#include <stdlib.h>
/*Se nesecita un sistema para un supermercado, el cual dara un 10% de descuento a las personas
que compren mas de $1000, al cliente se le debe dar el total a pagar.*/
int main()
{

    float subTotal, totalPagar, descuento;
    printf("INGRESE EL SUB TOTAL DE LA COMPRA: ");
    scanf("%f", &subTotal);
    if (subTotal>1000){
        descuento = subTotal * 0.10;
        totalPagar = subTotal - descuento;
    }
    else{
        totalPagar = subTotal;
    }
    printf("EL TOTAL A PAGAR ES = %.2f\n", totalPagar);
    return 0;
}
