/*******************************************************************
 * Fecha: 10 de Agosto de 2022
 * Autor: David Zárate
 * Materia: Computacion Paralela Y Distribuida
 * Tema: Diseño Benchmark
 * Fase 01: Multiplicacion de Matrices Clasica
 * *****************************************************************/
 
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <math.h>

int main(){

	// Se pide la dimension de la matriz
	int N, SIZE;
	int i, j, k;
	int suma_parcial;
	printf("Ingrese el tamaño de la matriz -> ");
	scanf("%d",&N);
	
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
	
	// Se imprime las matriZ A
	printf("Matriz A : \n");
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%d ", matrizA[i+j*N]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	// Se imprime las matriZ B
	printf("Matriz B : \n");
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%d ", matrizB[i+j*N]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	// Se imprime las matriZ C
	printf("Matriz C : \n");
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%d ", matrizC[i+j*N]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	// Se multiplican las Matrices: Algoritmo Clasico FilasXColumnas
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
            suma_parcial = 0;
			for(k = 0; k < N; k++){
				suma_parcial += matrizA[j+k*N]*matrizB[k+i*N];
			}
		}
		matrizC[j+i*N] = suma_parcial;
	}
	
	
	// Se imprime las matriZ C
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