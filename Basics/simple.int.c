  
    
      // a simple c program to find the simpel interest of given amount 

       #include <stdio.h>
          
          int main() 
           {
             int principle, time, rate, si;


              printf("enter the amount of principle:");
              scanf("%d",&principle);

              printf("enter the duration of time in years:");
              scanf("%d",&time);

              printf("enter the percentage of rate:");
              scanf("%d",&rate);

              si = principle * time * rate /100;

              printf("%d is the amount of simple interest",si);

              return 0;

           }