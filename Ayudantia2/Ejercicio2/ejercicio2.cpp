#include <stdio.h>

int ladoA, ladoB, ladoC;
int ladoMayor = 0;
int suma;

int main(){

    printf("Ingrese los lados de un triangulo de la forma A , B , C\n");
    scanf("%i , %i , %i", &ladoA, &ladoB, &ladoC);

    if(ladoA > ladoMayor){

        ladoMayor = ladoA;

    }if(ladoB > ladoMayor){

        ladoMayor = ladoB;

    }if(ladoC > ladoMayor){

        ladoMayor = ladoC;

    }

    printf("El lado mayor del triangulo es = %i\n", ladoMayor);

    suma = ladoA + ladoB + ladoC - ladoMayor;

    if(ladoMayor < suma){

        if((ladoA == ladoB) && (ladoB == ladoC)){

            printf("Es un triangulo equilatero\n");

        }else if((ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){

            printf("Es un triangulo isoceles\n");

        }else{

            printf("Es un triangulo escaleno\n");

        }

    }else{

        printf("No es un triangulo\n");

    }

    return 0;
}