#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("first delete element");
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
         printf("%d",a[i]);
    }
}
        