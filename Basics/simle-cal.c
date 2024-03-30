   
   // a simple c program to make a calculator which will preform additon, substraction,multiplication, division 


    #include <stdio.h>
       
       int main()
         
         {
              int num1,num2,c,option;


                printf("Enter the first number:");
                scanf("%d",&num1);

                printf("Enter the second number:");
                scanf("%d",&num2);


                printf("\n1.addition");

                printf("\nsubstraction");

                printf("\n3.multiplication");

                printf("\n4.Division");

                printf("\nEnter any option from option from one to four ");
                scanf("%d",&option);

                switch(option)

                {
                     case 1:
                     c = num1 + num2;
                     printf("%d",c);
                     break;


                     case 2:
                     c = num1 - num2;
                     printf("%d",c);
                     break;

                     case 3:
                     c = num1 * num2;
                     printf("%d",c);
                     break;

                     case 4:
                     c = num1 + num2;
                     printf("%d",c);
                     break;

                     default:
                    printf("selcected wrong option choose agian another option from 1 to 4");
                     
                    


                }
                return 0;

           
           
           }