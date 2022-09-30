/* Write a program to demonstrate dangling pointers in C.   */

#include<stdio.h>

int main()
{
    int *ptr;

    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("\n before %d",*ptr);
    free(ptr);
    printf("\n after %d",*ptr);
}
