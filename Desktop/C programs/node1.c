#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
   char name[20];
   int id;
   int sem;
   struct student *link;
};
typedef struct student *STUDENT;
STUDENT getnode(void)
{
  STUDENT x;
  x=(STUDENT)malloc(sizeof(struct student));
  if(x==NULL)
  {
     printf("out of memory\n");
     exit(0);
  }
  return(x);
}
void freenode(STUDENT x)
{
    free(x);
}
STUDENT insert_front(char name[],int id,int sem,STUDENT first)
{
    STUDENT temp;
    temp=getnode();
    strcpy(temp->name,name);
    temp->sem=sem;
    temp->id=id;
    temp->link=first;
    first=temp;
    return(first);
}
/*STUDENT insert_pos(char name[],int id,int sem,int pos,STUDENT first)
{
  STUDENT temp;
  STUDENT prev;
  int count;
  temp=getnode();
  strcpy(temp->name*/
  STUDENT delete_student(int id,STUDENT first)
  {
     STUDENT prev,cur;
     if(first==NULL)
     {
	printf("no student in the organisation\n");
	return(NULL);
     }
     prev=NULL;
     cur=first;
     while(cur!=NULL && id!=cur->id)
     {
	  prev=cur;
	  cur=cur->link;
     }
     if(cur==NULL)
     {
	printf("student id is not found\n");
	return first;
     }
     if(prev==NULL)
     first=first->link;
     else
     prev->link=cur->link;
     free(cur);
     return(first);
}
STUDENT search(int id,STUDENT first)
{
   STUDENT cur;
   char name[20];
   int sem;
   if(first==NULL)
   {
     printf("no student in the organisation\n");
     return(NULL);
    }
    cur=first;
    while(cur!=NULL)
    {
       if(id==cur->id)
       break;
       cur=cur->link;
     }
     if(cur==NULL)
     {
	printf("student with id %d not found \n",id);
	return(first);
      }
      printf("student found with following information\n");
      printf("NAME:%s\n ID :%d\n Sem:%d\n",cur->name,cur->id,cur->sem);
      printf("NAME:");
      scanf("%s",name);
      printf("ID:");
      scanf("%d",id);
      printf("Sem:");
      scanf("%d",&sem);
      strcpy(cur->name,name);
      cur->id=id;
      cur->sem=sem;
      return first;
 }
 void display(STUDENT first)
 {
     STUDENT temp;
     if(first==NULL)
     {
	printf("NO student in the organisation\n");
	return;
      }
      printf("student Name Student ID semester \n");
      printf(".................................\n");
      for(temp=first;temp!=NULL;temp=temp->link)
      printf("%s %d %d\n",temp->name,temp->id,temp->sem);
      printf("\n");
  }
  void main()
  {
     STUDENT first =NULL;
     int choice,id,sem;
     char name[10];
     for(;;)
     {
	 printf("1:insert front 2.delete\n");
	 printf("3.search  4.Display 5.exit\n");
	 printf("enter the choice\n");
	 scanf("%d",choice);
	 if(choice ==1 || choice==2 ||choice ==3)
	 {
	   printf("name:");
	   scanf("%s",name);
	   printf("Id");
	   scanf("%d",&id);
	   printf("sem:");
	   scanf("%d",&sem);
	  }
	  switch(choice)
	  {
	    case 1:first=insert_front(name,id,sem,first);
		   break;
	    case 2:printf("delete student details for id:");
		   scanf("%d",&id);
		   first=delete_student(id,first);
		   break;
	    case 3:printf("search with id\n");
		    scanf("%d",&id);
		    search(id,first);
		    break;
	    case 4:display(first);
		   break;
	    default :exit(0);
	    }



      }

 }