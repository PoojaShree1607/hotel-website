#include<stdio.h>
void main(){
    int a[100],n,i;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("array elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}