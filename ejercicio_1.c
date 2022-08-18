/*******************************************************************
 * Fecha: 10 de Agosto de 2022
 * Autor: David Zárate
 * Materia: Computacion Paralela Y Distribuida
 * Tema: Taller 1
 * *****************************************************************/
 
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <math.h>

int main(){
	int a, b;
	int suma;
	printf("Ingrese el primer nummero entero -> ");
	scanf("%d",&a);
    printf("Ingrese el segundo nummero entero -> ");
	scanf("%d",&b);
    suma = a*b;
    printf("El producto de los dos numeros es : %d", suma);
    printf("\n");
	
}       
