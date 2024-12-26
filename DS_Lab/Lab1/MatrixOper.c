#include <stdio.h>



// Function to read a matrix

void readMatrix(int matrix[][100], int rows, int cols) {

    printf("Enter the matrix elements:\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            scanf("%d", &matrix[i][j]);

        }

    }

}



// Function to print a matrix

void printMatrix(int matrix[][100], int rows, int cols) {

    printf("Matrix:\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            printf("%d ", matrix[i][j]);

        }

        printf("\n");

    }

}



// Function to multiply two matrices

void multiplyMatrices(int A[][100], int B[][100], int C[][100], int rows1, int cols1, int rows2, int cols2) {

    if (cols1 != rows2) {

        printf("Matrix multiplication not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");

        return;

    }



    for (int i = 0; i < rows1; i++) {

        for (int j = 0; j < cols2; j++) {

            C[i][j] = 0;

            for (int k = 0; k < cols1; k++) {

                C[i][j] += A[i][k] * B[k][j];

            }

        }

    }

}



// Function to add two matrices

void addMatrices(int A[][100], int B[][100], int C[][100], int rows, int cols) {

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            C[i][j] = A[i][j] + B[i][j];

        }

    }

}



// Function to check if a square matrix is a magic square

int isMagicSquare(int square[][100], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {

        sum += square[0][i];

    }



    int rowSum = 0, colSum = 0, diagSum1 = 0, diagSum2 = 0;



    // Check row sums, column sums, and diagonal sums

    for (int i = 0; i < n; i++) {

        rowSum = colSum = 0;

        for (int j = 0; j < n; j++) {

            rowSum += square[i][j];

            colSum += square[j][i];

        }

        if (rowSum != sum || colSum != sum) {

            return 0; // Not a magic square

        }



        diagSum1 += square[i][i];

        diagSum2 += square[i][n - i - 1];

    }



    if (diagSum1 != sum || diagSum2 != sum) {

        return 0; // Not a magic square

    }



    return 1; // It's a magic square

}



int main() {

    int A[100][100], B[100][100], C[100][100];

    int rows1, cols1, rows2, cols2;



    // Input matrix A

    printf("Enter the number of rows and columns for matrix A: ");

    scanf("%d %d", &rows1, &cols1);

    readMatrix(A, rows1, cols1);



    // Input matrix B

    printf("Enter the number of rows and columns for matrix B: ");

    scanf("%d %d", &rows2, &cols2);

    readMatrix(B, rows2, cols2);



    // Matrix multiplication

    if (cols1 == rows2) {

        multiplyMatrices(A, B, C, rows1, cols1, rows2, cols2);

        printMatrix(C, rows1, cols2);

    } else {

        printf("Matrix multiplication not possible.\n");

    }



    // Matrix addition

    if (rows1 == rows2 && cols1 == cols2) {

        addMatrices(A, B, C, rows1, cols1);

        printf("Matrix Sum:\n");

        printMatrix(C, rows1, cols1);

    } else {

        printf("Matrix addition not possible. Matrices must have the same dimensions.\n");

    }



    // Check if a square matrix is a magic square

    int magicSquare[100][100];

    int n;

    printf("Enter the order of the square matrix: ");

    scanf("%d", &n);

    readMatrix(magicSquare, n, n);

    if (isMagicSquare(magicSquare, n)) {

        printf("It's a magic square.\n");

    } else {

        printf("It's not a magic square.\n");

    }



    return 0;

}

