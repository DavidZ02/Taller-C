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
    int a, i;
    printf("Ingrese el numero de lineas -> ");
	scanf("%d",&a);

    for(i = 1; i <= a; i++){
        int j = 0;
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}