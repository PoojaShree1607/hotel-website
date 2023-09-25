#include<stdio.h>
#include<string.h>
void main()
{
     char s1[]="rama";

    char s2[]="pooja";
    
    printf("s2 before is %s \n",s2);
    strcpy(s2,s1);
    printf("s2 after is %s",s2);

char a[]="rama";
char b[]="seetha";
 int len;
len=strcmp(a,b);

if(len==0)
{
    printf("\n the string is same ");
}
else
printf("\n not same");


char d[]="good";
char e[]="morning";

strcat(d,e);
printf("\n after concatenation d is %s",d);

char r[]="anu";
strrev(r);
printf("\n the reversed string is %s",r);

char t[]="harshi";
strupr(t);
printf("\n the upper case is %s",t);

char u[]="ANU";
strlwr(u);
printf("\n the lower case is %s",u);

char h[]="anusha";
int j;
j=strlen(h);
printf("\n the length is %d",j);

char ek[]="amma";
int i,count=0;
for(i=0;ek[i]!='\0';i++)
{
    count++;
}
printf("\n length of e is %d",count);

}