#include <stdio.h>

int main(){

	int m, n, j, i;

	printf("Escriba el número de filas de la matriz: ");
	scanf("%d", &m);
	printf("Escriba el numero de columnas de la matriz: ");
	scanf("%d", &n);

	if(m<=50 && n<=50){
        int mat[m][n];

        printf("Introduzca los valores de la matriz: ");

        for (i=0; i<m; i++){
            for (j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
        }

        printf("La matriz quedaria de la siguiente manera: \n\n");
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
            printf("%d  ", mat[i][j]);
            }
            printf("\n");
        }

            printf("La traspuesta de la matriz dada es: \n\n");
        for (i=0; i<n; i++){
            for (j=0; j<m; j++){
            printf("%d  ", mat[j][i]);
            }
            printf("\n");
        }
	}
	else{
        printf("Error, las filas o las columnas exceden 50 caracteres");
	}

	return 0;
}
