#include<stdio.h>
void main()
{
    int num,i;

    printf("Enter numbers between 1 and 3000:");
    scanf("%d",&num);

    printf("The Factors of %d:",num);
    for(i=1;i<=num;i++)
    {
        if((i==1 || i<=3000) &&  (num%i==0))

            printf("%d, ",i);

    }
}
