#include<stdio.h>
void main()
{
    int limit, num=2, sum=0;

    printf("Enter the limit:");
    scanf("%d",&limit);

    while(num<=limit){
        sum += num * num * num;
        num += 2;
    }

    printf("The sum of cubes of even numbers up to %d is %d \n",limit,sum);
}
