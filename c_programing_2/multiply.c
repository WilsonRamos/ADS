#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **A, int **B, int **C, int m, int n, int p) {
    // Initialize the product matrix C to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply matrices A and B to produce C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int m = 2, n = 3, p = 2;
    
    // Dynamically allocate memory for matrices A, B, and C
    int **A = (int**)malloc(m * sizeof(int*));
    int **B = (int**)malloc(n * sizeof(int*));
    int **C = (int**)malloc(m * sizeof(int*));

    for (int i = 0; i < m; i++) {
        A[i] = (int*)malloc(n * sizeof(int)); // Allocate columns for A
    }

    for (int i = 0; i < n; i++) {
        B[i] = (int*)malloc(p * sizeof(int)); // Allocate columns for B
    }

    for (int i = 0; i < m; i++) {
        C[i] = (int*)malloc(p * sizeof(int)); // Allocate columns for C
    }

    // Matrix A (2x3)
    int matA[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // Matrix B (3x2)
    int matB[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Copy values from matA and matB into the dynamically allocated arrays
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = matA[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            B[i][j] = matB[i][j];
        }
    }

    // Multiply A and B, store the result in C
    multiplyMatrices(A, B, C, m, n, p);
    
    printf("Product of matrices A and B is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    //// Free dynamically allocated memory ////
    for (int i = 0; i < m; i++) {
        free(A[i]);
    }
    free(A);
    for (int i = 0; i < n; i++) {
        free(B[i]);
    }
    free(B);
    for (int i = 0; i < m; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}
