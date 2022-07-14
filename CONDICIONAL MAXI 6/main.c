#include <stdio.h>
#include <stdlib.h>
//Hacer un programa para ingresar por teclado la longitud de los tres lados de un
//triángulo y que luego determine e informe con un cartel aclaratorio a qué tipo
//de triángulo corresponde:
//a. Equilátero: cuando los tres lados sean iguales.
//b. Isósceles: cuando dos de los tres lados sean iguales.
//c. Escaleno: cuando todos los lados sean distintos
int main()
{
    float ladoA,ladoB,ladoC;

    printf("Ingrese el primer lado\n"); scanf("%f", &ladoA);
    printf("Ingrese el segundo lado\n"); scanf("%f", &ladoB);
    printf("Ingrese el tercer lado\n"); scanf("%f", &ladoC);

    if((ladoA == ladoB) && (ladoB == ladoC))
        printf("Equilatero\n");
    else if((ladoA == ladoB) ||  (ladoB == ladoC))
        printf("Isosceles\n");
    else
        printf("Escaleno\n");

    return 0;
}
