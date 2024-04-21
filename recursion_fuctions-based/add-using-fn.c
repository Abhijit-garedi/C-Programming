// a simple addition c program using add function 
  // int add(int.., int..)


  #include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    
    // Input 
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Call the add function and store the result
    sum = add(num1, num2);
    
    // Output 
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}
