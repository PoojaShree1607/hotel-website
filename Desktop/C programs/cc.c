#include<stdio.h>

void main()
{
    int a,*aptr;
    a=3;
    aptr=&a;

        printf("the contents of a is %d\n",a);
        printf("the address of a is %x\n",&a);

        printf("the contents of aptr is %d\n",*aptr);
        printf("the address of aptr is %x\n",&aptr);

}