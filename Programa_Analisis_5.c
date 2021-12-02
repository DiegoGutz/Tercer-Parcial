#include <stdio.h>
#include <math.h>
main()
{
    float cateto1, cateto2, hipotenusa, area, perimetro;
    // lectura de datos de entrada: cateto1 y cateto2
    printf("cateto1?");
    scanf("%f", &cateto1);
    printf("Cateto2?");
    scanf("%f", &cateto2);
    // Proceso: calculo de la hipotenusa, del area y del perimetetro
    hipotenusa=sqrt(cateto1*cateto1 + cateto2*cateto2);
    area=(cateto1*cateto2)/2.0;
    perimetro=cateto1+cateto2+hipotenusa;
    // Salida de los resultados
    printf("La hipotenusa es: %f\n", hipotenusa);
    printf("El area es: %f\n", area);
    printf("El perimetro es: %f\n", perimetro);
}
