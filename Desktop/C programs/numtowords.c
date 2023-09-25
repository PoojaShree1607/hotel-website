#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num,temp,rev=0,dig,m,n;
printf("enter the value of num:\n");
scanf("%d",&num);

temp=num;
while(temp!=0)
{
    m=m%10;
    rev=rev*10+m;
    n=n/10;
}

while(rev!=0)
{
    n=rev/10;
   switch(n)
{
        case 1:printf("one\t");
                 break; 
        case 2:printf("two\t");
                break; 
        case 3:printf("three");
                break;
        case 4:printf("four\t");
                break; 
        case 5:printf("five\t");
                break; 
        case 6:printf("six\t");
                break;
        case 7:printf("seven\t");
                break; 
        case 8:printf("eight\t");
                break; 
        case 9:printf("nine\t");
                break;
        case 10:printf("zero\t");
                break; 
                default :     exit (0);
}
}
}

        










}   