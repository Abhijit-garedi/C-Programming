// a very simple c program to print number patters  

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
