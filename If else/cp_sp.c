// a simple c program using if else to show whether it is profit or loss


 #include <stdio.h>
    int main()
     {
        
        int sp;
        int cp = 100;

        printf("enter the selling price (sp): ");
        scanf("%d",&sp);

        if( sp < cp )
        {
         printf("loss");
        }
        else
        {
         printf("profit");
        }
     }