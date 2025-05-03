#include <stdio.h>
#include "set.h"

// Crea un conjunto vacío
Set set_create() {
    Set new_set;
    new_set.size = 0;  // Inicializa el tamaño a 0
    return new_set;
}

// Agrega un valor al conjunto
void set_add(Set* set, int value) {
    if (set->size < MAX_SIZE && !set_contains(*set, value)) {
        set->data[set->size++] = value;  // Agrega el valor y aumenta el tamaño
    }
}

// Verifica si el valor está en el conjunto
int set_contains(Set set, int value) {
    for (int i = 0; i < set.size; i++) {
        if (set.data[i] == value) {
            return 1;  // Encontrado
        }
    }
    return 0;  // No encontrado
}

// Realiza la unión de dos conjuntos
Set set_union(Set set1, Set set2) {
    Set result = set_create();
    for (int i = 0; i < set1.size; i++) {
        set_add(&result, set1.data[i]);  // Agrega elementos de set1
    }
    for (int i = 0; i < set2.size; i++) {
        set_add(&result, set2.data[i]);  // Agrega elementos de set2
    }
    return result;
}

// Realiza la intersección de dos conjuntos
Set set_intersection(Set set1, Set set2) {
    Set result = set_create();
    for (int i = 0; i < set1.size; i++) {
        if (set_contains(set2, set1.data[i])) {
            set_add(&result, set1.data[i]);  // Agrega los elementos comunes
        }
    }
    return result;
}

// Imprime los elementos del conjunto
void set_print(Set set) {
    for (int i = 0; i < set.size; i++) {
        printf("%d ", set.data[i]);  // Imprime cada elemento del conjunto
    }
    printf("\n");
}
