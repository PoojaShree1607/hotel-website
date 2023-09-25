#include<stdio.h>
#include<stdlib.h>
void main(){
    int num,rev=0,dig,temp,n;

    printf("Enter num");
    scanf("%d",&num);

    temp=num;

    while(temp!=0){
        dig=temp%10;
        rev=rev*10+dig;
        temp=temp/10;
    }

    while(rev!=0){
        n=rev%10;
        switch (n)
        {
            case 1: printf("ONE \t");
                    break;
            case 2: printf("TWO \t");
                    break;
            case 3: printf("THREE \t");
                    break;
            case 4: printf("FOUR \t");
                    break;
            case 5: printf("FIVE \t");
                    break;
            case 6: printf("SIX \t");
                    break;
            case 7: printf("SEVEN \t");
                    break;
            case 8: printf("EIGHT \t");
                    break;
            case 9: printf("NINE \t");
                    break;
            case 0: printf("ZERO \t");
                    break;
            default: exit(0);
        }
        rev=rev/10;
    }

}