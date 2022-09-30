/* Define a function to input variable length string and store it in an array without
    memory wastage. */

#include<stdio.h>

int main()
{
    char *ptr,c;
    int i=0,j=1;

    ptr=(char*)malloc(sizeof(char));

    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        ptr= (char*)realloc(ptr,j*sizeof(char));
        ptr[i]=c;
    }
    ptr[i]='\0';

    for(i=0;*ptr+i!='\0';i++)
    {
        printf("%c",*ptr+i);
    }

    return 0;
}
