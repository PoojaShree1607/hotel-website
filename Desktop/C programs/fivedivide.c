#include<stdio.h>
void main()
{
    int m,rev=0,n,sum=0;
    printf("enter the number");
    scanf("%d",&n);

    while(n!=0)
    {
        m=n%10;
        n=n/10;
        sum=sum+m;
    }
    printf("%d\n",sum);

    if(sum%5==0)
    {
        printf("the number is divisible by 5");
    }
    else
    printf("not divisible");
}