#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int evaluate_prefix(char postfix[20])
{
    int s[20],top=-1,i,res,op1,op2;
    char op,sy;
    strrev(prefix);
    for(i=0;i<strlen(prefix);i++)
    {
        sy=postfix[i];
        if(isdigit(sy))
        s[++top]=sy-'0';
    else
    op1=s[top--];
    op2=s[top--];
    res=compute(op1,op2,op);
    s[++top]=res;
    }

printf("result=%d",s[top]);

int compute(int op1,int op2,char op)
{
    switch(op)
    {
        case '+':return op1+op2;
        break;
        case '-':return op1-op2;
        break;
        case '*':return op1*op2;
        break;
        case '/':return op1/op2;
        break;
        default:exit(0);
        
    }
}
void main()
{
    char prefix[20];
    printf("enter the prefix expression");
    scanf("%s",prefix);
    evaluate_prefix(prefix);
                
}
}