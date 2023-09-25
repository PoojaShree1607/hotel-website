#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
    int i;
    printf("enter the string");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("%s",b);
}