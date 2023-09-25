#include<stdio.h>
void main()
{
    int i,count=0;
    char e[]="harshi";
    
    

    for(i=0;e[i]!='\0';i++)
    {
       count=count+1;
    }
    printf("\nlenght is %d",count);
}
