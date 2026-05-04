#include<stdio.h>
#include<math.h>
void main()
{
    int i,num,flag;
    printf("Prime number between 2 to 999:\n");
    for(num=3;num<=999;num++)
    {
      flag=1;
      for(i=2;i<num;i++)
      {
          if(num % i ==0)
          {
              flag=0;break;
          }
      }
      if(flag==1) printf("%d\t ",num);
    }
}
