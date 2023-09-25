#include<stdio.h>
void main()
{
    struct subject
    {
        int marks1;
        int marks2;
        int marks3;   
    }m1={90,98,95};
    

    struct  student
    {
        char name[20];
        char usn[20];
        int sem;
    }s1={"rama","20ise44",3};
    struct subject marks;

    printf("the name is %s\n",s1.name);
    printf("usn is %s\n",s1.usn);
    printf("the sem is %d\n",s1.sem);
    printf("marks1 is %d\n",m1.marks1);
    printf("marks2 is %d\n",m1.marks2);
    printf("marks3is %d\n",m1.marks3);
}
