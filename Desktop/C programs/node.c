#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
};
typedef struct node *NODE;
NODE getnode()
{
   NODE x;
   x=(NODE)malloc(sizeof(struct node));
   if(x==NULL)
   {
      printf("Out of memory\n");
      exit(0);
   }
   return(x);
}
NODE insert_front(int item,NODE first)
{
   NODE temp;
   temp=getnode();
   temp->info=item;
   temp->link=first;
   return(temp);
}
void display(NODE first)
{
   NODE temp;
   if(first==NULL)
   {
      printf("list is empty\n");
      return;
   }
   printf("the contents of singly linked list\n");
   temp=first;
   while(temp!=NULL)
   {
       printf("%d",temp->info);
       temp=temp->link;
   }
   printf("\n");
}
NODE concatenate(NODE first,NODE sec)
{
   NODE cur;
   if(first==NULL)
   return(sec);
   if(sec==NULL)
   return(first);
   cur=first;
   while(cur->link!=NULL)
   {
      cur->link=sec;
    }
    return(first);
}
NODE reverse(NODE first)
{
   NODE cur,temp;
   cur=NULL;
   while(first!=NULL)
   {
      temp=first;
      first=first->link;
      temp->link=cur;
      cur=temp;
   }
   return(cur);
}
void main()
{
    NODE first=NULL;
    NODE sec;
    int choice,item;
    for(;;)
    {
       printf("1.insert front 2.Display\n");
       printf("3.concatenate 4.reverse 5.exit\n");
       printf("enter the choice\n");
       scanf("%d",&choice);
	 switch(choice)
	   {
	      case 1:printf("enter the item to be inserted\n");
		     scanf("%d",item);
		     first=insert_front(item,first);
		     break;
	      case 2:display(first);
		     break;
	      case 3:concatenate(first,sec);
		     break;
	      case 4:reverse(first);
		     break;
             default:exit(0);
       }
    }
}