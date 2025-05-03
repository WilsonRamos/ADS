#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int start = 0;  // Inicia desde el primer carácter
    int end = strlen(str) - 1;  // Inicia desde el último carácter
    char temp;  // Variable temporal para hacer el intercambio

    // Intercambiamos los caracteres desde los extremos hacia el centro
    while (start < end) {
        // Intercambiamos los caracteres en las posiciones start y end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Movemos los índices hacia el centro
        start++;
        end--;
    }
}

int main() {
    char str[] = "MC202";

    // Llamamos a la función reverse para invertir la cadena
    reverse(str);

    // Imprimimos el resultado
    printf("Cadena invertida: %s\n", str);

    return 0;
}
