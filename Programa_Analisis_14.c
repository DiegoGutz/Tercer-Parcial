#include <stdio.h>
main()
{
int a, b, c, x;
printf("introduzca los valores de a, b y c: ");
scanf("%d%d%d", &a, &b, &c);
printf("Los valores iniciales son: \n a=%d\n b=%d\n c=%d\n", a, b, c);
x=a;
a=b;
b=c;
c=x;
printf("Los valores finales son:\n a=%d\n b=%d\n c=%d\n", a, b, c);
}
