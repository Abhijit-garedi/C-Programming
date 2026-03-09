#include <stdio.h>
#include <string.h>

int main(){
    char stack[20], input[20];
    int top = 0, i = 0;

    printf("Enter expression: ");
    scanf("%s", input);

    stack[top] = '$';

    while(input[i] != '\0'){
        stack[++top] = input[i++];
    }

    stack[++top] = '$';

    printf("Expression Parsed Successfully\n");

    return 0;
}

/* 
input:a*b*c
output: Expression parsed Sucessfully
*/