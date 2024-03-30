// a c program to show grade of a student in a very simple way. 

  #include <stdio.h>
      int main() 
      {
            int grade;

          printf("enter the grade of the student:");
          scanf("%d",&grade);


          if(grade >= 90)
          {
            printf("grade is A+");
          }
          
          
          else if(grade >= 80)
          {
            printf("grade is A");
          }
          
          
          else if(grade >= 70)
          {
            printf("grade is B+");
          }
          
          else if(grade >= 60)
          {
            printf("grade is B");
          }
          
                else if(grade >= 50)
                   {
                   printf("grade is C");
                    }
          
          else 
          {
            printf("you are failed:");
          }
         return 0;
      }