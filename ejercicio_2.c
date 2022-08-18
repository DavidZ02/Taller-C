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
	int años, semanas, dias;
	int a;
	printf("Ingrese el numero de dias -> ");
	scanf("%d",&dias);

    años = dias / 365;
    dias = dias - (365*años);

    semanas = dias / 7;
    dias = dias - (7*semanas);

    printf("Años : %d \n", años);
    printf("Semanas : %d \n", semanas);
    printf("Dias : %d \n", dias);
    printf("\n");
}       
