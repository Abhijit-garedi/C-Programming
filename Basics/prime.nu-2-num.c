#include <stdio.h>

int main() {
    int n1, n2, i, j, count;

    printf("Enter range: ");
    scanf("%d %d", &n1, &n2);

    printf("Prime numbers between %d and %d are: ", n1, n2);

    for (i = n1; i <= n2; i++) {
        count = 0; // Reset count for each number i
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
                break; // Not a prime, move to next number
            }
        }
        if (count == 0 && i != 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
