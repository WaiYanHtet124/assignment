
#include<stdio.h>
int Fibonacci(int num);
void main()
{
    int num;
    printf("Enter Terms : ");
    scanf("%d",&num);
    printf("The Fibonacci series of %d : ",num);
    Fibonacci(num);
}
int Fibonacci(int num)
{
    static int n1=1,n2=1,n3;
    if(num<1)
    {
        return 0;
    }
    else
    printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;

       return Fibonacci(num-1);
}
