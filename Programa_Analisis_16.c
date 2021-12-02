#include <stdio.h>
main()
{
    int base, altura, perimetro, area;
    printf("Calculo del area y perímetro de un rectangulo\n\n");
    printf("Indique las dimensiones de la base y la altura del rectángulo: (respectivamente)\n");
    scanf("%d%d", &base, &altura);
    area=base*altura;
    perimetro=2*base+2*altura;
    printf("El area del rectangulo es %d y el perimetro es igual a %d", area, perimetro);
}
