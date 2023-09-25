#include<stdio.h>
#include<string.h>
void main(){
char s[]="manu";
int len;
len=strlen(s);
printf("length of string is %d \n",len);


// WIth the help of return value
char h[]="harshi";
printf("initial value of h is %s \n",h);
char *hUpper;
hUpper=strupr(h);
printf("upper case of harshi is %s \n",hUpper);

// without the help of return value
char a[]="pooja";
strupr(a);
printf("upper case of s is %s \n",a);

char b[]="anusha";
strrev(b);
printf("reverse of anusha is %s \n",b);


char s1[]="pooja",s2[]="anu";
printf("before concatenation s1 %s \n",s1);
printf("before concatenation s2 %s \n",s2);
strcat(s2,s1);
printf("after concatenation s1 %s \n",s1);
printf("after concatenation s2 %s \n",s2);

}