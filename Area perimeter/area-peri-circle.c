 // simple program to find the area and perimeter of circle

  #include <stdio.h>

   int main()

    {
         //declaration of value
         int radius,area,perimeter;

         //Input value of radius
         printf("enter the radius of circle:");
         scanf("%d",&radius);

        //calculate the area and perimeter

        area = radius * radius;
        perimeter = 2 * 3.14 * radius;


        //printing area and perimeter
        printf("%d is the area of circle",area);
        printf("\n%d is the perimeter of circle:",perimeter);


        return 0;


    }