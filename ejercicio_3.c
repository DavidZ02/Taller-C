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
    double x1, y1, x2, y2;
    double distancia;
	printf("Ingrese el valor de X1 -> ");
	scanf("%lf",&x1);
    printf("Ingrese el valor de Y1 -> ");
	scanf("%lf",&y1);
    printf("Ingrese el valor de X2 -> ");
	scanf("%lf",&x2);
    printf("Ingrese el valor de Y2 -> ");
	scanf("%lf",&y2);

    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("La distancia entre los puntos es : %f \n", distancia);
}