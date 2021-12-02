#include <stdio.h>
void OrdenarSeleccion(double v[], int N);
    int main(){
    double vec[]={24,68,49,9,37,76};
    int i;
    printf("\n Los numeros del vector 1 son: \n");
    for (i=0; i<6; i++){
        printf("[%g] ", vec[i]);
    }
    printf("\n\n Por el metodo de ordenar seleccion, los numeros son: \n\n");
    OrdenarSeleccion(vec, 6);
     return 0;
}

void OrdenarSeleccion(double v[6], int N)
{
    int i, j, pos_min;
    double tmp;
    for (i=0; i<=N-1; i++){
        pos_min=i;
        for (j=i+1; j<N; j++)
            if (v[j]<v[pos_min])
            pos_min=j;
            tmp=v[i];
            v[i]=v[pos_min];
            v[pos_min]= tmp;
            printf("[%g] ", v[i]);
    }
}
