#include<stdio.h>
void main()
{
    int a[50],i,n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the no");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
     
        switch(a[i])
        {
            
            case 1:printf("one\t");
            break;
            case 2:printf("two\t");
            break;
            case 3:printf("three\t");
            break;
            case 4:printf("four\t");
            break;
            case 5:printf("five\t");
            break;
            case 6:printf("six\t");
            break;
            case 7:printf("seven\t");
            break;
            case 8:printf("eight\t");
            break;
            case 9:printf("nine\t");
            break;
            case 0:printf("zero\t");
            break;
    
        }
        
    }
    


}