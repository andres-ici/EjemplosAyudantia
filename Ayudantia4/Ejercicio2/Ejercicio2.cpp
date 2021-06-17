#include <stdio.h>

//Elabora un programa que al ingresar un numero entero entre 0 y 20 (sin incluirlos) diga correcto, en caso contrario pedir nuevamente el numero hasta que cumpla la condicion anterior

int numero;

int main(){

    do{

        printf("Ingrese un numero entre 0 y 20 (sin incluirlos): \n");
        scanf("%i", &numero);

    }while(1 != (numero > 0 && numero < 20));

    printf("Numero correcto!!\n");
    return 0;
    
}