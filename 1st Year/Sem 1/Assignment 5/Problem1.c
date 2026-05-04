#include<stdio.h>
void main()
{
    int sum=0, i;
    printf("Enter your number:");

    while (i>0){

        scanf("%d",&i);
        sum += i;
    }
    printf("The result = %d",sum);
}
