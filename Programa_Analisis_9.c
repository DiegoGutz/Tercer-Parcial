#include <stdio.h>
main()
{
    float a, b, c, d, x, y;
    // Lectura de coeficientes
    printf ("Evaluacion del polimonino y=ax^3 + bx^2 + cx + d. \n");
    printf ("Valor de los coeficientes a, b, c, y d: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    //Lectura del valor de x
    printf ("Introducir el valor de la variable x: ");
    scanf ("%f", &x);
    // Porceso: calcula del polinomio
    y=a*x*x*x + b*x*x + c*x + d;
    // Salida
    printf("El resultado del polinomio %.2f x^3 + %.2f x^2", a, b);
    printf ("+ %.2f x + %.2f para x=%.2f es: %.2f\n", c, d, x, y);
}
