#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){

    int i, j;
    int aux;
    int sumafila;
    int monto;
    int PRO[5][12];
    int PRE[5];


    for(i=1; i<=5; i++){
        printf("Dame el precio del producto %i: ", i);
        scanf("%d", &PRE[i]);
        for(j=1; j<=12; j++){
            printf("Dame el valor de las unidades vendidas en los ultimos 12 meses: ");
            scanf("%d", &PRO[i][j]);
        }
    }

    for(i=1; i<=5; i++){
        for(j=1; j<=12; j++){
            printf("[%d]\t", PRO[i][j]);
        }
        printf("\n");
    }

    for(i=1; i<=5; i++){
        aux=sumafila;
        sumafila=0;
        for(j=1; j<=12; j++){
            sumafila=sumafila+PRO[i][j];
            monto=sumafila*PRE[i];
        }
        printf("El monto del producto %i en el año es: %d", i, monto);
        printf("\n");
        printf("El promedio de cada producto es: %.2f", monto/3.0);
        printf("\n");
    }


    return 0;
}
