#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x){
    stack[++top] = x;
}

char pop(){
    return stack[top--];
}

int main(){
    char exp[20], *e, x;

    printf("Enter expression: ");
    scanf("%s", exp);

    e = exp;

    while(*e){
        if(isalnum(*e))
            printf("%c", *e);
        else{
            push(*e);
        }
        e++;
    }

    while(top != -1)
        printf("%c", pop());

    return 0;
}

/* output
input:a+b
output:ab+
*/