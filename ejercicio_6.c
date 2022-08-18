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

	// Se pide la dimension de la matriz
	int N, SIZE;
	int i, j, k;
	printf("Ingrese el tamaño de la matriz -> ");
	scanf("%d",&N);

    if(N > 8){
        printf("El tamaño de la matriz debe ser menor a 8 \n");
    }else{
        // Se declaran las matrices
	    SIZE = N*N;
	    int matrizA[SIZE];
	    printf("\n");
	
	    // Se inicializan las matrices
	    for(i = 0; i < N; i++){
		    for(j = 0; j < N; j++){	
			    matrizA[i+j*N] = 1;
		    }
	    }
	
	    for(i = 0; i < N; i++){
		    for(j = 0; j < N; j++){
			    printf("%d ", matrizA[i+j*N]);
		    }
		    printf("\n");
	    }
	    printf("\n");
	    return 0;
    }
} 