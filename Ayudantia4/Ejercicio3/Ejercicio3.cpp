#include <stdio.h>

//Elabora un programa que calcule la media o promedio de x numeros, el programa debe dejar de solicitar numeros cuando se ingrese un 0

int numero = 1, contador = 0;

float promedio, suma = 0;

int main(){

    while(numero != 0){
    
        printf("Intruduzca un numero: \n");
        scanf("%i", &numero);

        suma += numero;

        if(numero != 0){

            contador++;

        }

    }

    promedio = suma / contador;

    printf("El promedio es: %f \n", promedio);
    

    return 0;
    
}