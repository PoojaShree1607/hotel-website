#include<stdio.h>
#include<string.h>
void main()
{
char s1[]={"rama"};
char s2[]={"rama"};

int a;
a=strcmp(s1,s2);

if(a==0)
    printf("two strings are equal \n");
else 
    printf("two strings are not equal \n");

// printf("res 1 is %d \n", strcmp("harshi","harshi"));
// printf("res 2 is %d \n", strcmp("harshi","anu"));
// printf("res 3 is %d \n", strcmp("RAMA","rama"));

}
    


  






