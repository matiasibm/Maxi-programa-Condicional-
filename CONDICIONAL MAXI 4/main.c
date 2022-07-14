#include <stdio.h>
#include <stdlib.h>
//Un importante negocio de desinfectante líquido realiza descuentos
//dependiendo de la cantidad de litros vendidos según la siguiente escala:
//a. Si vende menos de 100 litros, no hay descuento.
//b. Si vende entre 101 y 300 litros, el descuento es del 10%.
//c. Si vende entre 301 y 500 litros, el descuento es del 15%.
//d. Finalmente, si la venta es de más de 500 litros, el descuento es del 25%.
//Hacer un programa que solicite el ingreso del importe total de la venta y la
//cantidad de litros vendidos y calcule y emita el importe con el descuento
//aplicado.
int main()
{
    float importeTotal,cantLitros,importeFinal;

    printf("Ingrese el importe total\n"); scanf("%f", &importeTotal);
    printf("Ingrese la cantidad de litros que compra\n"); scanf("%f", &cantLitros);

    if(cantLitros > 500)
        importeFinal = importeTotal - (importeTotal * 0.25);
    else if(cantLitros >= 101 && cantLitros <= 300)
        importeFinal = importeTotal - (importeTotal * 0.10);
    else if(cantLitros >= 301 && cantLitros < 500)
        importeFinal = importeTotal - (importeTotal * 0.15);
    else
        importeFinal = importeTotal;

    printf("Usted debera abonar $%g", importeFinal);

    return 0;
}
