#include <stdio.h>
#include <math.h>

int main() 
{
    int num, res; 
    printf("Enter n: ");
    scanf("%d", &num);
    res = sqrt(num); 
    printf("Square root of %d is %d\n", num, res);
    return 0;
}
