// take integer input and print the abosolute value of that integer

 // its on modulus concept but its not like( % )modulus

 // its like | 7 | = 7
  //    | -7 | = 7   

  // like that concept ( - becomes + ) &   (+ remains +)


   #include <stdio.h>
      int main()
      {
        int n;

        printf("enter the integer: ");
        scanf("%d", &n);

        if(n < 0)
        {
            n = n * (-1);
        }

        printf("the absolute value is : %d ", n);
      }