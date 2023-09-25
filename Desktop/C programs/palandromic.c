#include<stdio.h>
#include<string.h>
int is_palandromic(char str[])
{
    int top=-1;
    int i;
    char s[30],str_item;
    for(i=0;i<strlen(str);i++)
    {
        s[++top]=str[i];
    }
    for(i=0;i<strlen(str);i++)
    {
        str_item=s[top--];
        if(str[i]!=str_item)
        return 0;
        else 
        return 1;
    }
}
void main()
{
    char str[30];
    printf("enter the string ");
    scanf("%s",str);
    if(is_palandromic(str))
    printf("palandromic");
    else
    printf("not palandromic");
}