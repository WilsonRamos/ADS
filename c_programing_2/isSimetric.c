#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSymmetric(int** matrix, int n) {
    // Iterate only through the upper half of the matrix (excluding the diagonal)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Compare the element at position (i, j) with the element at (j, i)
            if (matrix[i][j] != matrix[j][i]) {
                return false;  // If they are not equal, the matrix is not symmetric
            }
        }
    }
    return true;  // If all comparisons pass, the matrix is symmetric
}

int main() {
    int n;
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    // Dynamically allocate memory for an n x n matrix
    int** matrix = (int**)malloc(n * sizeof(int*)); // Allocate space for rows
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int)); // Allocate space for columns in each row
    }

    // Prompt the user to enter the elements of the matrix
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    if (isSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);  // Free each row
    }
    free(matrix);  // Free the entire matrix

    return 0;
}
