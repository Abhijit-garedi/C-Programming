  // a simple c program to find whether the given number is even or odd
    
    #include <stdio.h>
     int main()
     {
         int num;


         printf("enter the number you wish to find");
         scanf("%d",&num);

         if(num % 2 == 0 )
         {
            printf("given number is even");
         }
         else 
         {
            printf("given number is odd");
         }
         return 0;
     
    
     }