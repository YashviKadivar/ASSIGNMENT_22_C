/* Find out the maximum and minimum from an array using dynamic memory allocation
    in C.   */


#include<stdio.h>

int main()
{
    int *ptr,i,size;
    int max=0,min=100000;

    printf("\n enter size of array -> ");
    scanf("%d",&size);

    ptr=(int*)malloc(sizeof(int)*size);
    printf("\n enter %d values in an array -> ",size);

    for(i=0;i<=size-1;i++)
    {
        scanf("%d",ptr+i);
    }

    for(i=0;i<=size-1;i++)
    {
        if(max<*(ptr+i))
            max=*(ptr+i);

        if(min>*(ptr+i))
            min=*(ptr+i);
    }
    printf("\n maximum number is %d and minimum number is %d",max,min);

    return 0;
}
