// a simple program to find whether it is divisible by 5 or not


 #include <stdio.h> 
  int main()
  {
    int n;

    printf("enter the number to check whether it is divisible by 5 or not: ");
    scanf("%d", &n);

    if(n%5 == 0)
    {
        printf("given number is divisible by 5 ");

    }
    else
    {
        printf("given number is not divisible by 5");
    }
  }