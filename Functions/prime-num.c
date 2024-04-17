// C program to check if a number is prime 
   // isPrime() 

   #include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is prime using the function
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    
    return 0;
}
