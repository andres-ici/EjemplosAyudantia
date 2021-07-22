#include <stdio.h>
#include "funciones.h"

int verificacion(int limiteInferior, int limiteSuperior){

    int cantidadMisiones;
    int limInf = limiteInferior;
    int limSup = limiteSuperior;

    printf("Ingrese la cantidad de misiones a enviar (entre 2 a 10): \n");
	
	while (true) {
		
		scanf("%i", &cantidadMisiones);
		
		if(cantidadMisiones >= limInf && cantidadMisiones <= limSup){
			
			return cantidadMisiones;
			
		}else{
				
			printf("Opcion invalida\n");
            printf("Ingrese la cantidad de misiones a enviar (entre 2 a 10): \n");
				
		}
		
	}

}

void instrucciones(){

    printf("\n\nOcupar tabla 1 para el uso de cordenadas\n");
	printf("Filas: desde arriba a abajo, comenzando con el 0 y terminando con el 9.\n");
	printf("Columnas: desde izquierda a derecha, comenzando con el 0 y terminando con el 9.\n\n");

}

int inicioDeFilas(){

    int filas;

    printf("Ingrese coordenadas de Fila: \n");
    scanf("%i", &filas);

    return filas;

}

int inicioDeColumnas(){

    int columnas;

    printf("Ingrese coordenadas de columna: \n");
    scanf("%i", &columnas);

    return columnas;

}

char ingresoDireccion(){

    char dir;

    printf("\nDirecciones: Norte (N), Este (E), Sur (S), Oeste (O)\n");
	printf("Ingrese la direccion: \n");
	scanf("%s", &dir);

    return dir;

}

void resumenMision(int canCuadriculas, int canTesoros){

    int cC = canCuadriculas;
    int cT = canTesoros;

	printf("Total de cuadriculas recorridas: %i\n", cC);
	printf("Total de elementos encontrados: %i\n", cT);

}

void moverNorte(int &cantidadCuadriculas, int &cantidadTesoros,int zona[10][10] , int filas, int columnas){

	int inFilas = filas;
	int inColumnas = columnas;

	printf("\nCoordenadas de inicio: %i, %i\n", inFilas, inColumnas);
	printf("Direccion: Norte\n\n");
			
		do{
				
			cantidadCuadriculas ++;
				
			cantidadTesoros += zona[inFilas][inColumnas];
				
			printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inFilas][inColumnas]);
				
			inFilas--;
				
		}while(inFilas >= 0);

}

void moverEste(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas){

	int inFilas = filas;
	int inColumnas = columnas;

	printf("\nCoordenadas de inicio: %i, %i\n", inFilas, inColumnas);
	printf("Direccion: Este\n\n");
			
		do{
				
			cantidadCuadriculas ++;
				
			cantidadTesoros += zona[inFilas][inColumnas];
				
			printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inFilas][inColumnas]);
				
			inColumnas++;
				
		}while(inColumnas < 10);

}

void moverSur(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas){

	int inFilas = filas;
	int inColumnas = columnas;

	printf("\nCoordenadas de inicio: %i, %i\n", inFilas, inColumnas);
	printf("Direccion: Sur\n\n");
			
		do{
				
			cantidadCuadriculas ++;
				
			cantidadTesoros += zona[inFilas][inColumnas];
				
			printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inFilas][inColumnas]);
				
			inFilas++;
				
		}while(inFilas < 10);

}

void moverOeste(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas){

	int inFilas = filas;
	int inColumnas = columnas;

	printf("\nCoordenadas de inicio: %i, %i\n", inFilas, inColumnas);
	printf("Direccion: Oeste\n\n");
			
			
		do{
				
			cantidadCuadriculas ++;
				
			cantidadTesoros += zona[inFilas][inColumnas];
				
			printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inFilas][inColumnas]);
				
			inColumnas--;
				
		}while(inColumnas >= 0);

}