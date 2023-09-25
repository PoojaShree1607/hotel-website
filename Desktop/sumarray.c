#include<stdio.h>
void sumarray(float a[],int n)
{
    if(n==-1)
    return;
    sumarray(a,n-1);
    printf("%d\n",a[n]);
}

void main()
{
    int n,x,a[10];
    printf("Enter the size\n");
    scanf("%d",&n);
    
}