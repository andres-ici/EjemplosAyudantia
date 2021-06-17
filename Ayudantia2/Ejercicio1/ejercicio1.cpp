#include <stdio.h>

int edad, destino;

int main(){

    printf("Ingrese su edad: \n");
    scanf("%i", &edad);
    printf("Ingrese destino: \n");
    scanf("%i", &destino);
    printf("edad = %i , destino = %i \n", edad, destino);

    if(destino == 1){

        if(edad < 15){

            printf("Debe pagar = $2500");

        }else if(edad > 65){

            printf("Debe pagar = $3000");

        }else{

            printf("Debe pagar = $4200");

        }

    }else if(destino == 2){

        if(edad < 15){

            printf("Debe pagar = $1200");

        }else if(edad > 65){

            printf("Debe pagar = $2000");

        }else{

            printf("Debe pagar = $3000");

        }

    }else{

        if(edad < 15){

            printf("Debe pagar = $2000");

        }else if(edad > 65){

            printf("Debe pagar = $2500");

        }else{

            printf("Debe pagar = $3800");

        }

    }

    return 0;
}