#include <stdio.h>

int cantidadMisiones;
int inicioFilas, inicioColumnas;
int cantidadCuadriculas, cantidadTesoros;
char direccion;

int verificacion(int limiteInferior, int limiteSuperior);
void instrucciones();
int inicioDeFilas();
int inicioDeColumnas();
char ingresoDireccion();
void resumenMision(int canCuadriculas, int canTesoros);
void moverNorte(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);
void moverEste(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);
void moverSur(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);
void moverOeste(int &cantidadCuadriculas, int &cantidadTesoros, int zona[10][10], int filas, int columnas);

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
	
}

//Funciones

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