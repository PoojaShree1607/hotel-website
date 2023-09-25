#include<Stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("enter the string");
    gets(str1);
    puts(str1);
    str2[20]=strrev(str1);
    printf("%s",str2);
    if(strcmp(str1,str2)==0)
    printf("string is palandromic");
    else
    printf("string is not palanadromic");
}