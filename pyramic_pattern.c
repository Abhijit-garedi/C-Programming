// simple c program to print pyramid pattern 

#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; ++i) {
        for(space = 1; space <= rows-i; ++space)
            printf("  ");
        for(j = 0; j != 2*i-1; ++j)
            printf("* ");
        printf("\n");
    }

    return 0;
}
