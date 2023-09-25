#include<stdio.h>
void main()
{
    int a[10];
    int i,n,big;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    big=a[0];
    for(i=0;i<n;i++)
    { 
        if(a[i]>big)
        {
            big=a[i];
        }
    }

    printf("%d",big);

}