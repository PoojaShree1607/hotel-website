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
 char s[20][20],symbol,temp[2],*op1,*op2;
 int top=-1,i;
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
 default:push(temp,&top,s);
 }
 }
 }
 void main()
 {
 char postfix[20];
 char prefix[20];
 printf("enter the postfix expressio\n");
 scanf("%s",postfix);
 postfix_prefix(postfix,prefix);
 printf("the prefix expression is %s\n",prefix);
 getch();
}