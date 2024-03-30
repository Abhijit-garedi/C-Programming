#include <stdio.h>

int main() {
    int num1, num2, num3;
    float avg;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    avg = (num1 + num2 + num3) / 3.0;
    
    printf("Average of three numbers: %f", avg);
    
    return 0;
}
