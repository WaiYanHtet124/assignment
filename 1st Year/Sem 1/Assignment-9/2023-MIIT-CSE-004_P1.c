#include<stdio.h>

int palindrome(int num);
int CheckSuperPalindrome(int num);

void main()
{
    int num,result,square,square_reverse,reverse;
    printf("Enter num:");
    scanf("%d",&num);


    if(palindrome(num))
        {printf("\nTherefore, %d is a palindrome number",num);}
    else
    printf("\n%d is not a palindrome number",num);

    if(CheckSuperPalindrome(num)==2)
        printf("\nTherefore, %d is a Super palindrome number",num);
    else
        printf("\nThe square of %d is not a palindrome number",num);

}

int palindrome(int num)
{
    int temp,remainder,reverse=0;
    temp=num;

    while(temp>0)
    {
        remainder=temp%10;
        temp=temp/10;
        reverse=remainder+(reverse*10);

    }
    printf("The reverse number of %d is %d",num,reverse);
    if(reverse==num) {return 1;}
    else return 0;

}

int CheckSuperPalindrome(int num)
{
    int square=1,tempsquare,square_reverse=0,remainder1;

    square=num*num;
    printf("\nThe square of %d is %d",num,square);

    tempsquare=square;

    while(tempsquare>0)
    {
        remainder1=tempsquare%10;
        tempsquare=tempsquare/10;
        square_reverse=remainder1+(square_reverse*10);
    }
    if(square_reverse==square) return 2;
    else return 0;
}
