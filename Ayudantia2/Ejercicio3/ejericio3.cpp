#include <stdio.h>

float numero1, numero2;
int opcion;

int main(){

    printf("Ingrese primer numero: \n");
    scanf("%f", &numero1);
    printf("Ingrese segundo numero: \n");
    scanf("%f", &numero2);

    printf("Menu de opciones\n");
    printf("1-Suma\n");
    printf("2-Resta\n");
    printf("3-Multiplicacion\n");
    printf("4-Dividision\n");
    printf("5-Salir del programa\n");
    printf("Ingrese opcion: \n");
    scanf("%i", &opcion);

    switch(opcion){
    case 1:
        printf("Resultado = %f", numero1 + numero2);
        break;
    case 2:
        printf("Resultado = %f", numero1 - numero2);
        break;
    case 3:
        printf("Resultado = %f", numero1 * numero2);
        break;
    case 4:
        printf("Resultado = %f", numero1 / numero2);
        break;
    default:

        break;
    }

    return 0;
}