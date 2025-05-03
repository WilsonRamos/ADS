#include <stdio.h>

int compare(char str1[], char str2[]) {
    int i = 0;
    
    // Recorremos ambas cadenas hasta que encontremos una diferencia o lleguemos al final de alguna de las cadenas
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;  // str1 es lexicográficamente menor que str2
        } else if (str1[i] > str2[i]) {
            return 1;   // str1 es lexicográficamente mayor que str2
        }
        i++;
    }
    
    // Si llegamos aquí, las cadenas son iguales hasta el punto en que ambas tienen un '\0'
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;  // Las cadenas son iguales
    } else if (str1[i] == '\0') {
        return -1; // str1 es menor si es más corta
    } else {
        return 1;  // str2 es menor si es más corta
    }
}

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    // Llamamos a la función compare y mostramos el resultado
    int result = compare(str1, str2);

    if (result == 0) {
        printf("Las cadenas son iguales.\n");
    } else if (result < 0) {
        printf("str1 es lexicográficamente menor que str2.\n");
    } else {
        printf("str1 es lexicográficamente mayor que str2.\n");
    }

    return 0;
}
