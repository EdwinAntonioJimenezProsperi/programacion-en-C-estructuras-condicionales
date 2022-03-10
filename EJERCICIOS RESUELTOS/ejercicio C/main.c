#include <stdio.h>
#include <stdlib.h>
/*Realizar un algoritmo para probar que 3 lados forman un triangulo, para esto 
se hace necesario que se cumpla la siguiente condicion: La suma de cualquiera de dos
lados debera ser menor o igual que el tercer lado*/
int main()
{
    int a, b, c;
    printf("TECLEE LADO A: ");
    scanf("%d", &a);
    printf("TECLEE LADO B: ");
    scanf("%d", &b);
    printf("TECLEE LADO C: ");
    scanf("%d", &c);
    if (a+b<= c){
        printf("NO FORMAN UN TRIANGULO");
    }
    else if (a+c<= b){
    printf("NO FORMAN UN TRIANGULO");
    }
    else if (b+c<=a){
        printf("NO FORMAN UN TRIANGULO");
        }
    else
        printf("FORMAN UN TRIANGULO");

    return 0;
}
