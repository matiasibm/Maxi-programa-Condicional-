#include <stdio.h>
#include <stdlib.h>
//Hacer un programa para ingresar tres números y luego mostrarlos ordenados
//de menor a mayor
int main()
{
    int a,b,c,mayor,medio,menor;

    printf("Ingrese el primer numero\n"); scanf("%d", &a);
    printf("Ingrese el segundo numero\n"); scanf("%d", &b);
    printf("Ingrese el tercer numero\n"); scanf("%d", &c);

    if(a <= b && a <= c){                   //a menor
        menor = a;
        if(b <= c){
            medio = b;
            mayor = c;
        }
        else{
            medio = c;
            mayor = b;
        }
    }
    else if(b <= c && b <= a){              //b menor
        menor = b;
        if(c <= a){
            medio = c;
            mayor = a;
        }
        else{
            medio = a;
            mayor = c;
        }
    }
    else{                                   //c menor
        menor = c;
        if(b <= a){
            medio = b;
            mayor = a;
        }
        else{
            medio = a;
            mayor = b;
        }
    }

    printf("%d\n%d\n%d\n", menor, medio, mayor);

    return 0;
}
