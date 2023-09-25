#include<Stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       printf("a[%d] is the %d\n",i,a[i]);
    }
}