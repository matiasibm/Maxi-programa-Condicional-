#include <stdio.h>
#include <stdlib.h>
//. El negocio de desinfectante antes mencionado vende además detergente
//suelto, y los precios se aplican según la siguiente escala:
//a. 25 ARS por litro los primeros 50 litros.
//b. 20 ARS por litro si la venta es de 51 a 200 litros.
//c. 15 ARS por litro si la venta es de 201 a 500 litros.
//d. 10 ARS por litro si la venta es de más de 500 litros
//Además, si paga en efectivo, tiene un adicional del 10% sobre el importe final.
//Hacer un programa que solicite la cantidad de litros vendidos y el tipo de pago
//(ingresará 1 si paga en efectivo y 0 con cualquier otro medio de pago) y calcule
//y emita por pantalla el monto final a abonar por el cliente.
int main()
{
    float cantLitros,importeFinal;
    int medioPago;

    printf("Ingrese los litros de detergente comprados\n"); scanf("%f", &cantLitros);
    printf("Ingrese medio de pago\n\t1-Efectivo\n\t0-Otro\n"); scanf("%d", &medioPago);


    if(medioPago == 1)                                              //pago en efectivo//Importe con descuento
        if(cantLitros <= 50)
            importeFinal = (cantLitros * 25) * 0.90;
        else if(cantLitros >= 51 && cantLitros <= 200)
            importeFinal = (cantLitros * 20) * 0.90;
        else if(cantLitros >= 201 && cantLitros <= 500)
            importeFinal = (cantLitros * 15) * 0.90;
        else
            importeFinal = (cantLitros * 10) * 0.90;
    else                                                            //otro medio pago // Importe sin descuento
        if(cantLitros <= 50)
            importeFinal = cantLitros * 25;
        else if(cantLitros >= 51 && cantLitros <= 200)
            importeFinal = cantLitros * 20;
        else if(cantLitros >= 201 && cantLitros <= 500)
            importeFinal = cantLitros * 15;
        else
            importeFinal = cantLitros * 10;

    printf("Usted debera abonar $%g", importeFinal);

    return 0;
}
