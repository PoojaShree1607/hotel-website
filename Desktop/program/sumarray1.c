#include<stdio.h>
int sumarray(int a[],int n)
{
    if(n==-1)
    return 0;
    return sumarray(a,n-1)+a[n];
}
void main()
{
    int n,i;
    int a[10],res;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the array element\n");
    for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   res=sumarray(a,n-1);
   printf("sum=%d\n",res);
}