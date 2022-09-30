/* Write a program to allocate memory dynamically of the size in bytes entered by the
    user. Also handle the case when memory allocation is failed.    */

#include<stdio.h>

int main()
{
    int size,i;
    int *ptr;

    printf("\n enter the size of array -> ");
    scanf("%d",&size);

    ptr=(int*) malloc (sizeof(int)*size);

    if(ptr==NULL)
    printf("\n Memory allocation failed ");
    printf("\n enter number -> ");

    for (i=0;i<=size-1;i++)
    {
        scanf("%d",ptr+i);
    }

    for (i=0;i<=size-1;i++)
    {
        printf("%d",*ptr+i);
    }

    return 0;
}
