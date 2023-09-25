#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int F(char symbol)
    {
        switch(symbol)
        {
            case '+':
            case '-':return 1;
            case '*':
            case '/':
            case '%':return 3;
            case '$':
            case '^':return 6;
            case ')': return 0;
            case '#':return -1;
            default:return 8;
        }
    }
    int G(char symbol)
    {
        switch(symbol)
        {
            case '+':
            case '-':return 2;
            case '*':
            case '%':
            case '/':return 4;
            case '$':
            case '^':return 5;
            case '(':return 0;
            case ')':return 9;
            default :return 7;

        }
    }
    void infix_prefix(char infix[20],char prefix[20])
    {

        int top=-1,i,j;
        char s[10],symbol,rev_infix;
        top=-1;
        s[++top]='#';
        j=0;
       rev_infix=strrev(infix);
        for(i=0;i<=strlen(infix);i++)
        {
            symbol=infix[i];
            while(F(s[top])>G(symbol))
            {
                prefix[j++]=s[top--];

            }
           // printf("%c\n",symbol);
            if(F(s[top])!=G(symbol))
            {
              s[++top]=symbol;
            }
            else
               top--;
        }
    printf("%c\n",symbol);
    top=top+1;
        while(s[top]!='#')
        {
            prefix[j++]=s[top++];
        }
        strrev(prefix);
        prefix[j]='\0';
    }
    



void main()
{
    char infix[20],prefix[20];
    printf("enter the expression");
    scanf("%s",infix);
    infix_prefix(infix,prefix);
    printf("prefix expression is %s",prefix);
    
}