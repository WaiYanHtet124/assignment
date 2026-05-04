#include<stdio.h>
void main()
{
    int count=0, num, num2, dig;

    printf("Enter a number:");
    scanf("%d",&num);
    num2=num;

    printf("Enter digit ti search:");
    scanf("%d",&dig);

    while(num>0){
        if(num%10==dig){
            count++;
        }
        num/=10;
    }

    printf("Total occurrence of %d in number %d is %d",dig,num2,count);
}
