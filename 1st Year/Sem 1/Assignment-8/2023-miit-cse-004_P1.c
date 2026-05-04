#include<stdio.h>
void main()
{
    int i,num,remainder,tempnum,digit,sum,luckynum;
    printf("Lucky numbers between 100 to 999:\n");
    for(i=100;i<=999;i++)
    {
       sum=0;
       num=i;
       while(num>0)
       {
           digit=num%10;
           sum=sum+digit;
           num=num/10;
}
       if(sum==7)
       printf("%d\t ",i);
    }
}
