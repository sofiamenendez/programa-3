#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*
Ingresar la nota examen y la nota acumulada en base a 100.
la nota examen vale 70% y la nota acumulada 30%

       c  caracter
       d  decimal
       f  numero de punto flotante (flcat)
       if numero de punto (doubles)
        s cadena de caracteres (string)



 */

int main()


{   double ne,na,nf;
    printf ("ingresar nota Examen ...");
    scanf("%lf", &ne);

    printf ("ingresar nota Acumulada ...");
    scanf("%lf", &na);

    nf= (na* 0.3)+ (ne* 0.7);

    if (nf>=60)
{


    printf("Estado de la nota: Apr\n");
}

    else
{
        printf("Estado de la nota :Rep\n");
        printf("Necesita tutoria\n");
}
    printf("Nota Final %lf \n", nf);
    system("PAUSE");

    return 0;
}
