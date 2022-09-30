/* Write a program to calculate the sum of n numbers entered by the user using malloc
    */

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
