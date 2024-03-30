#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], transpose[10][10];

    // Input number of rows and columns
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    // Input elements of the matrix
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Finding the transpose of the matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Displaying the transpose matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
