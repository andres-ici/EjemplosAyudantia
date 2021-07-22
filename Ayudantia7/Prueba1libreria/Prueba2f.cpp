#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int cantidadMisiones;
int inicioFilas, inicioColumnas;
int cantidadCuadriculas, cantidadTesoros;
char direccion;

int zona[10][10] = {{2,9,0,0,10,9,6,10,5,4},
	                {9,6,5,0,0,9,6,3,2,8},
	                {3,3,8,10,6,9,5,4,3,9},
	                {2,6,3,6,4,3,6,2,8,3},
	                {6,6,9,10,3,4,6,2,9,9},
	                {4,10,4,4,9,0,9,10,8,8},
	                {2,2,0,3,5,4,4,6,6,5},
	                {8,4,1,3,9,5,6,6,7,7},
	                {8,1,4,9,5,7,7,3,4,4},
	                {4,8,5,4,2,3,3,2,3,6}};
	             

int main(){
	
	printf("Busqueda de tesoros submarinos\n\n");
	
	cantidadMisiones = verificacion(2, 10);

	instrucciones();

	for(int i = 0; i < cantidadMisiones; i++){
		
		printf("\nMision %i\n\n", i + 1);
		
        inicioFilas = inicioDeFilas();
        inicioColumnas = inicioDeColumnas();

		direccion = ingresoDireccion();
		
		cantidadCuadriculas = 0;
		cantidadTesoros = 0;
		
		if(direccion == 'N'){
			
			moverNorte(cantidadCuadriculas, cantidadTesoros, zona, inicioFilas, inicioColumnas);
			
		}
		
		if (direccion == 'E'){
			
			moverEste(cantidadCuadriculas, cantidadTesoros, zona, inicioFilas, inicioColumnas);
			
		}

		if (direccion == 'S'){
			
			moverSur(cantidadCuadriculas, cantidadTesoros, zona, inicioFilas, inicioColumnas);

		}

		if (direccion == 'O'){
			
			moverOeste(cantidadCuadriculas, cantidadTesoros, zona, inicioFilas, inicioColumnas);

		}

		printf("\nResumen Mision %i\n\n", i + 1);

        resumenMision(cantidadCuadriculas, cantidadTesoros);
		
	}

	system("pause");
	
	return 0;
	
}

