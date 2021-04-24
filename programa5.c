#include <stdio.h>
int  main ()
{
     /*Angel Manuel Garces Lopez
    Equipo AMUKE
    23 abr 21
    Programa 5. Pide dos valores reales,  calcula el area del trangulo y muestra resultado
    */

    float base;
    float altura;
    float resultado;

    printf ("\n \n Programa 5" );
    printf ("\n \n Saca el promedio de valores reales");
    printf ("\n \n Dame el valor real de la base");
    scanf ("%f", & base); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n \n Dame el valor real de la altura");
    scanf ( "%f", &altura); // Permite capturar un valor real y lo guarda en variable primer
    resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.
    printf ("\n El area del triangulo es %f", resultado);

    return  0;
}
