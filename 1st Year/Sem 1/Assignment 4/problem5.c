#include<stdio.h>
void main()
{
int num,sum;
printf("How many numbers of sequences\n");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
sum+=i*i;
}

printf("The sum of %d numbers of sequences : %d",num,sum);

}
