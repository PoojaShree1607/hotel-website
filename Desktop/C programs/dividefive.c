#include<stdio.h>
void main()
{
    int n,sum=0,rev=0,d,s;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
        
    }
    if(sum%5==0)
    {
        printf("no is divisible by 5");
    }
    else
    printf("no is not divisible 5");
    
}