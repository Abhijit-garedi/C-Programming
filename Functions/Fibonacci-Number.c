// C program to calculate the nth Fibonacci Number
  //fibonacci()

  #include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    // Input 
    printf("Enter the position of Fibonacci number: ");
    scanf("%d", &n);
    
    // Calculate Fibonacci number 
    int fib = fibonacci(n);
    
    // Output
    printf("Fibonacci number at position %d: %d\n", n, fib);
    
    return 0;
}
