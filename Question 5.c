/* Write a program to read a one dimensional array, print sum of all elements along with
    inputted array elements using dynamic memory allocation.    */

#include<stdio.h>

int main()
{
    int i,*ptr;
    int size=0;
    int sum=0;

    printf("\n enter size of array  -> ");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));
    printf("\n enter %d values in array -> ",size);

    for(i=0;i<=size-1;i++)
    {
        scanf("%d",ptr+i);
    }

    for(i=0;i<=size-1;i++)
    {
        sum=sum+ *(ptr+i);
    }

    printf("sum is = %d",sum);
    free(ptr);
    ptr=NULL;

    return 0;
}
