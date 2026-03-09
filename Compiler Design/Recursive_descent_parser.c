#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i = 0;
char str[20];

void E();
void EP();
void T();

void E(){
    T();
    EP();
}

void EP(){
    if(str[i] == '+'){
        i++;
        T();
        EP();
    }
}

void T(){
    if(str[i] == 'i'){
        i++;
    }
    else{
        printf("Error\n");
        exit(0);
    }
}

int main(){
    printf("Enter string: ");
    scanf("%s", str);

    E();

    if(i == strlen(str))
        printf("Valid String\n");
    else
        printf("Invalid String\n");

    return 0;
}

/* output 
input: i+i+i
output: string is valid
*/