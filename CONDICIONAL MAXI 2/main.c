#include <stdio.h>
#include <stdlib.h>
//Hacer un programa que solicite el ingreso de dos números y luego calcular:
//a. La resta si el primero es mayor que el segundo.
//b. La suma si son iguales.
//c. El producto si el primero es menor.
//Se deberá emitir un cartel por pantalla con el resultado correspondiente.
int main()
{
    int a,b,resultado;

    printf("Ingrese el primer numero\n"); scanf("%d", &a);
    printf("Ingrese el primer segundo\n"); scanf("%d", &b);

    if(a > b)
        resultado = a - b;
    else if(a == b)
        resultado = a + b;
    else
        resultado = a * b;

    printf("%d", resultado);

    return 0;
}
