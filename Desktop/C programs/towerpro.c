#include<stdio.h>
#include<stdlib.h>
int a[10],n,big,temp,distination,source,m;
int large(int a[],int n)
{
    int big;
    if(n==0)return a[n];
    big=large(a,n-1);
    if(a[n]>big)
    return big;
}
void tower(int n,int source,int temp,int destination)
{
      if(n==0)return;
      tower(n-1,source,destination,temp);
      printf("move disc %d from %c to %c\n",n,source,distination);
      tower(n-1,temp,source,destination);

}
 int mul(int m,int n)
 {
     if(m==0||n==0)
     return 0;
     if(n==1)
     return m;
     else 
     return mul(m,n-1)+m;
 }
 
 void main()
 {
     int n,no,ch,a[10],big ,pro,i;
     for(;;)
     {
         printf("1.find MAx element\n");
         printf("2.tower of honio\n");
         printf("3.multication of two natural no");
         printf("any other choice:exit");
         scanf("%d",&ch);
         switch(ch)
         {
              case 1:printf("enter the  value");
              scanf("%d",&n);
              printf("enter the item\n");
              for(i=0;i<n;i++)
              scanf("%d",&a[i]);
              big=large(a,n-1);
              printf("largest =%d\n",big);
              break;


         
         case 2:printf("enter the no of disc\n");
         scanf("%d",&no);
         tower(no,'A','B','C');
         break;
         case 3:printf("enter the m and n");
         scanf("%d %d",&m,&n);
         pro=mul(m,n);
         printf("%d",pro);
         break;
         default :exit(0);
         }
     }

     }   
