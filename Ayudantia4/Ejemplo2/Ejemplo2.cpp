#include <stdio.h>

char matriz[3][3];
int coordenadaX, coordenadaY, turno = 1, ganador = 0;

int main() {
	
	printf("Juego Gato\n\n");
	
	printf("Coordenadas del tablero: \n\n");
	
	printf("[0,0] [0,1] [0,2]\n");
	printf("[1,0] [1,1] [1,2]\n");
	printf("[2,0] [2,1] [2,2]\n");
	
	printf("\nTablero Inicial: \n\n");
	
	for(int iy = 0; iy < 3; iy++) {
		
		for(int ix = 0; ix < 3; ix++){
			
			matriz[ix][iy] = '-';
			printf("[%c] ", matriz[ix][iy]);
			
			}
			
		printf("\n");
		
		}
	
	
	do {
		
		if(turno % 2 == 1) {
			
			printf("\n\n");
			printf("jugador 1 (X): \n\n");
	
			printf("Coordenadas del tablero: \n\n");
	
			printf("[0,0] [0,1] [0,2]\n");
			printf("[1,0] [1,1] [1,2]\n");
			printf("[2,0] [2,1] [2,2]\n");
			
			do {
			
				printf("\nIngrese la coordenada de la forma: Fila , Columna: \n");
				scanf("%i , %i", &coordenadaY, &coordenadaX);
				
				if (matriz[coordenadaX][coordenadaY] != '-') {
					
					printf("\nCoordenada no valida\n");
					
					}
				
				} while(matriz[coordenadaX][coordenadaY] != '-');
						
			
			matriz[coordenadaX][coordenadaY] = 'X'; 
		
			printf("\n\nTablero: \n\n");
				
			for(int iy = 0; iy < 3; iy++) {
		
				for(int ix = 0; ix < 3; ix++){
			
					printf("[%c] ", matriz[ix][iy]);
			
				}
				
				printf("\n");
			
			}
			
			turno++;
			
			if (('X' == matriz[0][0] && matriz[0][0] == matriz[0][1] && matriz[0][1] == matriz[0][2]) ||
			    ('X' == matriz[1][0] && matriz[1][0] == matriz[1][1] && matriz[1][1] == matriz[1][2]) ||
			    ('X' == matriz[2][0] && matriz[2][0] == matriz[2][1] && matriz[2][1] == matriz[2][2]) ||
			    ('X' == matriz[0][0] && matriz[0][0] == matriz[1][0] && matriz[1][0] == matriz[2][0]) ||
			    ('X' == matriz[0][1] && matriz[0][1] == matriz[1][1] && matriz[1][1] == matriz[2][1]) ||
			    ('X' == matriz[0][2] && matriz[0][2] == matriz[1][2] && matriz[1][2] == matriz[2][2]) ||
			    ('X' == matriz[0][0] && matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) ||
			    ('X' == matriz[2][0] && matriz[2][0] == matriz[1][1] && matriz[1][1] == matriz[0][2]) 
			    ) {
				
				ganador = 1;
				printf("\n\nEl jugador 1 (X) gano!!!");
				
				} 
			
			} else if(turno % 2 == 0) {
				
				printf("\n\n");
				printf("jugador 2 (O): \n\n");
		
				printf("Coordenadas del tablero: \n\n");
	
				printf("[0,0] [0,1] [0,2]\n");
				printf("[1,0] [1,1] [1,2]\n");
				printf("[2,0] [2,1] [2,2]\n");
			
				do {
		
					printf("\nIngrese la coordenada de la forma: Fila , Columna: \n");
					scanf("%i , %i", &coordenadaY, &coordenadaX);
					
					if (matriz[coordenadaX][coordenadaY] != '-') {
						
						printf("\nCoordenada no valida\n");
						
						}
					
					} while(matriz[coordenadaX][coordenadaY] != '-');
				
				matriz[coordenadaX][coordenadaY] = 'O'; 
		
				printf("\n\nTablero: \n\n");
				
				for(int iy = 0; iy < 3; iy++) {
		
					for(int ix = 0; ix < 3; ix++){
			
						printf("[%c] ", matriz[ix][iy]);
			
				}
				
					printf("\n");
			
				}
				
				turno = 1;
				
				if (('O' == matriz[0][0] && matriz[0][0] == matriz[0][1] && matriz[0][1] == matriz[0][2]) ||
			        ('O' == matriz[1][0] && matriz[1][0] == matriz[1][1] && matriz[1][1] == matriz[1][2]) ||
			        ('O' == matriz[2][0] && matriz[2][0] == matriz[2][1] && matriz[2][1] == matriz[2][2]) ||
			        ('O' == matriz[0][0] && matriz[0][0] == matriz[1][0] && matriz[1][0] == matriz[2][0]) ||
			        ('O' == matriz[0][1] && matriz[0][1] == matriz[1][1] && matriz[1][1] == matriz[2][1]) ||
			        ('O' == matriz[0][2] && matriz[0][2] == matriz[1][2] && matriz[1][2] == matriz[2][2]) ||
			        ('O' == matriz[0][0] && matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) ||
			        ('O' == matriz[2][0] && matriz[2][0] == matriz[1][1] && matriz[1][1] == matriz[0][2]) 
			    ) {
				
				ganador++;
				printf("\n\nEl jugador 2 (O) gano!!!");
				
				} 
				
				}
		
		
		} while(!ganador);
	
	
	
	
	
	return 0;
	}