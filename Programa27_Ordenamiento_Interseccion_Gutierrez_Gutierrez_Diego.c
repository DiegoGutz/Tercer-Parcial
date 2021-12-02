#include <stdio.h>
void OrdenarInsercion(double v[], int N);
int main(){
    double vec[]={24,68,49,9,37,76};
    int i;
    printf("\n Los numeros del vector 1 son: \n");
    for (i=0; i<6; i++){
        printf("[%g] ", vec[i]);
    }
    printf("\n\n Por el metodo de ordenar inserccion, los numeros son: \n\n");
    OrdenarInsercion(vec, 6);
    return 0;
}

void OrdenarInsercion(double v[6], int N)
{
    int i, j;
    double tmp;
    for (i=0; i<N; i++){
        tmp=v[i];
        for (j=i; (j>0) && (tmp<v[j-1]); j--)
            v[j]=v[j-1];
            v[j]=tmp;
            printf("[%g] ", v[j]);
    }
}
