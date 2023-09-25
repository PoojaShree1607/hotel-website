#include<stdio.h>
void main()
{
  
  int num,rev=0,dig,temp,count=1;
  printf("enter num");
  scanf("%d",&num);

  temp=num;
  while(temp!=0){
    dig=temp%10;
    rev=rev*10+dig;
    temp=temp/10;
  }
  
  while(rev!=0){
    dig=rev%10;
  
    if(dig % 2==0){
      printf(" %d digit is %d and it is even \n",count,dig);
    }else{
       printf(" %d digit is %d and it is odd \n",count,dig);
    }
    rev=rev/10;
    count=count+1;
  }

  

}