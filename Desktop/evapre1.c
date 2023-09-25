#include<stdio.h>
#include<math.h>
#include<string.h>
double compute(char symbol, double op1,double op2)
{
switch(symbol)
{
case '+': return op1 + op2;
case '-': return op1 - op2;
case '*': return op1 * op2;
case '/': return op1 / op2;
case '^': return pow(op1,op2);
default: return 0;
}
}
int is_digit(char symbol)
{
 return(symbol>='0' && symbol<='9');
}
void main()
 {
double stk[30],op1,op2,res;
int i,top=-1;
char symbol,prefix[30];
printf("Enter the prefix expression : \n");
scanf("%s",prefix);
strrev(prefix);
for(i=0;i<strlen(prefix);i++)
{
symbol=prefix[i];
if(is_digit(symbol))
{
stk[++top]=symbol-'0';
}
else
{
op1=stk[top--];
op2=stk[top--];
 res=compute(symbol,op1,op2);
 stk[++top]=res;
 }
}
res=stk[top--];
printf("The result is : %f\n",res);
getch();
 }
