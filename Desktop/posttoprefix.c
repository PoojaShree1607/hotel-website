#include<stdio.h>
#include<string.h>
void push(char item[],int *top,char s[][20])
{
    *top=*top+1;
    strcpy(s[*top],item);
}
char *pop(int *top,char s[][20])
{
    char *item;
    item=s[*top];
    *top=*top-1;
    return item;
}
void postfix_prefix(char postfix[],char prefix[])
{
    char s[20][20];
    int top;
    char symbol;
    char temp[2];
    char *op1;
    char *op2;
    int i;
    top=-1;
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        temp[0]=symbol;
        temp[1]='\0';
        switch(symbol)
        {
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
            op2=pop(&top,s);
            op1=pop(&top,s);
            strcpy(prefix,temp);
            strcat(prefix,op1);
            strcat(prefix,op2);
            push(prefix,&top,s);
            break;
            default:
            push(temp,&top,s);
        }
    }
}