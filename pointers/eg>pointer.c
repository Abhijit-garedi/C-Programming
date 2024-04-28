// simplest c program of pointer to pointer


 #include <stdio.h>

int main()
 {
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;
    printf("Value of num: %d\n", **ptr2);
    return 0;
}
