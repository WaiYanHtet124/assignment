#include<stdio.h>
void main()
{
    int num,sum,i,digit,number;

    printf("Enter the value of number:");
    scanf("%d",&num);

    if(num>=10 && num<=99)
    printf("This is two digits number\n");

    else if (num>=100 && num<=999)
    printf("This is three digits number\n");

    else printf("A positive integer between 11 and 999\n");
    number=num;

    while(num>0)
    {
        digit=num%10;

        num/=10;
        sum+=digit;
        printf("The extract digits: %d\n",digit);
    }

    if (sum==7)
    printf("This is a lucky number");

    else printf("This is not a lucky number");
}
