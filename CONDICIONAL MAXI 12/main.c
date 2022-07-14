#include <stdio.h>
#include <stdlib.h>
//Hacer un programa para ingresar tres números y emitir un cartel aclaratorio si
//la suma de los dos primeros es mayor al producto del segundo con el tercero
int main()
{
    int a,b,c,r1,r2;

    printf("Ingrese el primer numero\n"); scanf("%d", &a);
    printf("Ingrese el segundo numero\n"); scanf("%d", &b);
    printf("Ingrese el tercer numero\n"); scanf("%d", &c);

    r1 = a + b;
    r2 = b * c;

    if(r1 > r2)
        printf("Es mayor\n");

    return 0;
}
