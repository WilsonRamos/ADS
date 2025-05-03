#include <stdio.h>
#include "matrix.h"

// Crea una matriz con las dimensiones dadas
Matrix matrix_create(int rows, int cols) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    return m;
}

// Establece un valor en la matriz
void matrix_set(Matrix* matrix, int row, int col, double value) {
    if (row >= 0 && row < matrix->rows && col >= 0 && col < matrix->cols) {
        matrix->data[row][col] = value;
    }
}

// Obtiene un valor de la matriz
double matrix_get(Matrix matrix, int row, int col) {
    if (row >= 0 && row < matrix.rows && col >= 0 && col < matrix.cols) {
        return matrix.data[row][col];
    }
    return 0;
}

// Suma dos matrices
Matrix matrix_add(Matrix m1, Matrix m2) {
    if (m1.rows != m2.rows || m1.cols != m2.cols) {
        printf("Las matrices no tienen las mismas dimensiones\n");
        return m1;
    }
    Matrix result = matrix_create(m1.rows, m1.cols);
    for (int i = 0; i < m1.rows; i++) {
        for (int j = 0; j < m1.cols; j++) {
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    return result;
}

// Multiplica dos matrices
Matrix matrix_multiply(Matrix m1, Matrix m2) {
    if (m1.cols != m2.rows) {
        printf("Las matrices no son multiplicables\n");
        return m1;
    }
    Matrix result = matrix_create(m1.rows, m2.cols);
    for (int i = 0; i < m1.rows; i++) {
        for (int j = 0; j < m2.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < m1.cols; k++) {
                result.data[i][j] += m1.data[i][k] * m2.data[k][j];
            }
        }
    }
    return result;
}

// Imprime la matriz
void matrix_print(Matrix matrix) {
    for (int i = 0; i < matrix.rows; i++) {
        for (int j = 0; j < matrix.cols; j++) {
            printf("%lf ", matrix.data[i][j]);
        }
        printf("\n");
    }
}
