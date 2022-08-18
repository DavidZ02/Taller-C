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
    int suma = 0;
	printf("Ingrese el tamaño de la matriz -> ");
	scanf("%d",&N);

    if(N > 8){
        printf("El tamaño de la matriz debe ser menor a 8 \n");
    }else{
        // Se declaran las matrices
	    SIZE = N*N;
	    int matrizA[SIZE], matrizB[SIZE], matrizC[SIZE];
	    printf("\n");
	
	    // Se inicializan las matrices
	    for(i = 0; i < N; i++){
		    for(j = 0; j < N; j++){	
			    matrizA[i+j*N] = rand()%10;
                matrizB[i+j*N] = rand()%10;
                matrizC[i+j*N] = 0;
		    }
	    }

        printf("Matriz A : \n");
	    for(i = 0; i < N; i++){
		    for(j = 0; j < N; j++){
			    printf("%d ", matrizA[i+j*N]);
		    }
		    printf("\n");
	    }
	    printf("\n");

        printf("Matriz B : \n");
	    for(i = 0; i < N; i++){
		    for(j = 0; j < N; j++){
			    printf("%d ", matrizB[i+j*N]);
		    }
		    printf("\n");
	    }
	    printf("\n");

        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                matrizC[i+j*N] = matrizA[i+j*N]+matrizB[i+j*N];
            }
            matrizC[j+i*N] = suma;
        }

        printf("Matriz C : \n");
	    for(i = 0; i < N; i++){
		    for(j = 0; j < N; j++){
			    printf("%d ", matrizC[i+j*N]);
		    }
		    printf("\n");
	    }
	    printf("\n");

	    return 0;
    }
} 