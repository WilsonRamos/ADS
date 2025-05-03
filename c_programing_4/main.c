#include <stdio.h>
#include "set.h"
#include "matrix.h"

int main() {
    // Crear los conjuntos
    Set set1 = set_create();
    Set set2 = set_create();

    // Agregar elementos a los conjuntos
    set_add(&set1, 1);
    set_add(&set1, 2);
    set_add(&set1, 3);

    set_add(&set2, 2);
    set_add(&set2, 3);
    set_add(&set2, 4);

    // Imprimir los conjuntos
    printf("Conjunto 1: ");
    set_print(set1);

    printf("Conjunto 2: ");
    set_print(set2);

    // Realizar la unión e imprimir
    Set union_set = set_union(set1, set2);
    printf("Unión: ");
    set_print(union_set);

    // Realizar la intersección e imprimir
    Set intersection_set = set_intersection(set1, set2);
    printf("Intersección: ");
    set_print(intersection_set);

    // Matrices
    Matrix m1 = matrix_create(2, 2);
    Matrix m2 = matrix_create(2, 2);

    matrix_set(&m1, 0, 0, 1.0);
    matrix_set(&m1, 0, 1, 2.0);
    matrix_set(&m1, 1, 0, 3.0);
    matrix_set(&m1, 1, 1, 4.0);

    matrix_set(&m2, 0, 0, 5.0);
    matrix_set(&m2, 0, 1, 6.0);
    matrix_set(&m2, 1, 0, 7.0);
    matrix_set(&m2, 1, 1, 8.0);

    printf("Matriz 1:\n");
    matrix_print(m1);

    printf("Matriz 2:\n");
    matrix_print(m2);

    Matrix sum = matrix_add(m1, m2);
    printf("Suma:\n");
    matrix_print(sum);

    Matrix product = matrix_multiply(m1, m2);
    printf("Multiplicación:\n");
    matrix_print(product);

    return 0;
}
