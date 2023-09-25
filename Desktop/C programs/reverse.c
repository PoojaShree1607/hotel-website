#include<stdio.h>
void main()
{
    int i,n,a[10];
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("after reverse");
  for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

}