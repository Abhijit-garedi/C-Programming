#include <stdio.h>

int main() {
    int start, end, sum = 0;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    printf("Sum between %d and %d: %d\n", start, end, sum);

    return 0;
}
