#include <stdio.h>
#include <stdlib.h>
//Hacer un programa para ingresar dos números. Si el segundo es distinto de
//cero, calcular la división del primero por el segundo y mostrar el resultado por
//pantalla; caso contrario, emitir un cartel aclarando que no se puede dividir por
//cero
int main()
{
    float a,b;

    printf("Ingrese el primer numero\n"); scanf("%f", &a);
    printf("Ingrese el primer segundo\n"); scanf("%f", &b);

    if(b != 0)
        printf("%g", a / b);
    else
        printf("No se puede dividir por cero\n");

    return 0;
}
