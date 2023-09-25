#include<stdio.h>
void main()
{
    int i,evensum=0,oddsum=0,n;
    printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<n;i=i+2)
    {
        oddsum=oddsum+i;
    }
    printf("oddsum is %d\n",oddsum);
    for(i=0;i<n;i=i+2)
    {
        evensum=evensum+i;
    }

    for(i=1;i<n;i++){
        if(i%2==0){
            evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }
    printf("even sum is%d\n",evensum);

}