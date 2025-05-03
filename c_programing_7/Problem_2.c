#include <stdio.h>
#include <stdlib.h>

double*** allocate_3d_matrix(int m, int n, int k) {
    //filas principales
    double ***matrix = malloc(m * sizeof(double **));  
    for (int i = 0; i < m; i++) {
        //columnas de cada fila
        matrix[i] = malloc(n * sizeof(double *));  
        for (int j = 0; j < n; j++) {
            //Para cada fila
            matrix[i][j] = malloc(k * sizeof(double)); 
        }
    }
    return matrix;
}

void free_3d_matrix(double ***matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            free(matrix[i][j]);  // Liberamos cada sub-arreglo
        }
        free(matrix[i]);  // Liberamos cada fila
    }
    free(matrix);  // Liberamos el arreglo principal
}

int main() {
    int m = 3, n = 3, k = 3;

    double ***matrix = allocate_3d_matrix(m, n, k);

    ////FILL
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < k; l++) {
                matrix[i][j][l] = i + j + l; 
            }
        }
    }

    //PRINT
    for (int i = 0; i < m; i++) {
        printf("Matrix[%d]:\n", i);
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < k; l++) {
                printf("%lf ", matrix[i][j][l]);
            }
            printf("\n");
        }
    }

    free_3d_matrix(matrix, m, n);
    return 0;
}
