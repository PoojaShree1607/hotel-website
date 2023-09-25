#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="rama";
    char str2[]="seetha";
    
    int i,j=0,len;
    len=len=strlen(str1);

    for(i=len;str2[j]!='\0';i++){
        str1[i]=str2[j];
        j++;
    }

    printf("the concatination is %s",str1); 
}