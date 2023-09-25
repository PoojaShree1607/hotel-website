#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int large(int a[],int n)
{
    int big;
    if(n==0)return a[n];
    big=large(a,n-1);
    if(a[n]>big)return a[n];
    return big;
}
int mul(int m,int n1)
{
    if(m==0||n1==0)
    return 0;
    if(n1==1)return m;
    return mul(m,n1-1)+m;
}
void tower(int n2,int source,int temp,int destination)
{
    if(n2==0)return;
    tower(n2-1,source,destination,temp);
    printf("move disc %d from %c to %c \n",n2,source,destination);
    tower(n2-1,temp,source,destination);
}
void main()
{
    int n,i,a[10],big;
    int m,n1;
    int n2,choice;
    for(;;)
    {
        printf("enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the number to sort");
            scanf("%d",&n);
            printf("enter n terms");
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
                big=large(a,n-1);
                printf("largest =%d\n",big);
                break;
            case 2:printf("enter the value m and n");
            scanf("%d %d",&m,&n1);
            printf("prod(%d %d)=%d \n",m,n1,mul(m,n1));
            break;
            case 3:printf("enter the number of disc\n");
            scanf("%d",&n2);
            tower(n2,'A','B','C');
            break;
            default:exit(0);
        }
    }
}