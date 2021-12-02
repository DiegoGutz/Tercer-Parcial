#include <stdio.h>
main()
{
    float precio_neto, precio_coste, margen;
    // Entrada de datos: precio_coste y margen
    printf ("¿Cual es el precio de coste?");
    scanf ("%f", &precio_coste);
    printf ("¿Cual es el margen?");
    scanf("%f", &margen);
    // Proceso: calculo del precio neto
    precio_neto=precio_coste*(100+margen)/100;
    // Salida de datos
    printf ("El precio neto de este producto es:de %f euros\n", precio_neto);
}
