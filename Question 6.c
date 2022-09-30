/* Write a program in C to find the largest element using Dynamic Memory Allocation.    */

#include<stdio.h>

int main()
{
    int i,*ptr,size;
    int max=0;

    printf("\n enter size of array -> ");
    scanf("%d",&size);

    ptr=(int *)malloc(sizeof(int )*size);

    for(i=0;i<=size-1;i++)
    {
        scanf("%d",ptr+i);
    }

    for(i=0;i<=size-1;i++)
    {
        if(max<*(ptr+i))
            max=*(ptr+i);
    }

    printf("\n largest number is %d",max);
    free(ptr);
    ptr=NULL;

    return 0;
}
