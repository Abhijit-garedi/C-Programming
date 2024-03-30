// a c program to find a area and perimeter of rectangle 


 #include <stdio.h> 
    int main()
     {
         int length,breadth,area, perimeter;

         //Input length and breadth of rectangle
          printf("enter the length of a rectangle:");
          scanf("%d",&length);

          printf("enter the breadth of a rectangle:");
          scanf("%d",&breadth);

          
          //Calculate area and perimeter of rectangle;
          area = length * breadth;
          perimeter = 2 * ( length + breadth);

          //display results
          printf("%d is the area of rectangle:",area);
          printf("\n%d is the perimeter of rectangle",perimeter);

          //end of the program
          return 0;
        

     }