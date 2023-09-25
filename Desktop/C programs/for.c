#include<stdio.h>
#include<math.h>

void main()
{
    int i,n;
    float res;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       res=sqrt(i) ;
       printf("sqrt of %d is %f\n",i,res);
    }
}