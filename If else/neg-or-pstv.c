  // a simple c program to find whether given number is negative or positive.

   #include <stdio.h>
    int main()
    {
         //declaration value
         int num;

         //Input number
         printf("Enter a number:");
         scanf("%d",&num);

         //Running loops for value
         if(num>0)
         {
            printf("Given number is positive");

         }
         else 
         {
            printf("given number is negative");
         }
         return 0;
    }