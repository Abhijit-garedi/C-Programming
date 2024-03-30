#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], result[10][10];

    // Input matrix A
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input matrix B
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d", &r2, &c2);

    printf("Enter the elements of matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    if (c1 == r2) {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                result[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Output the result matrix
        printf("Resultant matrix after multiplication:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix multiplication is not possible as the number of columns of matrix A is not equal to the number of rows of matrix B.\n");
    }

    return 0;
}
