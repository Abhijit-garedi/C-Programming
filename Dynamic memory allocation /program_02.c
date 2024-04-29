// a simple porgram to find the memory allcoation for the 
// dynamic program 


 #include <stdio.h>
  #include <stdlib.h>
     
      int main()
       {
        int *arr;
        int size, i;


        //Ask the user to input the size of the array
        printf("Enter the size of the array; ");
        scanf("%d",&size);
        
        //Dynamically allocated memory for the array
        arr = (int *)malloc(size * sizeof(int));

        //check if memory allocation was sucessful
        if (arr == NULL)
        {
            printf("memory allocation failed.Existing")
        }



       }