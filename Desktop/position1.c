#include<stdio.h>
void main()
{
    int arr[10],i,n,pos=0;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);

    }
    printf("enter the position");
    scanf("%d",&pos);
   
   for(i=pos;i<n;i++){
       arr[i]=arr[i+1];
   }

    printf("elements are");
    for(i=0;i<n-1;i++)
    {
        printf("%d \t",arr[i]);
    }

}