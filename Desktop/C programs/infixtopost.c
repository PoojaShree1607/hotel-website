#include<stdio.h>
#include<string.h>

    int F(char symbol)
    {
        switch(symbol)
        {
            case '+':
            case '-':return 2;
            case '*':
            case '/':
            case '%':return 4;
            case '$':
            case '^':
            case '(': return 0;
            case '#':return 0;
            default:return 8;
        }
    }
    int G(char symbol)
    {
        switch(symbol)
        {
            case '+':
            case '-':return 1;
            case '*':
            case '/':
            case '%':return 3;
            case '$':return 6;
            case '^':
            case '(':return 9;
            case ')':return 0;
            default :return 7;

        }
    }
    void infix_postfix(char infix[20],char postfix[20])
    {

        int top=-1,i,j;
        char s[10],symbol;
        top=-1;
        s[++top]='#';
        j=0;
        for(i=0;i<=strlen(infix);i++)
        {
            symbol=infix[i];
            while(F(s[top])>G(symbol))
            {
                postfix[j++]=s[top--];

            }
            if(F(s[top])!=G(symbol))
            {
              s[++top]=symbol;
            }
            else
               top--;
        }
        top=top-1;
        while(s[top]!='#')
        {
            postfix[j++]=s[top--];
        }
        postfix[j]='\0';
    }



void main()
{
    char infix[20],postfix[20];
    printf("enter the expression");
    scanf("%s",infix);
    infix_postfix(infix,postfix);
    printf("postfix expression is %s",postfix);
}