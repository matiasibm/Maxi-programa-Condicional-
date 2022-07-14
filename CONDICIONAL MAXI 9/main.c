#include <stdio.h>
#include <stdlib.h>
//Una importante marca de computadoras permite elegir cierta configuración del
//equipo a comprar. Para ello existe la siguiente escala de precios:
//i5 (1) i7 (2) i9 (3)
//8 RAM (1) USD 800 USD 900 USD 1200
//16 RAM (2) USD 900 USD 1000 USD 1400
//32 RAM (3) USD 1000 USD 1400 USD 2000
//Además, el equipo viene con un disco que permite almacenar 500 GB de
//información y que se puede ampliar a 1 TB si así lo desea, lo cual tiene un costo
//adicional de USD 300.
//Hacer un programa que solicite la opción de procesador, la opción de memoria
//RAM, y si extiende el disco o no (ingresa 1 para extender y 0 para no extender)
//y calcule y emita por pantalla el monto de la máquina seleccionada

int main()
{
    int procesador,memoriaRam,extensionDisco,importeFinal;

    printf("Ingrese el PROCESADOR que desea \n\t1-i5\n\t2-i7\n\t3-i9\n"); scanf("%d", &procesador);
    printf("Ingrese la memoria RAM\n\t1-8gb\n\t2-16gb\n\t3-32gb\n"); scanf("%d", &memoriaRam);
    printf("Desea externder el DISCO a 1TB\n\t1-si\n\t0-no\n"); scanf("%d", &extensionDisco);

    if(procesador == 1){                                    //procesador i5
        if(memoriaRam == 1)                                 //8gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 800 + 300;
            else                                            //sin extension
                importeFinal = 800;
        else if(memoriaRam == 2)                            //16gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 900 + 300;
            else                                            //sin extension
                importeFinal = 900;
        else                                                //32gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 1000 + 300;
            else                                            //sin extension
                importeFinal = 1000;
    }
    else if(procesador == 2){                               //procesador 17
        if(memoriaRam == 1)                                 //8gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 900 + 300;
            else                                            //sin extension
                importeFinal = 900;
        else if(memoriaRam == 2)                            //16gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 1000 + 300;
            else                                            // sin extension
                importeFinal = 1000;
        else                                                //32gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 1400 + 300;
            else                                            //sin extension
                importeFinal = 1400;
    }
    else                                                    //procesador 19
        if(memoriaRam == 1)                                 //8gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 1200 + 300;
            else                                            //sin extension
                importeFinal = 1200;
        else if(memoriaRam == 2)                            //16gb memoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 1400 + 300;
            else                                            //sin extension
                importeFinal = 1400;
        else                                                //32gb mrmoria ram
            if(extensionDisco == 1)                         //disco 1 TB
                importeFinal = 2000 + 300;
            else                                            //sin extension
                importeFinal = 2000;

    printf("Usted debe abonar $%d", importeFinal);

    return 0;
}
