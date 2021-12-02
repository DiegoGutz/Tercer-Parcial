#include <stdio.h>
main()
{
    float a, b, c, x;
    printf("Calculo de las ecuacion de primer grado ax+b=c");
    printf("introduzca los valores de a, b y c: ");
    scanf("%f%f%f", &a, &b, &c);
    x= (c-b)/a;
    printf("El resultado de esta ecuación para los valores%1.f, %1.f y %1.f es: %2f", a, b, c, x);

    return 0;
}
