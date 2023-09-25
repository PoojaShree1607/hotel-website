#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#define size 5
void push(int s[],int *top,int ele)
{
    if(*top==size-1)
    {
        printf("stack overflow\n");
        return;
    }
    (*top)++;
    s[*top]=ele;
}
void pop(int s[],int *top)
{
    int ele;
    if(*top==-1)
    {
        printf("stack underflow\n");
        return;
    }
    ele=s[*top];
    (*top)--;
    printf("%d element is deleted\n",ele);
}
void display(int s[],int *top)
{
    int i;
    if(*top==-1)
    {
        printf("stack is empty");
        return;
    }
    for(i=0;i<=*top;i++)
    printf("%d\n",s[i]);

}
int is_palandromic(char str[])
{
    int i,top;
    char s[20],str_item;
    top=-1;
    for(i=0;i<strlen(str);i++)
    {
        s[++top]=str[i];
    }
    for(i=0;i<strlen(str);i++)
    {
        str_item=s[top--];
        if(str[i]!=str_item)
        return 0;
    }
    return 1;
}
void main()
{
    int top,s[10],ele;
    char str[20];
    int choice,flag;
    top=-1;
    for(;;)
    {
        printf("operation on stack");
        printf("1.push\n 2.pop\n 3.display \n 4.palandromic \n 5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the item ");
            scanf("%d",&ele);
            push(s,&top,ele);
            break;
            case 2:pop(s,&top);
            break;
            case 3:display(s,&top);
            break;
            case 4:printf("enter the string");
            scanf("%s",str);
            flag=is_palandromic(str);
            if(flag==0)
            printf("the string is not palandromic");
            else
            printf("the string is a palandromic");
            break;
            default:printf("Invalid choice\n");
            exit(0);


        }
        
    }
}