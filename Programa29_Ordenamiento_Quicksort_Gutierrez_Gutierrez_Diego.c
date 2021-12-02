#include <stdio.h>
void quicksort (double v[], int izda, int dcha);
int partir (double v[], int primero, int ultimo);
void swap (double *a, double *b);
int main(){
double vec[]={24,68,49,9,37,76};
int i;
printf("\n Los numeros del vector 1 son: \n");
for (i=0; i<6; i++){
printf("[%g] ", vec[i]);
}
printf("\n\n Por el metodo quicksort, los numeros son: \n\n");
quicksort(vec, 0, 5);
for (i=1; i<=6; i++){
printf("[%g] ", vec[i-1]);
}
return 0;
}

void quicksort (double v[], int izda, int dcha)
{
int pivote, i=1; // poscición del pivote
if (izda<dcha){
pivote=partir (v, izda, dcha);
quicksort (v, izda, pivote-1);
quicksort (v, pivote+1, dcha);
}
}
// intercambio de dos valores
void swap (double *a, double *b)
{
double tmp;
tmp=*a;
*a=*b;
*b=tmp;
}
//división del vector en dos partes
//- devuelve la posición del pivote
int partir (double v[], int primero, int ultimo)
{
double pivote=v[primero]; // valor del pivote
int izda=primero+1;
int dcha=ultimo;
do { // pivotear
while ((izda<=dcha) && (v[dcha]<=pivote))
izda++;
while ((izda<=dcha) && (v[dcha]>pivote))
dcha--;
if (izda<dcha){
swap ( &(v[izda]), &(v[dcha]) );
dcha--;
izda++;
}
} while (izda<=dcha);
// Colocar el pivote en su sitio
swap (&(v[primero]), &(v[dcha]));
return dcha; // Posición del pivote
}
