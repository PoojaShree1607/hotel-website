#include<stdio.h>
int add(int a,int b)
{
int sum;
sum=a+b;
return sum;
}

int main()
{
    int res,a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    res=add(a,b);
    printf("the sum is res %d",res);
}









