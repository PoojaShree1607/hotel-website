#include<stdio.h>

void main()
{
    int i,flag;
char n1[10]="pooja";
char n2[10]="pos";
for(i=0;n1[i]!='\0'&&n2[i]!='\0';i++)
{
if(n1[i]==n2[i])
printf("same");
else
printf("not same\n");
break;
}
}


        