#include <stdio.h>
main()
{
int a, b, c;
printf ("Introduce tres n�meros:");
scanf ("%d%d%d", &a, &b, &c);
a=b;
b=c;
c=a;
printf ("El resultado es: %d %d %d \n", a, b, c);
}
