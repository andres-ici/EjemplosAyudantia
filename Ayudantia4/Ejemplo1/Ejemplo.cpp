#include <stdio.h>

//Suponga un array con N notas de 0.0 a 7.0 (no puede ingresar notas fuera de ese rango), calcule el promedio, indique la cantidad de aprobados y reprobados, ademas de mostrar la mejor y la peor nota.

int nNotas;

float nota, sumatoria = 0, promedio, reprobados = 0, aprobados = 0, mayorNota = 0, menorNota = 7;


int main(){


    printf("Ingrese el numero de notras que va ingresar\n");
    scanf("%i", &nNotas);

    float notas[nNotas];

    for(int i = 0 ; i < nNotas ; i++){ //pregunta todas las notas

        do{

            printf("Ingrese nota\n");
            scanf("%f", &nota);

            if(nota < 0 || nota > 7){

                printf("Numero incorrecto\n");

            }

        }while(true != (nota >= 0 && nota <= 7));

        notas[i] = nota;

    }

    for(int i = 0 ; i < nNotas ; i++){ //analisis de notas

        sumatoria += notas[i]; //promedio

        if(notas[i] < 4){ //cantidad de reprobados

            reprobados++;

        }else{ //cantidad de aprobados

            aprobados++;

        }

        if(notas[i] > mayorNota){

            mayorNota = notas[i];

        }

        if(notas[i] < menorNota){

            menorNota = notas[i];

        }

    }

    promedio = sumatoria / nNotas;

    printf("Sumatoria = %f\n", sumatoria);
    printf("Promedio = %f\n", promedio);
    printf("Aprobados = %f\n", aprobados);
    printf("reprobados = %f\n", reprobados);
    printf("Menor nota = %f\n", menorNota);
    printf("Mayor nota = %f\n", mayorNota);

    return 0;
}