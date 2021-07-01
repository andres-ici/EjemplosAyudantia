#include <stdio.h>

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
	
	printf("Ingrese la cantidad de misiones a enviar (entre 2 a 10): \n");
	
	while (true) {
		
		scanf("%i", &cantidadMisiones);
		
		if(cantidadMisiones >= 2 && cantidadMisiones <=10){
			
			break;
			
		}else{
				
			printf("Opcion invalida\n");
				
		}
		
	}

	printf("\n\nOcupar tabla 1 para el uso de cordenadas\n");
	printf("Filas: desde arriba a abajo, comenzando con el 0 y terminando con el 9.\n");
	printf("Columnas: desde izquierda a derecha, comenzando con el 0 y terminando con el 9.\n\n");

	for(int i = 0; i < cantidadMisiones; i++){
		
		printf("\nMision %i\n\n", i + 1);
		printf("Ingrese coordenadas de inicio de forma: Fila , Columna: \n");
		scanf("%i , %i", &inicioFilas, &inicioColumnas);
		printf("\nDirecciones: Norte (N), Este (E), Sur (S), Oeste (O)\n");
		printf("Ingrese la direccion: \n");
		scanf("%s", &direccion);
		
		cantidadCuadriculas = 0;
		cantidadTesoros = 0;
		
		if(direccion == 'N'){
			
			printf("\nCoordenadas de inicio: %i, %i\n", inicioFilas, inicioColumnas);
			printf("Direccion: Norte\n\n");
			
			do{
				
				cantidadCuadriculas ++;
				
				cantidadTesoros += zona[inicioFilas][inicioColumnas];
				
				printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inicioFilas][inicioColumnas]);
				
				inicioFilas--;
				
			}while(inicioFilas >= 0);
			
		}
		
		if (direccion == 'E'){
			
			printf("\nCoordenadas de inicio: %i, %i\n", inicioFilas, inicioColumnas);
			printf("Direccion: Este\n\n");
			
			do{
				
				cantidadCuadriculas ++;
				
				cantidadTesoros += zona[inicioFilas][inicioColumnas];
				
				printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inicioFilas][inicioColumnas]);
				
				inicioColumnas++;
				
			}while(inicioColumnas < 10);
			
		}

		if (direccion == 'S'){
			
			printf("\nCoordenadas de inicio: %i, %i\n", inicioFilas, inicioColumnas);
			printf("Direccion: Sur\n\n");
			
			do{
				
				cantidadCuadriculas ++;
				
				cantidadTesoros += zona[inicioFilas][inicioColumnas];
				
				printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inicioFilas][inicioColumnas]);
				
				inicioFilas++;
				
			}while(inicioFilas < 10);

		}

		if (direccion == 'O'){
			
			printf("\nCoordenadas de inicio: %i, %i\n", inicioFilas, inicioColumnas);
			printf("Direccion: Oeste\n\n");
			
			
			do{
				
				cantidadCuadriculas ++;
				
				cantidadTesoros += zona[inicioFilas][inicioColumnas];
				
				printf("Casilla: %i. Tesoros: %i.\n", cantidadCuadriculas, zona[inicioFilas][inicioColumnas]);
				
				inicioColumnas--;
				
			}while(inicioColumnas >= 0);

		}

		printf("\nResumen Mision %i\n\n", i + 1);
		printf("Total de cuadriculas recorridas: %i\n", cantidadCuadriculas);
		printf("Total de elementos encontrados: %i\n", cantidadTesoros);
		
	}
	
}

