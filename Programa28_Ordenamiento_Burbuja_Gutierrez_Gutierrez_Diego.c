#include <stdio.h>
void OrdenarBurbuja(double v[], int N);
    int main(){
    double vec[]={24,68,49,9,37,76};
    int i;
    printf("\n Los numeros del vector 1 son: \n");
    for (i=0; i<6; i++){
        printf("[%g] ", vec[i]);
    }
    printf("\n\n Por el metodo burbuja, los numeros son: \n\n");
    OrdenarBurbuja(vec, 6);
    return 0;
}

void OrdenarBurbuja(double v[6], int N)
{
    int i, j;
    double tmp;
    for (i=1; i<=N; i++){
        for (j=N-1; j>i; j--){
            if (v[j] < v [j-1]){
            tmp=v[j];
            v[j]=v[j-1];
            v[j-1]=tmp;
            }
        }
    printf("[%g] ", v[i-1]);
    }
}
