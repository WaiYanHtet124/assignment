#include<stdio.h>
void main()
{
int num,sum;
for(int i=1;i<=5;i++)
{
printf("Enter your number\n");
scanf("%d",&num);
if(num%2==0){
sum+=num;
}
}

printf("The sum of even numbers : %d",sum);

}
