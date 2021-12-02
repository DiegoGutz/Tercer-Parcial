#include <stdio.h>
int main()
{
    long int ventas_cola, ventas_naranja, ventas_limon;
    float precio_cola, precio_naranja, precio_limon;
    float total_cola, total_naranja, total_limon;
    // Lectura de datos: ventas y precio de cada producto
    printf ("\nDatos de la cola: \n");
    printf ("\t Ventas: ");
    scanf ("%1d", &ventas_cola);
    printf ("\t Precio: ");
    scanf ("%f", &precio_cola);
    printf ("\nDatos de la naranja: \n");
    printf ("\t Ventas: ");
    scanf ("%1d", &ventas_naranja);
    printf ("\t Precio: ");
    scanf ("%f", &precio_naranja);
    printf ("\nDatos del limon: \n");
    printf ("\t Ventas: ");
    scanf ("%1d", &ventas_limon);
    printf ("\t Precio: ");
    scanf ("%f", &precio_limon);
    // Proceso
    total_cola=ventas_cola*precio_cola;
    total_naranja=ventas_naranja*precio_naranja;
    total_limon=ventas_limon*precio_limon;
    // Salida tabulada
    printf ("Producto\tVentas\t Precio\t Total\n");
    printf ("---------------------------------------------\n");
    printf ("Cola \t\t %1d \t %4.2f %9.2f \n", ventas_cola, precio_cola, total_cola);
    printf ("Naranja \t %1d \t %4.2f %9.2f \n", ventas_naranja, precio_naranja, total_naranja);
    printf ("Limon \t\t %1d \t %4.2f %9.2f \n", ventas_limon, precio_limon, total_limon);
    printf ("\t\t\t TOTAL\t%9.2f\n", total_cola+total_naranja+total_limon);
}
