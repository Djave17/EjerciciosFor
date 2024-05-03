#include <iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int** matrix1, int** matrix2, int** result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Get dimensions of matrix 1 from user
    cout << "Enter number of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter number of columns for matrix 1: ";
    cin >> cols1;

    // Check if matrix 1 has at least one column
    if (cols1 < 1) {
        cout << "Matrix 1 must have at least one column!" << endl;
        return 1;
    }

    // Get dimensions of matrix 2 from user
    cout << "Enter number of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter number of columns for matrix 2: ";
    cin >> cols2;

    // Check if matrix 2 has at least one row
    if (rows2 < 1) {
        cout << "Matrix 2 must have at least one row!" << endl;
        return 1;
    }

    // Check if matrices can be multiplied
    if (cols1!= rows2) {
        cout << "Matrices cannot be multiplied!" << endl;
        return 1;
    }

    // Create matrices
    int** matrix1 = new int*[rows1];
    int** matrix2 = new int*[rows2];
    int** result = new int*[rows1];

    for (int i = 0; i < rows1; i++) {
        matrix1[i] = new int[cols1];
    }
    for (int i = 0; i < rows2; i++) {
        matrix2[i] = new int[cols2];
    }
    for (int i = 0; i < rows1; i++) {
        result[i] = new int[cols2];
    }

    // Get matrix 1 elements from user
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Get matrix 2 elements from user
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Multiply matrices
    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);

    // Print result
    cout << "Resultant matrix:" << endl;
    printMatrix(result, rows1, cols2);

    // Deallocate memory
    for (int i = 0; i < rows1; i++) {
        delete[] matrix1[i];
    }
    delete[] matrix1;

    for (int i = 0; i < rows2; i++) {
        delete[] matrix2[i];
    }
    delete[] matrix2;

    for (int i = 0; i < rows1; i++) {
        delete[] result[i];
    }
    delete[] result;

    return 0;
}