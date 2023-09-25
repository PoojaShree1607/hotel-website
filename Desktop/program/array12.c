#include<stdio.h>
void array(int a[],int n)
{
    if(n==-1)
    return;
    array(a,n-1);
    printf("%d\n",a[n]);
}
void main()
{
    int n,i;
    int a[10];
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the array element\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    array(a,n-1);
}