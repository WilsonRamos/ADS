#include <stdio.h>

#define MAX_SIZE 100  // Size of Matrix

int esMatrizPermutacion(int matriz[MAX_SIZE][MAX_SIZE], int n) {
    //Verify ROW
    for (int i = 0; i < n; i++) {
        int contador = 0;
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 1) {
                contador++;
            }
        }
        if (contador != 1) {
            return 0;
        }
    }

    // Verify Colum
    for (int j = 0; j < n; j++) {
        int contador = 0;
        for (int i = 0; i < n; i++) {
            if (matriz[i][j] == 1) {
                contador++;
            }
        }
        if (contador != 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Ingrese el tamaño de la matriz (n x n): ");
    scanf("%d", &n);

    int matriz[MAX_SIZE][MAX_SIZE];

    printf("Ingrese los elementos de la matriz (0 o 1):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    // Verify
    if (esMatrizPermutacion(matriz, n)) {
        printf("La matriz es una matriz de permutación.\n");
    } else {
        printf("La matriz no es una matriz de permutación.\n");
    }

    return 0;
}
