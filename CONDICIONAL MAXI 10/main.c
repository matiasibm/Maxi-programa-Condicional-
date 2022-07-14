#include <stdio.h>
#include <stdlib.h>
//Hacer un programa que solicite cuatro números y emitir un cartel aclaratorio si
//son todos iguales entre sí, caso contrario, no emitir nada.
int main()
{
    int a,b,c,d;

    printf("Ingrese el primer numero\n"); scanf("%d", &a);
    printf("Ingrese el segundo numero\n"); scanf("%d", &b);
    printf("Ingrese el tercer numero\n"); scanf("%d", &c);
    printf("Ingrese el cuarto numero\n"); scanf("%d", &d);

    if(a == b && b == c && c == d)
        printf("Los numeros son iguales\n");

    return 0;
}
