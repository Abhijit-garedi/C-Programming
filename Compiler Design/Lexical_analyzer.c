#include <stdio.h>
#include <ctype.h>
#include <string.h>

char keywords[5][10] = {"int","float","if","else","return"};

int isKeyword(char *str){
    for(int i = 0; i < 5; i++){
        if(strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main(){
    char ch, buffer[20];
    int i = 0;

    FILE *fp;
    fp = fopen("input.c", "r");

    if(fp == NULL){
        printf("File not found\n");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF){

        if(isalpha(ch)){
            buffer[i++] = ch;

            while(isalnum(ch = fgetc(fp))){
                buffer[i++] = ch;
            }

            buffer[i] = '\0';
            i = 0;

            if(isKeyword(buffer))
                printf("Keyword: %s\n", buffer);
            else
                printf("Identifier: %s\n", buffer);
        }

        else if(isdigit(ch)){
            printf("Number: %c\n", ch);
        }

        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            printf("Operator: %c\n", ch);
        }
    }

    fclose(fp);
    return 0;
}

/* Input file 
int a = 10;
float b = 5;
if(a+b)
return a;

Output:
Keyword: int
Identifier: a
Number: 1
Number: 0
Keyword: float
Identifier: b
Number: 5
Keyword: if
Identifier: a
Operator: +
Identifier: b
Keyword: return
Identifier: a
*/