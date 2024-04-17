// simple c program to reverse a number using the function 
  // reverseNumber()

  #include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    
    // Input a number 
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Reverse the number using the function
    int reversed = reverseNumber(num);
    
    // Output 
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
