#include<Stdio.h>
void main()
{
    int a[30],i,n,sum=0,j;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<n;i++)
    {
       printf("%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];

    }
    printf("sum is %d",sum);
}