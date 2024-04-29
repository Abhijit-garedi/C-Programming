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
            printf("memory allocation failed.Existing");
            return 1;
        }

        //Input elements into the array
        printf("Enter %d elements:\n",size);
        for(i = 0; i<size; i++);
        {
            scanf("%d", arr[i]);

        }


        //Display element of the array 
        printf("Elements of the array:\n");
        for (i = 0; i< size; i++)
        {
            printf("%d", arr[i]);
        }
          
          printf("\n");

          // Free dynamicall allocated memory
          free(arr);

          return 0;




       }