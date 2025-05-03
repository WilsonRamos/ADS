#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(double** matrix, double** transposed, int n, int m) {
    // Iterate over each element and compute the transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Transpose operation: element at position (i, j) goes to (j, i)
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int n, m;

    // Ask for matrix dimensions
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    // Dynamically allocate memory for the original matrix
    double** matrix = (double**)malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double*)malloc(m * sizeof(double));
    }

    // Dynamically allocate memory for the transposed matrix
    double** transposed = (double**)malloc(m * sizeof(double*));
    for (int i = 0; i < m; i++) {
        transposed[i] = (double*)malloc(n * sizeof(double));
    }

    // Input matrix elements
    printf("Enter the elements of the matrix (%dx%d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Compute the transpose
    transposeMatrix(matrix, transposed, n, m);

    // Display the transposed matrix
    printf("Transposed matrix (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lf ", transposed[i][j]);
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    for (int i = 0; i < m; i++) {
        free(transposed[i]);
    }
    free(transposed);

    return 0;
}
