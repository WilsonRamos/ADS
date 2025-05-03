#ifndef SET_H
#define SET_H

#define MAX_SIZE 100  // Tamaño máximo del conjunto

typedef struct {
    int data[MAX_SIZE];  // Arreglo para almacenar los elementos del conjunto
    int size;            // Número de elementos en el conjunto
} Set;

// Funciones del ADT Set
Set set_create();  // Crea un conjunto vacío
void set_add(Set* set, int value);  // Agrega un valor al conjunto
Set set_union(Set set1, Set set2);  // Realiza la unión de dos conjuntos
Set set_intersection(Set set1, Set set2);  // Realiza la intersección de dos conjuntos
int set_contains(Set set, int value);  // Verifica si un valor está en el conjunto
void set_print(Set set);  // Imprime los elementos del conjunto

#endif
