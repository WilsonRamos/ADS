#ifndef MATRIX_H
#define MATRIX_H

#define MAX_ROWS 10  // Número máximo de filas
#define MAX_COLS 10  // Número máximo de columnas

typedef struct {
    double data[MAX_ROWS][MAX_COLS];  // Arreglo bidimensional para almacenar los valores de la matriz
    int rows;  // Número de filas de la matriz
    int cols;  // Número de columnas de la matriz
} Matrix;

// Funciones del ADT Matrix
Matrix matrix_create(int rows, int cols);  // Crea una matriz con dimensiones dadas
void matrix_set(Matrix* matrix, int row, int col, double value);  // Establece un valor en la matriz
double matrix_get(Matrix matrix, int row, int col);  // Obtiene un valor de la matriz
Matrix matrix_add(Matrix m1, Matrix m2);  // Suma dos matrices
Matrix matrix_multiply(Matrix m1, Matrix m2);  // Multiplica dos matrices
void matrix_print(Matrix matrix);  // Imprime la matriz

#endif
