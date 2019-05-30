# programacion-en-C-estructuras-condicionales
Aprendiendo los principios de las estructuras condicionales 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y; //declaramos dos variables enteras para hacer la comparacion mediante una condicion de cual de los dos enteros es el numero mas grande
	if (x>=y){//mediante esta sentencia que significa si x>y o x=y sabemos si x es el numero mayor si no lo sera el numero y
		printf("el numero mayor es: %d\n",x);
	}
	else{
		printf("el numero mayor es: %d\n",y);//aqui imprimimos el resultado del numero mayor ya sea x o y.
	}
}
