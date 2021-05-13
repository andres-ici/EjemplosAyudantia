#include <stdio.h>

int numero;

int main(){

    printf("Ingrese un numero\n");
    scanf("%i", &numero);

    printf("El numero ingresado por el usuario al cuadrado es: %i\n", numero * numero);

    return 0;
}