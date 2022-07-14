#include <stdio.h>
#include <stdlib.h>
//Hacer un programa que solicite el ingreso de las notas del primer parcial y del
//segundo parcial de una alumna de programación. El programa deberá analizar
//las notas y emitir la situación de la alumna según la siguiente escala:
//a. Si tiene 8 o más en ambos parciales, emitir “aprobación directa”.
//b. Si no tiene 8 o más en ambos pero tiene aprobados ambos parciales (se
//aprueba con 6 o más), emitir “rinde examen final”.
//c. Si tiene menos de 6 en alguno de los dos parciales, emitir “debe
//recuperar”.
//El programa debe emitir solo un cartel, el que corresponda.
int main()
{
    int nota1,nota2;

    printf("Ingrese la nota del primer parcial\n"); scanf("%d", &nota1);
    printf("Ingrese la nota del segundo parcial\n"); scanf("%d", &nota2);

    if(nota1 >= 8 && nota2 >= 8)
        printf("Aprobacion directa\n");
    else if(nota1 >= 6 && nota2 >= 6)
        printf("Rinde examen final\n");
    else
        printf("Debe recuperar");

    return 0;
}
