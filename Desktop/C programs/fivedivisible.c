#include<stdio.h>
void main()
{
    int a[20],i,n,sum=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element are");
     for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if(sum%5==0)
    {
        printf("no is divisible by 5");

    }
    else
    printf("no is not divisible by 5");

}