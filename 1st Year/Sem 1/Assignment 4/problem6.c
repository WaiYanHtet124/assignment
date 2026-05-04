#include<stdio.h>
void main()
{
{
int num;
float i,sum;
printf("How many numbers of sequences\n");
scanf("%d",&num);
for( i=1;i<=num;i++)
{
sum+=1/i;
}

printf("The sum of %d numbers of sequences : %f",num,sum);

}
}
