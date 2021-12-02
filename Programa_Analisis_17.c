#include <stdio.h>
main()
{
    int num, cifra;
    printf ("NUMEROS DEL SORTEO ONCE\n");
    printf ("Introduzaca su numero completo: \n");
    scanf ("%d", &num);
    cifra=num%10;
    printf("El ultimo digito de su numero es: %d", cifra);
}
