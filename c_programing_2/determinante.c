#include <stdio.h>

double determinant3x3(double matrix[3][3]) {
    // Extracting the elements of the matrix
    double a = matrix[0][0], b = matrix[0][1], c = matrix[0][2];
    double d = matrix[1][0], e = matrix[1][1], f = matrix[1][2];
    double g = matrix[2][0], h = matrix[2][1], i = matrix[2][2];
    
    // Applying the determinant formula for a 3x3 matrix
    double det = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    
    return det;
}

int main() {
    // Define a 3x3 matrix
    double matrix[3][3] = {
        {1, 2, 3},
        {0, 4, 5},
        {1, 0, 6}
    };

    // Compute the determinant of the matrix
    double det = determinant3x3(matrix);

    // Print the determinant
    printf("The determinant of the matrix is: %lf\n", det);

    return 0;
}
