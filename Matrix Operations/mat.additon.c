#include <stdio.h>

int main() {
    int r1, r2, c1, c2, i, j, a[10][10], b[10][10], c[10][10];

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (r1 == r2 && c1 == c2) {
        printf("Enter elements of matrix A:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of matrix B:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        printf("Sum of matrices:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Addition is not possible as the matrices are not of the same size.\n");
    }

    return 0;
}
