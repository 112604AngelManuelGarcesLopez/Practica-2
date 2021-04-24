#include <stdio.h>
int  main ()
{
     /*Angel Manuel Garces Lopez
    Equipo AMUKE
    23 abr 21
    Programa 6. Pide tres valores reales,  calcula el area del prisma ,ultiplicar por su altura
    */

    float base;
    float altura;
    float resultado;
    float area;
    float largo;


    printf ("\n \n Programa 6" );
    printf ("\n \n Saca el promedio de valores reales");
    printf ("\n \n Dame el valor real de la area");
    scanf ("%f", & area); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n \n Dame el valor real de la altura");
    scanf ( "%f", &altura); // Permite capturar un valor real y lo guarda en variable primer
    resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.
    printf ("\n El area del triangulo es %f", resultado);

    return  0;
}