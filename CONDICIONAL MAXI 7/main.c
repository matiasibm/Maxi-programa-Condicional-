#include <stdio.h>
#include <stdlib.h>
//Hacer un programa para ingresar 4 números. Luego analizar e informar por
//pantalla si los mismos se encuentran ordenados de forma decreciente.
int main()
{
    int a,b,c,d;

    printf("Ingrese el primer numero \n"); scanf("%d", &a);
    printf("Ingrese el primer numero \n"); scanf("%d", &b);
    printf("Ingrese el primer numero \n"); scanf("%d", &c);
    printf("Ingrese el primer numero \n"); scanf("%d", &d);

    if(a > b && b > c && c > d)
        printf("Estan ordenados en forma decreciente\n");
    else
        printf("No estan ordenados en forma decreciente\n");

    return 0;
}
