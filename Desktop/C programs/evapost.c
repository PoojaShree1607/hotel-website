#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
double compute(char symbol,double op1,double op2)
{
    switch(symbol)
    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2; 
        //case '$': 
        //case '^':return power(op1*op2);

    }
}
void main()
{
    double s[20],op1,op2,res;
    int top=-1,i;
    char postfix[20],symbol;
    printf("enter the postfix expression\n");
    scanf("%s",postfix);
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        s[++top]=symbol-'0';
        else
        {
            op2=s[top--];
            op1=s[top--];
            res=compute(symbol,op1,op2);
            s[++top]=res;
        }    
    }
    res=s[top--];
        printf("The result is %f\n",res);
}

