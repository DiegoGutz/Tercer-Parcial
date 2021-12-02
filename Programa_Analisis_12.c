#include <stdio.h>
main()
{
    float a, b, c, d, e, f, g, h;
    a= 5/2+20%6;
    b= 4*6/2-15/2;
    c= ((5*15)/2)/(2);
    d= 8==16 || 7!=4 && 4<1;
    e= (4*3<6 || 3>5-2) && 3+2<12;
    f= 7+3*6/2-1;
    g= 2%2+2*2-1/2;
    h= (3*9*(3+(9*3/(3))));
    printf("a)\t 5/2+20%6 \t es igual a %1.f\n", a);
    printf("b)\t 4*6/2-15/2 \t es igual a %f\n", b);
    printf("c)\t 5*15/2/ 2(4-2) \t es igual a %f\n", c);
    printf("d)\t 8==16 || 7!=4 && 4<1 \t es igual a %f\n", d);
    printf("e)\t (4*3<6 || 3>5-2) && 3+2<12 \t es igual a %f\n", e);
    printf("f)\t 7+3*6/2-1 \t es igual a %f\n", f);
    printf("g)\t 2%2+2*2-1/2 \t es igual a %f\n", g);
    printf("h)\t (3*9*(3+(9*3/(3)))) \t es igual a %f\n",h);
}
