#include <stdio.h>

void copy(char str1[], char str2[]) {
    int i = 0;
    // Copiamos los caracteres de str1 a str2
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';  // Aseguramos que str2 termine con un carácter nulo
}

int main() {
    char str1[] = "Hola, mundo!";
    char str2[50];  // Reservamos espacio suficiente para str2

    // Llamamos a la función copy para copiar str1 a str2
    copy(str1, str2);

    // Imprimimos el contenido de str2 para verificar la copia
    printf("str2: %s\n", str2);

    return 0;
}
