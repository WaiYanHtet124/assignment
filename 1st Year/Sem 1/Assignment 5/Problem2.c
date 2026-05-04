#include<stdio.h>
void main()
{
    int i, num, fac=1;
    printf("Enter your positive number:");
    scanf("%d",&num);

    i = num;
    while(num>0){
        fac *= num;
        num--;
    }
    printf("The factorial of the number %d is %d",i,fac);
}
