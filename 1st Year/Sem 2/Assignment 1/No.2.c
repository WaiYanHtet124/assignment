#include<stdio.h>
int Count(int num);
void main()
{
   int num;
   printf("Enter number: ");
   scanf("%d",&num);
   int count=Count(num);
   printf("There are %d digits",count);

}
int Count(int num)
{
   static int count=0;

    if(num>0)
    {
        count++;
        Count(num/10);
    }
   return count;
}
