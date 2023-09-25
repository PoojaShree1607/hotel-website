#include<stdio.h>
void tower(int n,char source,char temp,char dest)
{
    if(n==1)
    {
        printf("move %d from %c To %c "<n,source,dest);
        return;

    }
    tower(n-1,source,dest,temp);
    printf("move %d disc from %c to %c\n",n,source,dest);
    tower(n-1,temp,source,dest);
}
void main()
{
    int n;
    printf("enter the no disc");
    scanf("%d",&n);

    tower(n,'A','B','C');
}