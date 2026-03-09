#include <stdio.h>
#include <string.h>

struct symbol{
    char name[20], type[10];
    int value;
} table[20];

int count = 0;

void insert(){
    printf("Enter name type value: ");
    scanf("%s %s %d", table[count].name,
          table[count].type, &table[count].value);
    count++;
}

void display(){
    printf("\nNAME\tTYPE\tVALUE\n");
    for(int i = 0; i < count; i++)
        printf("%s\t%s\t%d\n",
               table[i].name,
               table[i].type,
               table[i].value);
}

int main(){
    int ch;

    do{
        printf("\n1.Insert 2.Display 3.Exit: ");
        scanf("%d", &ch);

        if(ch == 1)
            insert();
        else if(ch == 2)
            display();

    } while(ch != 3);

    return 0;
}

/* 1.Insert 2.Display 3.Exit: 1
Enter name type value: a int 10

1.Insert 2.Display 3.Exit: 1
Enter name type value: b float 20

1.Insert 2.Display 3.Exit: 2

NAME    TYPE    VALUE
a       int     10
b       float   20
*/