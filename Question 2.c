/* Write a program to ask the user to input a number of data values he would like to
    enter then create an array dynamically to accommodate the data values. Now take
    the input from the user and display the average of data values.         */

#include<stdio.h>

int main()
{
    int a,*ptr,i,size=0;
    int sum=0;

    printf("\n enter size of array -> ");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));

    printf("\n enter %d values in an array -> ",size);

    for(i=0;i<=size-1;i++)
    {
        scanf("%d",ptr+i);
    }

    for(i=0;i<=size-1;i++)
    {
        sum=sum+ *(ptr+i);
    }
    printf("\n[average is -> %d",sum/size);

    return 0;
}
