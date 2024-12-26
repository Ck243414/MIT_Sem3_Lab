int main() {

    int rows, cols;



    // Input matrix dimensions

    printf("Enter the number of rows: ");

    scanf("%d", &rows);

    printf("Enter the number of columns: ");

    scanf("%d", &cols);



    int A[rows][cols], B[rows][cols], C[rows][cols];



    // Input matrix A

    printf("Enter elements of matrix A:\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            scanf("%d", &A[i][j]);

        }

    }



    // Input matrix B

    printf("Enter elements of matrix B:\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            scanf("%d", &B[i][j]);

        }

    }



    // Calculate matrix C

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            C[i][j] = (A[i][j] > B[i][j]) ? A[i][j] : B[i][j];

        }

    }



    // Display matrix C

    printf("Matrix C (max of A and B):\n");

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            printf("%d\t", C[i][j]);

        }

        printf("\n");

    }



    return 0;

}
