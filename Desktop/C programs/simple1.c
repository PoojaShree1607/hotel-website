#include<stdio.h>
void main()
{
   int a,b;
   printf("enter the a and b value");
   scanf("%d %d",&a,&b);
   if(a==b)
   {
       printf("%d and %d is equal",a,b);

   }
   else if(a>b)
   {
       printf("%d is greater %d ",a,b);

   }
   else
   
       printf("%d is less than %d",a,b);
   
}