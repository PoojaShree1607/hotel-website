#include<stdio.h>
void main()
{
    int a,b,res;
    int no;
    printf("enter the a and b value");
    scanf("%d %d",&a,&b);
    printf("enter the no");
    scanf("%d",&no);
    switch(no)
    {
        case 1:res=a+b;
        printf("result is %d",res);
        break;
        case 2:res=a-b;
        printf("result is %d",res);
        break;
        case 3:res=a*b;
        break;
        case 4:res=a/b;
        break;
        default: exit(0);

    }
    printf("result is %d",res);
}