//insert element to last of array//
#include<stdio.h>
void main()
{
    int a[10],i,n,item;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the element tobe inserted");
    scanf("%d",&item);
    a[n]=item;
    a[n+1]='\0';
    printf("arrays are");
    {
        printf("%d",a);
    }
}