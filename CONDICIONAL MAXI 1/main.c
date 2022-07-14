#include <stdio.h>
#include <stdlib.h>
//Hacer un programa que solicite el ingreso de un número y que luego emita un
//cartel por pantalla aclarando si el mismo es múltiplo de 5.

int main()
{
    int n;

    printf("Ingrese un numero\n"); scanf("%d", &n);

    if(n % 5 == 0)
        printf("Es multiplo de 5\n");
    else
        printf("No es multiplo de 5\n");

    return 0;
}
