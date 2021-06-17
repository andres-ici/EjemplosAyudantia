#include <stdio.h>

//Elabora un programa que mmuestre todos los numeros primos entre 1 y el valor ingresado por el usuario

int numero, decimales = 0;

int main(){

    printf("Ingrese un numero: \n");
    scanf("%i", &numero);
    
    for(int u = 1; u <= numero; u++){
    
        for(int i = 1; i <= u; i++){

            if(u % i == 0){

                decimales++;

            }

        }

        if(decimales == 2){

            printf("El numero %i es primo\n", u);
            decimales = 0;

        }else{

            decimales = 0;

        }

    }

    return 0;
}