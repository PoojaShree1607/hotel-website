#include<stdio.h>
void main()
{
    int n,d,s=0,rev=0,a,f=0;
    printf("enter the num");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
        

    }
    printf("%d\n",rev);
    while(rev!=0)
    {
        s=rev%10;
        rev=f*10+s;
        a=rev/10;
    }
    printf("%d",rev);
}    
        //if(rev%2==0)
        //{
       // printf("digit is even\n");
        //}
        //else
        //printf("digit is odd\n");
    //} 
