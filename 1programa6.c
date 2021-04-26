#include  <stdio.h>
int  main ()
{
     /* Garces Lopez Angel Manuel
    Equipo AMUKE
    23 abr 23
    Programa 6. Pide dos valores reales,  calcula el volumen de un trapecio y muestra resultado
    */

    float area, altura, volumen;

    printf ("\n \n Programa 6" );
    printf ("\n \n Saca el volumen del trapecio");
    printf ("\n \n Dame el valor real de la area ");
    scanf ("%f", &area ); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n \n Dame el valor real de la altura H ");
    scanf ( "%f", &altura); // Permite capturar un valor real y lo guarda en variable primer
    volumen=(area*altura); // Formula matematica para calcular el volumen de un trapecio.
    printf ("\n El volumen del trapecio es %f", volumen);

    return  0;
}
© 2021 GitHub, Inc.