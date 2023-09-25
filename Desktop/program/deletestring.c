//delete the contant from string//
#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],i,item;
    printf("enter ths string");
    scanf("%s",a);
    printf("enter the character tobe delete");
    scanf("%c",&item);  
        for(i=0;i<strlen(a);i++)
    {
        if(item==a[i])
        {
            a[i]==a[i+1];
        }

    }
    printf("%s",a);

}