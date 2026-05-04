#include<stdio.h>
void main()
{
    int num1=0,num2=1,num3,i,counter,sum=0;

    printf("Enter the term for Fabonacci:");
    scanf("%d",&counter);

    printf("The Fabonacci for this :");

    for(i=1;i<=counter;i++)
    {
       printf("%d,",num1);
        sum+=num1;
        num3=num1+num2;
        num1=num2;
        num2=num3;
    }

    printf("\nThe sum of the Fabonacci sequence is %d",sum);
}
