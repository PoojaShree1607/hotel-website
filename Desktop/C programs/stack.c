#include<stdio.h>
#include<stdlib.h>
int s[10],n,ch,top=-1,item,item_del,i;
void push()
{
    if(top==n-1)
    {
        printf("Stack overflow");
        return;
    }
    printf("enter the item to be inserted");
    scanf("%d",&item);
    s[++top]=item;
}
void pop()
{
    if(top=-1)
    {
        printf("Stack is underflow\n");
        return;
    }
    item_del=s[top--];
    printf("item deleted =%d",item_del);
}
void display()
{
    if(top=-1)
    {
        printf("empty stack");
        return;
    }
    printf("\n content of the stack\n");
    for(i=0;i<=top;i++)
    {
        printf("%d",s[i]);
    }
}
void main()
{
    printf("enter the size");
    scanf("%d",&n);
    for(;;)
    {
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            default:exit(0);
            

        }
    }
}
